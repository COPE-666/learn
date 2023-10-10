#include "mythread.h"

myThread::myThread(QTcpSocket *s)
{
    socket = s;
}

// 重写QThread的run虚函数
void myThread::run()
{
    connect(socket, &QTcpSocket::readyRead, this, &myThread::clientInfoSlot);
}

//不能在其他类里面操作界面ui
void myThread::clientInfoSlot()
{
    //qDebug() << socket->readAll();
    QByteArray ba = socket->readAll();
    emit sendToWidget(ba);      //发送信号
}
