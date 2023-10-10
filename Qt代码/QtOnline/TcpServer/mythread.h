#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include <QDebug>

class myThread : public QThread
{
    Q_OBJECT
public:
    explicit myThread(QTcpSocket *s);
    void run();     //线程处理函数

signals:
    void sendToWidget(QByteArray b); //自定义的信号

public slots:
    void clientInfoSlot(); // 自定义信号对应的槽函数

private:
    QTcpSocket *socket;
};

#endif // MYTHREAD_H
