#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("47.101.128.140");
    db.setDatabaseName("mydatabase");
    db.setUserName("test1");
    db.setPassword("test1");

    if (db.open())
    {
        QMessageBox::information(this, "连接提示", "连接成功");

        m = new QSqlTableModel; // 数据模型
        m->setTable("student"); // 将要显示的数据库的表与数据模型关联起来
        // 将数据模型设置关联到ui界面的表格控件模型中
        ui->tableView->setModel(m);
    }
    else
    {
        QMessageBox::warning(this, "连接提示", "连接失败");
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    m->select(); // 提取数据并显示出来
}
