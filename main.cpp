#include "mainwindow.h"
#include "addwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    AddWindow x;
    x.show();
    return a.exec();
}
