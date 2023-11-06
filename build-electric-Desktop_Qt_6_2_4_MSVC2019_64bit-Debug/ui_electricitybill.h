/********************************************************************************
** Form generated from reading UI file 'electricitybill.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELECTRICITYBILL_H
#define UI_ELECTRICITYBILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_electricitybill
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *electricitybill)
    {
        if (electricitybill->objectName().isEmpty())
            electricitybill->setObjectName(QString::fromUtf8("electricitybill"));
        electricitybill->resize(800, 600);
        centralwidget = new QWidget(electricitybill);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 40, 111, 24));
        electricitybill->setCentralWidget(centralwidget);
        menubar = new QMenuBar(electricitybill);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        electricitybill->setMenuBar(menubar);
        statusbar = new QStatusBar(electricitybill);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        electricitybill->setStatusBar(statusbar);

        retranslateUi(electricitybill);

        QMetaObject::connectSlotsByName(electricitybill);
    } // setupUi

    void retranslateUi(QMainWindow *electricitybill)
    {
        electricitybill->setWindowTitle(QCoreApplication::translate("electricitybill", "electricitybill", nullptr));
        pushButton->setText(QCoreApplication::translate("electricitybill", "Sqliteconnection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class electricitybill: public Ui_electricitybill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELECTRICITYBILL_H
