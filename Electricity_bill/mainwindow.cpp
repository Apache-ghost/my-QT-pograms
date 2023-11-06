#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Electricity Bill Calculator");

    // create logo label
    m_logoLabel = new QLabel(this);
    QPixmap logoPixmap(":/logo.png");
    m_logoLabel->setPixmap(logoPixmap.scaledToWidth(200));

    // create input labels and fields
    m_nameLabel = new QLabel("Name:", this);
    m_nameEdit = new QLineEdit(this);
    m_locationLabel = new QLabel("Location:", this);
    m_locationEdit = new QLineEdit(this);
    m_prevReadingLabel = new QLabel("Previous reading (kWh):", this);
    m_prevReadingEdit = new QLineEdit(this);
    m_prevReadingEdit->setValidator(new QIntValidator(0, 1000000, this));
    m_currReadingLabel = new QLabel("Current reading (kWh):", this);
    m_currReadingEdit = new QLineEdit(this);
    m_currReadingEdit->setValidator(new QIntValidator(0, 1000000, this));

    // create calculate button
    m_calculateButton = new QPushButton("Calculate", this);
    connect(m_calculateButton, &QPushButton::clicked, this, &MainWindow::calculateBill);

    // create consumption table
    m_consumptionTable = new QTableWidget(0, 3, this);
    m_consumptionTable->setHorizontalHeaderLabels({"Month", "Units of kWh", "Amount in FCFA"});

    // create main layout
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(m_logoLabel, 0, Qt::AlignHCenter);
    mainLayout->addWidget(m_nameLabel);
    mainLayout->addWidget(m_nameEdit);
    mainLayout->addWidget(m_locationLabel);
    mainLayout->addWidget(m_locationEdit);
    mainLayout->addWidget(m_prevReadingLabel);
    mainLayout->addWidget(m_prevReadingEdit);
    mainLayout->addWidget(m_currReadingLabel);
    mainLayout->addWidget(m_currReadingEdit);
    mainLayout->addWidget(m_calculateButton, 0, Qt::AlignHCenter);
    mainLayout->addWidget(m_consumptionTable);
    QWidget *mainWidget = new QWidget(this);
    mainWidget->setLayout(mainLayout);
    setCentralWidget(mainWidget);
}

void MainWindow::calculateBill()
{
    QString name = m_nameEdit->text();
    QString location = m_locationEdit->text();
    int prevReading = m_prevReadingEdit->text().toInt();
    int currReading = m_currReadingEdit->text().toInt();

    m_calculator.setReadings(prevReading, currReading);

    // update consumption table
    m_consumptionTable->setRowCount(0);
    const auto& consumptionHistory = m_calculator.getConsumptionHistory();
    for (const auto& row : consumptionHistory) {
        int rowIndex = m_consumptionTable->rowCount();
        m_consumptionTable->insertRow(rowIndex);
        m_consumptionTable->setItem(rowIndex, 0, new QTableWidgetItem(row.first));
        m_consumptionTable->setItem(rowIndex, 1, new QTableWidgetItem(QString::number(row.second, 'f', 2)));
    }

    // update amount label
    double amount = m_calculator.getAmount();
    QLabel *amountLabel = new QLabel(QString("Amount: %1 FCFA").arg(QString::number(amount, 'f', 2)), this);
    QLayout *mainLayout = centralWidget()->layout();
    if (mainLayout->count() == 10) {
        delete mainLayout->itemAt(9)->widget();
        mainLayout->addWidget(amountLabel, 0, Qt::AlignHCenter);
    } else {
        mainLayout->addWidget(amountLabel, 0, Qt::AlignHCenter);
    }
}
