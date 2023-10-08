#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 连接新建文件的槽函数，由单击信号触发
    connect(ui->newAction, &QAction::triggered, this, &MainWindow::newActionSlot);

    connect(ui->openAction, &QAction::triggered, this, &MainWindow::openActionSlot);
    connect(ui->saveAction, &QAction::triggered, this, &MainWindow::saveActionSlot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newActionSlot()
{
    // 清空文本框内容
    ui->textEdit->clear();
    // 修改窗口标题
    this->setWindowTitle("新建文本文档.txt");
}

// 打开文件的槽函数
void MainWindow::openActionSlot()
{
    // 第一个参数是文件选择框的父类对象，此处就是window，
    // 第二个参数是文件选择框的标题
    // 第三个是打开的默认路径，此处传的是当期文件路径
    // 第四个是只展示以 .cpp结尾的文件供选择
    // 返回值是选择的文件的路径
    QString fileName = QFileDialog::getOpenFileName(this, "选择一个文件",
                 QCoreApplication::applicationFilePath(), "*.cpp");
    if (fileName.isEmpty())
    {
        QMessageBox::warning(this, "警告", "请选择一个文件");
    }
    else
    {
        //qDebug() << fileName;
        QFile file(fileName);    //创建文件对象
        file.open(QIODevice::ReadOnly);
        QByteArray ba = file.readAll();
        ui->textEdit->setText(QString(ba));
        file.close();
    }
}

// 文件另存为的槽函数
void MainWindow::saveActionSlot()
{
    // 返回值是另存时新创建的文件路径（类似于新建）
    QString fileName = QFileDialog::getSaveFileName(this, "选择一个文件",
                QCoreApplication::applicationFilePath());
    if (fileName.isEmpty())
    {
        QMessageBox::warning(this, "警告", "请选择一个文件");
    }
    else
    {
        QFile file(fileName);
        file.open(QIODevice::WriteOnly);
        //ui->textEdit->toPlainText();
        QByteArray ba;
        ba.append(ui->textEdit->toPlainText());
        file.write(ba);
        file.close();
    }
}

// 继承自qobject的虚函数，也是事件，键盘按下事件
void MainWindow::keyPressEvent(QKeyEvent *k)
{
    // ctrl + s
    if (k->modifiers() == Qt::ControlModifier && k->key() == Qt::Key_S)
    {
        saveActionSlot();
    }
}

// 继承自qobject的虚函数，也是事件，鼠标按下事件，111
void MainWindow::mousePressEvent(QMouseEvent *m)
{
    // 获取光标的位置
    QPoint pt = m->pos();
    qDebug() << pt;

    if (m->button() == Qt::LeftButton)
    {
        qDebug() << "左键被按下";
    }
    else if (m->button() == Qt::RightButton)
    {
        qDebug() << "右键被按下";
    }
}

