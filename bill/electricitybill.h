#ifndef ELECTRICITYBILL_H
#define ELECTRICITYBILL_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>

class ElectricityBill : public QWidget
{
    Q_OBJECT

public:
    ElectricityBill(QWidget *parent = nullptr);

private slots:
    void calculateBill();

private:
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
};

#endif // ELECTRICITYBILL_H
