#ifndef ELECTRICITYBILL_H
#define ELECTRICITYBILL_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>
#include <QSqlDatabase>
#include <QMessageBox>

#include "ui_electricitybill.h"

namespace Ui {
class ElectricityBill;
}

class ElectricityBill : public QWidget
{
    Q_OBJECT

public:
    explicit ElectricityBill(QWidget *parent = nullptr);
    ~ElectricityBill();

private slots:
    void calculateBill();
    void on_pushButton_clicked();

private:
    Ui::ElectricityBill *ui;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *locationLabel;
    QComboBox *locationComboBox;
    QLabel *previousReadingLabel;
    QLineEdit *previousReadingEdit;
    QLabel *presentReadingLabel;
    QLineEdit *presentReadingEdit;
    QPushButton *calculateButton;
    QLabel *resultLabel;
    QSqlDatabase db;
};

#endif // ELECTRICITYBILL_H
