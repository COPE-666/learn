#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    // 只有服务端才有对象，客户端没有
    server = new QTcpServer;

    // 监听8000端口
    server->listen(QHostAddress::AnyIPv4, PORT);

    //客户端发起连接，server发出信号
    connect(server, &QTcpServer::newConnection, this, &Widget::newClientHandler);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::newClientHandler()
{
    //建立TCP连接
    QTcpSocket *socket = server->nextPendingConnection();
    //socket->peerAddress();   //获取客户端地址
    //socket->peerPort(); //获取客户端的端口号，注意不是服务端监听的端口8000

    ui->ipLineEdit->setText(socket->peerAddress().toString());
    ui->portLineEdit->setText(QString::number(socket->peerPort()));

    //服务器收到客户端发送的信息，socket发出readyread信号，
    // 同样也可以通过readyread信号捕获服务端发送给客户端消息
    //connect(socket, &QTcpSocket::readyRead, this, &Widget::clientInfoSlot);

    //每接收一个客户端的连接，就启动一个线程
    myThread *t = new myThread(socket);   //创建线程对象
    t->start();                           //开始线程，会运行run函数

    connect(t, &myThread::sendToWidget, this, &Widget::threadSlot);
}

//void Widget::clientInfoSlot()
//{
//    //在槽函数中可以通过sender()获取信号的发出者，即上文的socket
//    QTcpSocket *s = (QTcpSocket *)sender();
//    ui->mainLineEdit->setText(QString(s->readAll()));
//}

void Widget::threadSlot(QByteArray b)
{
    ui->mainLineEdit->setText(QString(b));
}

