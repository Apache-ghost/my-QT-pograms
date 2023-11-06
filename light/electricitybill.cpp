#include "electricitybill.h"
#include <QVBoxLayout>
#include <QDateTime>
#include <QMessageBox>

ElectricityBill::ElectricityBill(QWidget *parent)
    : QWidget(parent)
{
    // Create the input widgets
    nameLabel = new QLabel("Name:");
    nameEdit = new QLineEdit;
    locationLabel = new QLabel("Location:");
    locationComboBox = new QComboBox;
    previousReadingLabel = new QLabel("Previous Reading:");
    previousReadingEdit = new QLineEdit;
    presentReadingLabel = new QLabel("Present Reading:");
    presentReadingEdit = new QLineEdit;

    // Create the calculate button
    calculateButton = new QPushButton("Calculate");

    // Create the output label
    resultLabel = new QLabel;

    // Create the table widget
    table = new QTableWidget;
    table->setColumnCount(6);
    table->setHorizontalHeaderLabels({"Date", "Name", "Location", "Previous Reading", "Present Reading", "Total Amount"});

    // Create the layout
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(nameLabel);
    layout->addWidget(nameEdit);
    layout->addWidget(locationLabel);
    layout->addWidget(locationComboBox);
    layout->addWidget(previousReadingLabel);
    layout->addWidget(previousReadingEdit);
    layout->addWidget(presentReadingLabel);
    layout->addWidget(presentReadingEdit);
    layout->addWidget(calculateButton);
    layout->addWidget(resultLabel);
    layout->addWidget(table);

    // Connect the calculate button to the handler function
    connect(calculateButton, &QPushButton::clicked, this, &ElectricityBill::calculateBill);

    // Populate the location combo box
    locationComboBox->addItem("Delhi");
    locationComboBox->addItem("Mumbai");
    locationComboBox->addItem("Bangalore");
    locationComboBox->addItem("Chennai");
}

void ElectricityBill::calculateBill()
{
    // Get the inputs and calculate the bill amount
    QString name = nameEdit->text();
    QString location = locationComboBox->currentText();
    double previousReading = previousReadingEdit->text().toDouble();
    double presentReading = presentReadingEdit->text().toDouble();
    double unitsConsumed = presentReading - previousReading;

    // Calculate the cost per kWh based on consumption range
    double costPerKWh = 0;
    if (unitsConsumed <= 110) {
        costPerKWh = 50;
    } else if (unitsConsumed <= 400) {
        costPerKWh = 79;
    } else if (unitsConsumed <= 800) {
        costPerKWh = 94;
    } else {
        costPerKWh = 99;
    }

    // Calculate the bill amount before VAT
    double billAmount = unitsConsumed * costPerKWh;

    // Apply VAT exemption for household consumers
    if (unitsConsumed <= 220) {
        resultLabel->setText(QString("Dear %1, your bill amount is %2 FCFA (VAT exempt).").arg(name).arg(billAmount));
    } else {
        // Apply VAT for non-exempt consumers
        double vat = billAmount * 0.1925;
        double totalAmount = billAmount + vat;
        resultLabel->setText(QString("Dear %1, your bill amount is %2 FCFA (including VAT of %3 FCFA).").arg(name).arg(totalAmount).arg(vat));

        // Add the information to the table
        int row = table->rowCount();
        table->insertRow(row);
        table->setItem(row,0, new QTableWidgetItem(QDateTime::currentDateTime().toString()));
        table->setItem(row, 1,new QTableWidgetItem(name));
        table->setItem(row, 2, new QTableWidgetItem(location));
        table->setItem(row, 3, new QTableWidgetItem(QString::number(previousReading)));
        table->setItem(row, 4, new QTableWidgetItem(QString::number(presentReading)));
        table->setItem(row, 5,new QTableWidgetItem(QString::number(totalAmount)));
    }
}
