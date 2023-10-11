#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //连接数据库
    db = QSqlDatabase::addDatabase("QMYSQL");     //加载MySQL数据库驱动，返回数据库对象

    db.setDatabaseName("mydatabase"); // 设置要连接的数据库名称
    db.setHostName("localhost"); // 连接的数据库主机地址，本地就用localhost
    // 端口不修改的话默认就是3306
    db.setUserName("root");
    db.setPassword("root");

    if (db.open())
    {
        QMessageBox::information(this, "连接提示", "连接成功");
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

// 插入数据操作
void Widget::on_insertPushButton_clicked()
{
    QString id = ui->idLineEdit->text();
    QString name = ui->nameLineEdit->text();
    QString birth = ui->birLineEdit->text();

    // %1 对应第一个arg函数的参数，其他同理
    QString sql = QString("insert into student values (%1, '%2', '%3');")
            .arg(id).arg(name).arg(birth);

    QSqlQuery query;
    if (query.exec(sql)) // 返回执行的结果
    {
        QMessageBox::information(this, "插入提示", "插入成功");
    }
    else
    {
        QMessageBox::information(this, "插入提示", "插入失败");
    }
}

// 查询数据操作
void Widget::on_findPushButton_clicked()
{
    QSqlQuery query;
    query.exec("select * from student;");

    // 查询后的结果在query，故可以循环遍历
    while (query.next())
    {
        qDebug() << query.value(0); // 获取查询的某条数据的第一列
        qDebug() << query.value(1); // 第二列
        qDebug() << query.value(2);
    }
}
