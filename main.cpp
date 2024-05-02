#include "mainwindow.h"
#include "authwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    authwindow w;
    w.show();
    //MainWindow w;
    //w.show();
    return a.exec();
}
