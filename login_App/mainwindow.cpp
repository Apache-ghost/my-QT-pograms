#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

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


void MainWindow::on_login_clicked()
{
    QString username= ui->LineEdit_username->text();

    QString password= ui->lineEdit_password->text();
    if(username=="test"&& password=="test"){
       // QMessageBox:: information(this,"login","The username and password are correct");
        ui->statusbar->showMessage("the password and user username is correct");
    }
    else{
       // QMessageBox:: warning(this,"login","The username and password are not correct");
         ui->statusbar->showMessage("the password and user username is not  correct");
    }

}

