    #include "mainwindow.h"
#include "ui_mainwindow.h"
#include <queue>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->pushButton, SIGNAL(click()),this,SLOT(saveEntry()));
    connect(ui->pushButton, SIGNAL(clicked()),QApplication::instance(),SLOT(quit()));
}

//void MainWindow::saveEntry(){

//}

MainWindow::~MainWindow()
{
    delete ui;
}

