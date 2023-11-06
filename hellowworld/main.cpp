#include <QApplication>
#include <QLabel>
int main(int argc, char*argv[]){
    QApplication app(argc,argv);
    QLabel *label=new QLabel("hellow world");
    label->setWindowTitle("QT first program");
    label->show();
    return app.exec();
}
