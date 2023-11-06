#include "calendarapp.h"
#include "./ui_calendarapp.h"

calendarapp::calendarapp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calendarapp)
{
    ui->setupUi(this);
}

calendarapp::~calendarapp()
{
    delete ui;
}

