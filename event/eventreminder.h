#ifndef EVENTREMINDER_H
#define EVENTREMINDER_H
/*#include <QtSql>
debug
QMessageBox
QFontDatabase*/

#include <QtWidgets>

class Event {
public:
    QString name;
    QString venue;
    QString period;
    QString email;
};

class EventReminder : public QMainWindow {
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
    QVector<Event> events;

    void sendReminder();
    void saveEvent();
    void deleteEvent();
    void searchEvent();
    void updateEvent();
    void updateDateTime();
};

#endif // EVENTREMINDER_H
