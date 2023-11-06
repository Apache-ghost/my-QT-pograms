/********************************************************************************
** Form generated from reading UI file 'calendardialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDARDIALOG_H
#define UI_CALENDARDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calendardialog
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_3;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *toolButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calendardialog)
    {
        if (calendardialog->objectName().isEmpty())
            calendardialog->setObjectName(QString::fromUtf8("calendardialog"));
        calendardialog->resize(800, 600);
        centralwidget = new QWidget(calendardialog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(500, 50, 47, 23));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(500, 260, 49, 16));
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(390, 80, 281, 163));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(710, 300, 80, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 170, 80, 24));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(380, 10, 307, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout->addWidget(toolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButton_2 = new QToolButton(widget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        horizontalLayout->addWidget(toolButton_2);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(380, 290, 279, 25));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolButton_3 = new QToolButton(widget1);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));

        horizontalLayout_2->addWidget(toolButton_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        toolButton_4 = new QToolButton(widget1);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));

        horizontalLayout_2->addWidget(toolButton_4);

        calendardialog->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calendardialog);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        calendardialog->setMenuBar(menubar);
        statusbar = new QStatusBar(calendardialog);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        calendardialog->setStatusBar(statusbar);

        retranslateUi(calendardialog);

        QMetaObject::connectSlotsByName(calendardialog);
    } // setupUi

    void retranslateUi(QMainWindow *calendardialog)
    {
        calendardialog->setWindowTitle(QCoreApplication::translate("calendardialog", "calendardialog", nullptr));
        label->setText(QCoreApplication::translate("calendardialog", "Titlelabel", nullptr));
        label_2->setText(QCoreApplication::translate("calendardialog", "DateLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("calendardialog", "ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("calendardialog", "PushButton", nullptr));
        toolButton->setText(QCoreApplication::translate("calendardialog", "yearBackButton", nullptr));
        toolButton_2->setText(QCoreApplication::translate("calendardialog", " yearFrontButton", nullptr));
        toolButton_3->setText(QCoreApplication::translate("calendardialog", "MonthBackButton", nullptr));
        toolButton_4->setText(QCoreApplication::translate("calendardialog", "MonthFrontButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calendardialog: public Ui_calendardialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDARDIALOG_H
