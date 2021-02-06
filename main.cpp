#include "mainwindow.h"
#include "addwindow.h"
#include "addtemplatewindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    AddTemplateWindow x;
    x.show();
    return a.exec();
}
