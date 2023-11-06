#include <QApplication>
#include "electricitybill.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create the ElectricityBill object and show it
    ElectricityBill bill;
    bill.show();

    return a.exec();
}
