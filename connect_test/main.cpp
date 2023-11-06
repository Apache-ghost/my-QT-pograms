#include "eventreminder.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    eventreminder w;
    w.show();
    return a.exec();
}
