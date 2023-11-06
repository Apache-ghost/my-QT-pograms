/********************************************************************************
** Form generated from reading UI file 'eventreminder.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTREMINDER_H
#define UI_EVENTREMINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eventreminder
{
public:
    QWidget *centralwidget;
    QPushButton *conectButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *venueLabel;
    QLineEdit *venueEdit;
    QLabel *periodLabel;
    QTimeEdit *periodEdit;
    QLabel *emailLabel;
    QLineEdit *emailEdit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *deleteButton;
    QPushButton *saveButton;
    QPushButton *updateButton;
    QPushButton *searchButton;
    QPushButton *sendButton;
    QLabel *timeLabel;
    QLabel *dayLabel;
    QLabel *dateLabel;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QCalendarWidget *calendarWidget;
    QTableWidget *eventTable;
    QPushButton *clearButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *eventreminder)
    {
        if (eventreminder->objectName().isEmpty())
            eventreminder->setObjectName(QString::fromUtf8("eventreminder"));
        eventreminder->resize(800, 600);
        centralwidget = new QWidget(eventreminder);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        conectButton = new QPushButton(centralwidget);
        conectButton->setObjectName(QString::fromUtf8("conectButton"));
        conectButton->setGeometry(QRect(680, 260, 101, 24));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 0, 110, 205));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        verticalLayout->addWidget(nameLabel);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        verticalLayout->addWidget(nameEdit);

        venueLabel = new QLabel(layoutWidget);
        venueLabel->setObjectName(QString::fromUtf8("venueLabel"));

        verticalLayout->addWidget(venueLabel);

        venueEdit = new QLineEdit(layoutWidget);
        venueEdit->setObjectName(QString::fromUtf8("venueEdit"));

        verticalLayout->addWidget(venueEdit);

        periodLabel = new QLabel(layoutWidget);
        periodLabel->setObjectName(QString::fromUtf8("periodLabel"));

        verticalLayout->addWidget(periodLabel);

        periodEdit = new QTimeEdit(layoutWidget);
        periodEdit->setObjectName(QString::fromUtf8("periodEdit"));

        verticalLayout->addWidget(periodEdit);

        emailLabel = new QLabel(layoutWidget);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        verticalLayout->addWidget(emailLabel);

        emailEdit = new QLineEdit(layoutWidget);
        emailEdit->setObjectName(QString::fromUtf8("emailEdit"));

        verticalLayout->addWidget(emailEdit);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(710, 10, 82, 212));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        deleteButton = new QPushButton(layoutWidget1);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        verticalLayout_2->addWidget(deleteButton);

        saveButton = new QPushButton(layoutWidget1);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        verticalLayout_2->addWidget(saveButton);

        updateButton = new QPushButton(layoutWidget1);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));

        verticalLayout_2->addWidget(updateButton);

        searchButton = new QPushButton(layoutWidget1);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        verticalLayout_2->addWidget(searchButton);

        sendButton = new QPushButton(layoutWidget1);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        verticalLayout_2->addWidget(sendButton);

        timeLabel = new QLabel(layoutWidget1);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        verticalLayout_2->addWidget(timeLabel);

        dayLabel = new QLabel(layoutWidget1);
        dayLabel->setObjectName(QString::fromUtf8("dayLabel"));

        verticalLayout_2->addWidget(dayLabel);

        dateLabel = new QLabel(layoutWidget1);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));

        verticalLayout_2->addWidget(dateLabel);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(380, 10, 282, 363));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        calendarWidget = new QCalendarWidget(layoutWidget2);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        verticalLayout_3->addWidget(calendarWidget);

        eventTable = new QTableWidget(layoutWidget2);
        eventTable->setObjectName(QString::fromUtf8("eventTable"));

        verticalLayout_3->addWidget(eventTable);

        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(690, 290, 80, 24));
        eventreminder->setCentralWidget(centralwidget);
        menubar = new QMenuBar(eventreminder);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        eventreminder->setMenuBar(menubar);
        statusbar = new QStatusBar(eventreminder);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        eventreminder->setStatusBar(statusbar);

        retranslateUi(eventreminder);

        QMetaObject::connectSlotsByName(eventreminder);
    } // setupUi

    void retranslateUi(QMainWindow *eventreminder)
    {
        eventreminder->setWindowTitle(QCoreApplication::translate("eventreminder", "eventreminder", nullptr));
        conectButton->setText(QCoreApplication::translate("eventreminder", "sqliteconnection", nullptr));
        nameLabel->setText(QCoreApplication::translate("eventreminder", "Event Name", nullptr));
        venueLabel->setText(QCoreApplication::translate("eventreminder", "Event Venue", nullptr));
        periodLabel->setText(QCoreApplication::translate("eventreminder", "Event Period", nullptr));
        emailLabel->setText(QCoreApplication::translate("eventreminder", "Email Adress", nullptr));
        deleteButton->setText(QCoreApplication::translate("eventreminder", "delete", nullptr));
        saveButton->setText(QCoreApplication::translate("eventreminder", "save", nullptr));
        updateButton->setText(QCoreApplication::translate("eventreminder", "update", nullptr));
        searchButton->setText(QCoreApplication::translate("eventreminder", "search", nullptr));
        sendButton->setText(QCoreApplication::translate("eventreminder", "send", nullptr));
        timeLabel->setText(QCoreApplication::translate("eventreminder", "time", nullptr));
        dayLabel->setText(QCoreApplication::translate("eventreminder", "day", nullptr));
        dateLabel->setText(QCoreApplication::translate("eventreminder", "date", nullptr));
        clearButton->setText(QCoreApplication::translate("eventreminder", "clear", nullptr));
    } // retranslateUi

};
/*MainWindow::MainWindow(QWidget *parent)
    : QMprivate slots:
void on_conectButton_clicked();
ainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/Ngale Emmanuel/Documents/DB/Calender1.sqlite");
    db.open();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->groupBox_2->hide();
}*/

namespace Ui {
class eventreminder: public Ui_eventreminder {private slots:
    void on_conectButton_clicked();

};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTREMINDER_H
