#include "eventreminder.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    EventReminder window;
    window.show();
    return app.exec();
}
