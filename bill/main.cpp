#include <QApplication>
#include "electricitybill.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create the main window widget
    ElectricityBill window;

    // Show the window and run the event loop
    window.show();
    return a.exec();
}
