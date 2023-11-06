#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox ::question(this, "my title","this is my first program",
                                                               QMessageBox::Yes | QMessageBox::No) ;
    if(reply==QMessageBox::Yes){
        QApplication::quit();
    }
    else{
        qDebug()<<"no is clicked";
    }
}

