#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTableWidget>
#include "electricitybillcalculator.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private slots:
    void calculateBill();

private:
    QLabel *m_logoLabel;
    QLabel *m_nameLabel;
    QLabel *m_locationLabel;
    QLabel *m_prevReadingLabel;
    QLabel *m_currReadingLabel;
    QLineEdit *m_nameEdit;
    QLineEdit *m_locationEdit;
    QLineEdit *m_prevReadingEdit;
    QLineEdit *m_currReadingEdit;
    QPushButton *m_calculateButton;
    QTableWidget *m_consumptionTable;
    ElectricityBillCalculator m_calculator;
};

#endif // MAINWINDOW_H
