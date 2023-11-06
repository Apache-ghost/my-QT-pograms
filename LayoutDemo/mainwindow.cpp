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
    QMessageBox::StandardButton reply= QMessageBox::question(this,"regform",
                                                                    "are you sure you want to submit this form?",
                                                                    QMessageBox::Yes| QMessageBox::No);
    if(reply== QMessageBox::Yes){
        QApplication::quit();
    }
    else{
        qDebug()<<"The person was not ready to fill the form";
    }

}

