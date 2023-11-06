#include "calendarapp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    calendarapp w;
    w.show();
    return a.exec();
}
