/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *ipLineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *portLineEdit;
    QPushButton *cancelButton;
    QPushButton *connectButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        ipLineEdit = new QLineEdit(Widget);
        ipLineEdit->setObjectName(QString::fromUtf8("ipLineEdit"));
        ipLineEdit->setGeometry(QRect(180, 90, 161, 41));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 131, 51));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 100, 91, 31));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 160, 121, 41));
        portLineEdit = new QLineEdit(Widget);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setGeometry(QRect(180, 160, 161, 41));
        cancelButton = new QPushButton(Widget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(70, 220, 75, 23));
        connectButton = new QPushButton(Widget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(240, 220, 75, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\345\256\242\346\210\267\347\253\257</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\345\217\267</span></p></body></html>", nullptr));
        cancelButton->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        connectButton->setText(QApplication::translate("Widget", "\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
