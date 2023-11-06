#include "eventreminder.h"
#include "ui_eventreminder.h"

EventReminder::EventReminder(QWidget* parent) : QMainWindow(parent) {
    setWindowTitle("Event Reminder");/*This is the beginning of the constructor for the
 EventReminder class. It initializes the QMainWindow base class with the parent parameter.*/

    // Create the UI controls
    nameLabel = new QLabel("Event Name:");/*These lines create several UI controls using Qt
widgets such as QLabel, QLineEdit, QPushButton, QTimeEdit, QCalendarWidget, and QTableWidget*/
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
    tableWidget = new QTableWidget;

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
    layout->addWidget(tableWidget);
    setCentralWidget(centralWidget);

    // Set up the table
    tableWidget->setColumnCount(4);
    tableWidget->setHorizontalHeaderLabels(QStringList() << "Event Name" << "Event Venue" << "Event Period" << "Email Address");

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
    // Get the selected row
    int row = tableWidget->currentRow();
    if (row >= 0) {
        // Get the event data from the table
        QString name = tableWidget->item(row, 0)->text();
        QString venue = tableWidget->item(row, 1)->text();
        QString period = tableWidget->item(row, 2)->text();
        QString email = tableWidget->item(row, 3)->text();

        // Code to send reminder through email using the event data
        QMessageBox::information(this, "Reminder Sent", "Reminder forevent \"" + name + "\" sent to " + email);
    } else {
        QMessageBox::warning(this, "No Event Selected", "Please select an event to send a reminder.");
    }
}

void EventReminder::saveEvent() {
    // Get the data from the UI controls
    QString name = nameEdit->text();
    QString venue = venueEdit->text();
    QString period = periodEdit->text();
    QString email = emailEdit->text();

    // Create a new event object
    Event event;
    event.name = name;
    event.venue = venue;
    event.period = period;
    event.email = email;

    // Add the event to the vector and the table
    events.append(event);
    int row = tableWidget->rowCount();
    tableWidget->insertRow(row);
    tableWidget->setItem(row, 0, new QTableWidgetItem(name));
    tableWidget->setItem(row, 1, new QTableWidgetItem(venue));
    tableWidget->setItem(row, 2, new QTableWidgetItem(period));
    tableWidget->setItem(row, 3, new QTableWidgetItem(email));

    // Clear the UI controls
    nameEdit->clear();
    venueEdit->clear();
    periodEdit->clear();
    emailEdit->clear();

    // Show a success message
    QMessageBox::information(this, "Event Saved", "The event \"" + name + "\" has been saved.");
}

void EventReminder::deleteEvent() {
    // Get the selected row
    int row = tableWidget->currentRow();
    if (row >= 0) {
        // Get the event data from the table
        QString name = tableWidget->item(row, 0)->text();
        QString venue = tableWidget->item(row, 1)->text();
        QString period = tableWidget->item(row, 2)->text();
        QString email = tableWidget->item(row, 3)->text();

        // Remove the event from the vector and the table
        events.remove(row);
        tableWidget->removeRow(row);

        // Show a success message
        QMessageBox::information(this, "Event Deleted", "The event \"" + name + "\" has been deleted.");
    } else {
        QMessageBox::warning(this, "No Event Selected", "Please select an event to delete.");
    }
}

void EventReminder::searchEvent() {
    // Get the data to search for
    QString searchText = QInputDialog::getText(this, "Search", "Enter the event name to search for:");
    if (!searchText.isEmpty()) {
        // Search for the event in the vector
        int index = -1;
        for (int i = 0; i < events.size(); i++) {
            if (events[i].name == searchText) {
                index = i;
                break;
            }
        }

        if (index >= 0) {
            // Select the row in the table
            tableWidget->selectRow(index);

            // Show a success message
            QMessageBox::information(this, "Event Found", "The event \"" + searchText + "\" has been found.");
        } else {
            QMessageBox::warning(this, "Event Not Found", "The event \"" + searchText + "\" was not found.");
        }
    }
}

void EventReminder::updateEvent() {
    // Get the selected row
    int row = tableWidget->currentRow();
    if (row >= 0) {
        // Get the event data from the table
        QString name = tableWidget->item(row, 0)->text();
        QString venue = tableWidget->item(row, 1)->text();
        QString period = tableWidget->item(row, 2)->text();
        QString email = tableWidget->item(row, 3)->text();

        // Update the event data from the UI controls
        name = nameEdit->text();
        venue = venueEdit->text();
        period = periodEdit->text();
        email = emailEdit->text();

        // Update the event in the vector and the table
        events[row].name = name;
        events[row].venue = venue;
        events[row].period = period;
        events[row].email = email;
        tableWidget->setItem(row, 0, new QTableWidgetItem(name));
        tableWidget->setItem(row, 1, new QTableWidgetItem(venue));
        tableWidget->setItem(row, 2, new QTableWidgetItem(period));
        tableWidget->setItem(row, 3, new QTableWidgetItem(email));

        // Clear the UI controls
        nameEdit->clear();
        venueEdit->clear();
        periodEdit->clear();
        emailEdit->clear();

        // Show a success message
        QMessageBox::information(this, "Event Updated", "The event \"" + name + "\" has been updated.");
    } else {
        QMessageBox::warning(this, "No Event Selected", "Please select an event to update.");
    }
}

void EventReminder::updateDateTime() {
    // Update the date and time labels
    QDateTime currentDateTime = QDateTime::currentDateTime();
    timeLabel->setText(currentDateTime.toString("hh:mm:ss"));
    dayLabel->setText(currentDateTime.toString("dddd"));
    dateLabel->setText(currentDateTime.toString("MMMM d, yyyy"));
}
/*EventReminder::EventReminder(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\Users\Guegouo M. Guiddel\Desktop\SQLITE4");
    db.open();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->groupBox_2->hide();
}*/




