#ifndef CALENDARAPP_H
#define CALENDARAPP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class calendarapp; }
QT_END_NAMESPACE

class calendarapp : public QMainWindow
{
    Q_OBJECT

public:
    calendarapp(QWidget *parent = nullptr);
    ~calendarapp();

private:
    Ui::calendarapp *ui;
};
#endif // CALENDARAPP_H
