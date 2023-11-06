#include "electricitybill.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ElectricityBill w;
    w.show();
    return a.exec();
}
