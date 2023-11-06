#include "calendardialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    calendardialog w;
    w.show();
    return a.exec();
}
