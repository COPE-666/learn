/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *clearButton;
    QPushButton *sendButton;
    QLabel *label_2;
    QLineEdit *recvLineEdit;

    void setupUi(QWidget *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName(QString::fromUtf8("Chat"));
        Chat->resize(400, 300);
        label = new QLabel(Chat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 81, 31));
        lineEdit = new QLineEdit(Chat);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 90, 281, 41));
        clearButton = new QPushButton(Chat);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(70, 250, 75, 23));
        sendButton = new QPushButton(Chat);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(230, 250, 75, 23));
        label_2 = new QLabel(Chat);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 160, 81, 31));
        recvLineEdit = new QLineEdit(Chat);
        recvLineEdit->setObjectName(QString::fromUtf8("recvLineEdit"));
        recvLineEdit->setGeometry(QRect(50, 200, 281, 41));

        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QWidget *Chat)
    {
        Chat->setWindowTitle(QApplication::translate("Chat", "Form", nullptr));
        label->setText(QApplication::translate("Chat", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">\350\276\223\345\205\245\344\277\241\346\201\257\357\274\232</span></p></body></html>", nullptr));
        clearButton->setText(QApplication::translate("Chat", "\346\270\205\347\251\272", nullptr));
        sendButton->setText(QApplication::translate("Chat", "\345\217\221\351\200\201", nullptr));
        label_2->setText(QApplication::translate("Chat", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">\346\224\266\345\210\260\344\277\241\346\201\257\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
