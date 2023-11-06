#include "eventreminder.h"
//#include "ui_eventreminder.h"
EventReminder::EventReminder(QWidget* parent) : QMainWindow(parent) {
    setWindowTitle("Event Reminder");

    // Create the UI controls
    nameLabel = new QLabel("Event Name:");
    nameEdit = new QLineEdit;
    venueLabel = new QLabel("Event Venue:");
    venueEdit = new QLineEdit;
    periodLabel = new QLabel("Event Period:");
    periodEdit = new QTimeEdit;
    emailLabel = new QLabel("Email Address:");
    emailEdit = new QLineEdit;
    sendButton = new QPushButton("Send");
    saveButton = new QPushButton("Save");
    deleteButton = new QPushButton("Delete");
    searchButton = new QPushButton("Search");
    updateButton = new QPushButton("Update");
    timeLabel = new QLabel;
    dayLabel = new QLabel;
    dateLabel = new QLabel;
    calendarWidget = new QCalendarWidget;

    // Set the layout
    QWidget* centralWidget = new QWidget;
    QVBoxLayout* layout = new QVBoxLayout(centralWidget);
    QHBoxLayout* topLayout = new QHBoxLayout;
    QLabel* titleLabel = new QLabel("Event Reminder");
    QFont titleFont("Arial", 16, QFont::Bold);
    titleLabel->setFont(titleFont);
    topLayout->addWidget(titleLabel);
    topLayout->addWidget(calendarWidget);
    layout->addLayout(topLayout);
    layout->addWidget(nameLabel);
    layout->addWidget(nameEdit);
    layout->addWidget(venueLabel);
    layout->addWidget(venueEdit);
    layout->addWidget(periodLabel);
    layout->addWidget(periodEdit);
    layout->addWidget(emailLabel);
    layout->addWidget(emailEdit);
    QHBoxLayout* buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(sendButton);
    buttonLayout->addWidget(saveButton);
    buttonLayout->addWidget(deleteButton);
    buttonLayout->addWidget(searchButton);
    buttonLayout->addWidget(updateButton);
    layout->addLayout(buttonLayout);
    QHBoxLayout* dateTimeLayout = new QHBoxLayout;
    dateTimeLayout->addWidget(timeLabel);
    dateTimeLayout->addWidget(dayLabel);
    dateTimeLayout->addWidget(dateLabel);
    layout->addLayout(dateTimeLayout);
    setCentralWidget(centralWidget);

    // Connect the signals and slots
    connect(sendButton, &QPushButton::clicked, this, &EventReminder::sendReminder);
    connect(saveButton, &QPushButton::clicked, this, &EventReminder::saveEvent);
    connect(deleteButton, &QPushButton::clicked, this, &EventReminder::deleteEvent);
    connect(searchButton, &QPushButton::clicked, this, &EventReminder::searchEvent);
    connect(updateButton, &QPushButton::clicked, this, &EventReminder::updateEvent);

    // Update the date and time labels
    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &EventReminder::updateDateTime);
    timer->start(1000);
    updateDateTime();
}

void EventReminder::sendReminder() {
    // Code to send reminder through email
}

void EventReminder::saveEvent() {
    Event event;
    event.name = nameEdit->text();
    event.venue = venueEdit->text();
    event.period = periodEdit->text();
    event.email = emailEdit->text();

    events.append(event);

    // Code to insert event data into the database
}

void EventReminder::deleteEvent() {
    // Code to delete event from the database
}

void EventReminder::searchEvent() {
    // Code to search event from the database and display it on the UI
}

void EventReminder::updateEvent() {
    // Code to update event data in the database
}

void EventReminder::updateDateTime() {
    QDateTime now = QDateTime::currentDateTime();
    timeLabel->setText(now.toString("hh:mm:ss"));
    dayLabel->setText(now.toString("dddd"));
    dateLabel->setText(now.toString("MMMM d, yyyy"));
    calendarWidget->setSelectedDate(now.date());
}
