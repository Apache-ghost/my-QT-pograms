#include "eventreminder.h"
#include "ui_eventreminder.h"

eventreminder::eventreminder(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::eventreminder)
{
    ui->setupUi(this);
}

eventreminder::~eventreminder()
{
    delete ui;
}

