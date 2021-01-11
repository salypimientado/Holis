#include "addwindow.h"
#include "ui_addwindow.h"
#include <QFormLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

AddWindow::AddWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddWindow)
{
    ui->setupUi(this);


    QGridLayout* windowLayout = new QGridLayout(this);
    QWidget* parameterWidget = new QWidget();
    QFormLayout* parameterLayout = new QFormLayout();

    parameterWidget->setLayout(parameterLayout);


    windowLayout->setColumnStretch(0,1);
    windowLayout->setRowStretch(0,1);
    windowLayout->setColumnStretch(1,1);
    windowLayout->setRowStretch(1,1);
    windowLayout->setColumnStretch(2,1);
    windowLayout->setRowStretch(2,1);

    auto titleLabel = new QLabel(tr("Add task"));
    auto titleFont = titleLabel->font();
    titleFont.setBold(1);
    titleFont.setPointSize(20);
    titleLabel->setFont(titleFont);
    windowLayout->addWidget(titleLabel,0,1,Qt::AlignHCenter);
    windowLayout->addWidget(parameterWidget,1,1);
    parameterLayout->addRow(tr("Parameter"),new QLabel(tr("Value")));

    for(int i = 0; i<3;i++){
        QLineEdit* edit = new QLineEdit;
        parameterLayout->addRow(tr("parameterwhi"),edit);
    }




}

AddWindow::~AddWindow()
{
    delete ui;
}
