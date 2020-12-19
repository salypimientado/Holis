#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <queue>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()),this,SLOT(saveEntry()));
    connect(ui->pushButton_2, SIGNAL(clicked()),this,SLOT(removeEntry()));
    //connect(ui->pushButton, SIGNAL(clicked()),QApplication::instance(),SLOT(quit()));
}

void MainWindow::saveEntry(){
    Entry entry(ui->textEdit_4->toPlainText());
    if(queue.empty() && ui->label_2->text()== "") ui->label_2->setText(entry.getTitle());
    else queue.push(entry);

}

void MainWindow::removeEntry(){
    if(queue.empty()) ui->label_2->setText("No tasks");
    else{
        ui->label_2->setText(queue.top().getTitle());
        queue.pop();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

