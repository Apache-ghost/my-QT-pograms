#ifndef EVENTREMINDER_H/*These two lines are the beginning of an include guard.
 It ensures that the contents of the header file are only included once in a given source file,
preventing any potential errors that could occur from multiple inclusions.*/
#define EVENTREMINDER_H


#include <QtWidgets>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>
#include<QString>

class Event {
public:
    QString name;
    QString venue;/*This is a class declaration for the
 Event class, which contains four QString member variables representing an event's name,
venue, period, and email.*/
    QString period;
    QString email;
};

class EventReminder : public QMainWindow {/*This is a class declaration for the
 EventReminder class, which inherits from QMainWindow. It contains several member
variables representing UI controls, a vector of Event objects, and several member
functions that handle events such as sending reminders, saving events, deleting events,
 searching for events, updating events, and updating the date and time labels.*/
public:
    EventReminder(QWidget* parent = nullptr);

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
    QTableWidget* tableWidget;
    QVector<Event> events;

    void sendReminder();
    void saveEvent();
    void deleteEvent();
    void searchEvent();
    void updateEvent();
    void updateDateTime();
};

#endif // EVENTREMINDER_H
