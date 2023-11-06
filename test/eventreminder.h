#ifndef EVENTREMINDER_H
#define EVENTREMINDER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class eventreminder; }
QT_END_NAMESPACE

class eventreminder : public QMainWindow
{
    Q_OBJECT

public:
    eventreminder(QWidget *parent = nullptr);
    ~eventreminder();

private:
    Ui::eventreminder *ui;
};
#endif // EVENTREMINDER_H
