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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *mainLineEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *clearButton;
    QPushButton *addButton;
    QPushButton *subButton;
    QPushButton *delButton;
    QPushButton *sevenButton;
    QPushButton *eightButton;
    QPushButton *nineButton;
    QPushButton *mulButton;
    QPushButton *fourButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QPushButton *divButton;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *threeButton;
    QPushButton *leftButton;
    QPushButton *zeroButton;
    QPushButton *rightButton;
    QPushButton *equalButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(197, 284);
        mainLineEdit = new QLineEdit(Widget);
        mainLineEdit->setObjectName(QString::fromUtf8("mainLineEdit"));
        mainLineEdit->setGeometry(QRect(10, 10, 181, 31));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 50, 180, 226));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        clearButton = new QPushButton(widget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setMinimumSize(QSize(40, 40));
        clearButton->setMaximumSize(QSize(40, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        clearButton->setFont(font);

        gridLayout->addWidget(clearButton, 0, 0, 1, 1);

        addButton = new QPushButton(widget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setMinimumSize(QSize(40, 40));
        addButton->setMaximumSize(QSize(40, 40));
        addButton->setFont(font);

        gridLayout->addWidget(addButton, 0, 1, 1, 1);

        subButton = new QPushButton(widget);
        subButton->setObjectName(QString::fromUtf8("subButton"));
        subButton->setMinimumSize(QSize(40, 40));
        subButton->setMaximumSize(QSize(40, 40));
        subButton->setFont(font);

        gridLayout->addWidget(subButton, 0, 2, 1, 1);

        delButton = new QPushButton(widget);
        delButton->setObjectName(QString::fromUtf8("delButton"));
        delButton->setMinimumSize(QSize(40, 40));
        delButton->setMaximumSize(QSize(40, 40));
        delButton->setFont(font);
        delButton->setIconSize(QSize(22, 22));

        gridLayout->addWidget(delButton, 0, 3, 1, 1);

        sevenButton = new QPushButton(widget);
        sevenButton->setObjectName(QString::fromUtf8("sevenButton"));
        sevenButton->setMinimumSize(QSize(40, 40));
        sevenButton->setMaximumSize(QSize(40, 40));
        sevenButton->setFont(font);

        gridLayout->addWidget(sevenButton, 1, 0, 1, 1);

        eightButton = new QPushButton(widget);
        eightButton->setObjectName(QString::fromUtf8("eightButton"));
        eightButton->setMinimumSize(QSize(40, 40));
        eightButton->setMaximumSize(QSize(40, 40));
        eightButton->setFont(font);

        gridLayout->addWidget(eightButton, 1, 1, 1, 1);

        nineButton = new QPushButton(widget);
        nineButton->setObjectName(QString::fromUtf8("nineButton"));
        nineButton->setMinimumSize(QSize(40, 40));
        nineButton->setMaximumSize(QSize(40, 40));
        nineButton->setFont(font);

        gridLayout->addWidget(nineButton, 1, 2, 1, 1);

        mulButton = new QPushButton(widget);
        mulButton->setObjectName(QString::fromUtf8("mulButton"));
        mulButton->setMinimumSize(QSize(40, 40));
        mulButton->setMaximumSize(QSize(40, 40));
        mulButton->setFont(font);

        gridLayout->addWidget(mulButton, 1, 3, 1, 1);

        fourButton = new QPushButton(widget);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        fourButton->setMinimumSize(QSize(40, 40));
        fourButton->setMaximumSize(QSize(40, 40));
        fourButton->setFont(font);

        gridLayout->addWidget(fourButton, 2, 0, 1, 1);

        fiveButton = new QPushButton(widget);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));
        fiveButton->setMinimumSize(QSize(40, 40));
        fiveButton->setMaximumSize(QSize(40, 40));
        fiveButton->setFont(font);

        gridLayout->addWidget(fiveButton, 2, 1, 1, 1);

        sixButton = new QPushButton(widget);
        sixButton->setObjectName(QString::fromUtf8("sixButton"));
        sixButton->setMinimumSize(QSize(40, 40));
        sixButton->setMaximumSize(QSize(40, 40));
        sixButton->setFont(font);

        gridLayout->addWidget(sixButton, 2, 2, 1, 1);

        divButton = new QPushButton(widget);
        divButton->setObjectName(QString::fromUtf8("divButton"));
        divButton->setMinimumSize(QSize(40, 40));
        divButton->setMaximumSize(QSize(40, 40));
        divButton->setFont(font);

        gridLayout->addWidget(divButton, 2, 3, 1, 1);

        oneButton = new QPushButton(widget);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        oneButton->setMinimumSize(QSize(40, 40));
        oneButton->setMaximumSize(QSize(40, 40));
        oneButton->setFont(font);

        gridLayout->addWidget(oneButton, 3, 0, 1, 1);

        twoButton = new QPushButton(widget);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        twoButton->setMinimumSize(QSize(40, 40));
        twoButton->setMaximumSize(QSize(40, 40));
        twoButton->setFont(font);

        gridLayout->addWidget(twoButton, 3, 1, 1, 1);

        threeButton = new QPushButton(widget);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        threeButton->setMinimumSize(QSize(40, 40));
        threeButton->setMaximumSize(QSize(40, 40));
        threeButton->setFont(font);

        gridLayout->addWidget(threeButton, 3, 2, 1, 1);

        leftButton = new QPushButton(widget);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setMinimumSize(QSize(40, 40));
        leftButton->setMaximumSize(QSize(40, 40));
        leftButton->setFont(font);

        gridLayout->addWidget(leftButton, 4, 0, 1, 1);

        zeroButton = new QPushButton(widget);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        zeroButton->setMinimumSize(QSize(40, 40));
        zeroButton->setMaximumSize(QSize(40, 40));
        zeroButton->setFont(font);

        gridLayout->addWidget(zeroButton, 4, 1, 1, 1);

        rightButton = new QPushButton(widget);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setMinimumSize(QSize(40, 40));
        rightButton->setMaximumSize(QSize(40, 40));
        rightButton->setFont(font);

        gridLayout->addWidget(rightButton, 4, 2, 1, 1);

        equalButton = new QPushButton(widget);
        equalButton->setObjectName(QString::fromUtf8("equalButton"));
        equalButton->setMinimumSize(QSize(40, 40));
        equalButton->setMaximumSize(QSize(40, 90));
        equalButton->setFont(font);

        gridLayout->addWidget(equalButton, 3, 3, 2, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        clearButton->setText(QApplication::translate("Widget", "C", nullptr));
        addButton->setText(QApplication::translate("Widget", "+", nullptr));
        subButton->setText(QApplication::translate("Widget", "-", nullptr));
        delButton->setText(QString());
        sevenButton->setText(QApplication::translate("Widget", "7", nullptr));
        eightButton->setText(QApplication::translate("Widget", "8", nullptr));
        nineButton->setText(QApplication::translate("Widget", "9", nullptr));
        mulButton->setText(QApplication::translate("Widget", "*", nullptr));
        fourButton->setText(QApplication::translate("Widget", "4", nullptr));
        fiveButton->setText(QApplication::translate("Widget", "5", nullptr));
        sixButton->setText(QApplication::translate("Widget", "6", nullptr));
        divButton->setText(QApplication::translate("Widget", "/", nullptr));
        oneButton->setText(QApplication::translate("Widget", "1", nullptr));
        twoButton->setText(QApplication::translate("Widget", "2", nullptr));
        threeButton->setText(QApplication::translate("Widget", "3", nullptr));
        leftButton->setText(QApplication::translate("Widget", "(", nullptr));
        zeroButton->setText(QApplication::translate("Widget", "0", nullptr));
        rightButton->setText(QApplication::translate("Widget", ")", nullptr));
        equalButton->setText(QApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
