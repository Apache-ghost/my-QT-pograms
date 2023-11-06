#ifndef EVENTREMINDER_H// they ensure the content of q heqder file qre only included once
#define EVENTREMINDER_H

#include <QtWidgets>//includes the neccessary header for working with ui widget
#include <QtSql/QSql>//includes haeder for working with SQL databases
#include <QtSql/QSqlDatabase>
#include <QString>//support for calculating string
#include <QtSql/QtSql>
#include <string>//includes the standard string library
#include <QMessageBox>
#include <QDebug>//provides debugging output capabilituies

class Event {
public:
    QString name;
    QString venue;
    QString period;
    QString email;
};

class EventReminder : public QMainWindow {
public:
    EventReminder(QWidget* parent = nullptr);// its the constructor

private:
    QLabel* nameLabel;
    QLineEdit* nameEdit;
    QLabel* venueLabel;
    QLineEdit* venueEdit;
    QLabel* periodLabel;
    QTimeEdit* periodEdit;
    QLabel* emailLabel;
    QLineEdit* emailEdit;
    QPushButton* sendButton;
    QPushButton* saveButton;
    QPushButton* deleteButton;
    QPushButton* searchButton;
    QPushButton* updateButton;
    QLabel* timeLabel;
    QLabel* dayLabel;
    QLabel* dateLabel;
    QCalendarWidget* calendarWidget;
    QVector<Event> events;

    void sendReminder();
    void saveEvent();
    void deleteEvent();
    void searchEvent();
    void updateEvent();
    void updateDateTime();
};

#endif // EVENTREMINDER_H
