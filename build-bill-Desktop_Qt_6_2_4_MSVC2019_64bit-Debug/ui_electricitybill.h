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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_electricitybill
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *electricitybill)
    {
        if (electricitybill->objectName().isEmpty())
            electricitybill->setObjectName(QString::fromUtf8("electricitybill"));
        electricitybill->resize(800, 600);
        centralwidget = new QWidget(electricitybill);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        electricitybill->setCentralWidget(centralwidget);
        menubar = new QMenuBar(electricitybill);
        menubar->setObjectName(QString::fromUtf8("menubar"));
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
    } // retranslateUi

};

namespace Ui {
    class electricitybill: public Ui_electricitybill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELECTRICITYBILL_H
