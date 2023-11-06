#include "calendardialog.h"
#include "./ui_calendardialog.h"

calendardialog::calendardialog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calendardialog)
{
    ui->setupUi(this);
}

calendardialog::~calendardialog()
{
    delete ui;
}

