#include "addtemplatewindow.h"
#include <QGridLayout>
#include <QFormLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QComboBox>

AddTemplateWindow::AddTemplateWindow(QWidget *parent) : QWidget(parent)
{

    QGridLayout* windowLayout = new QGridLayout(this);
    QWidget* parameterWidget = new QWidget();
    QVBoxLayout* parameterLayout = new QVBoxLayout();

    parameterWidget->setLayout(parameterLayout);

    windowLayout->setColumnStretch(0,1);
    //windowLayout->setRowStretch(0,1);
    //windowLayout->setColumnStretch(1,1);
    //windowLayout->setRowStretch(1,1);
    //windowLayout->setColumnStretch(2,1);
    windowLayout->setRowStretch(2,1);

    auto titleLabel = new QLabel(tr("Add task"));
    auto titleFont = titleLabel->font();
    titleFont.setBold(1);
    titleFont.setPointSize(20);
    titleLabel->setFont(titleFont);
    windowLayout->addWidget(titleLabel,0,1,Qt::AlignHCenter);
    windowLayout->addWidget(parameterWidget,1,1);

    QHBoxLayout* labels = new QHBoxLayout();
    labels->setAlignment(Qt::AlignHCenter);
    labels->addWidget(new QLabel("Name"),2);
    labels->addWidget(new QLabel("Value"),2);
    labels->addWidget(new QLabel("Type"),1);
    parameterLayout->addLayout(labels);

    for(int i = 0; i<3;i++){
    QWidget* fieldWidget = new QWidget();
    QHBoxLayout* parameterFields = new QHBoxLayout(fieldWidget);
        QLineEdit* edit = new QLineEdit;
        QLineEdit* nameEdit = new QLineEdit;
        QComboBox* box = new QComboBox();
        box->addItem("Float");
        box->addItem("Bool");
        parameterFields->addWidget(nameEdit);
        parameterFields->addWidget(edit);
        parameterFields->addWidget(box);
        parameterLayout->addWidget(fieldWidget);
    }
}
