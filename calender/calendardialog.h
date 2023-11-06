#ifndef CALENDARDIALOG_H
#define CALENDARDIALOG_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class calendardialog; }
QT_END_NAMESPACE

class calendardialog : public QMainWindow
{
    Q_OBJECT

public:
    calendardialog(QWidget *parent = nullptr);
    ~calendardialog();

private:
    Ui::calendardialog *ui;
};
#endif // CALENDARDIALOG_H
