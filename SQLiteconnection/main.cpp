#include "eventreminder.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    EventReminder w;

    w.show();
    return a.exec();
}
