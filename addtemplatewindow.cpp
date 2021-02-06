#include "addtemplatewindow.h"
#include <QGridLayout>
#include <QFormLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QComboBox>
#include <QScreen>
#include <QGuiApplication>

AddTemplateWindow::AddTemplateWindow(QWidget *parent) : QWidget(parent)
{
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect  screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width();
    resize(width/3,height/2);
    nameLineEditList.reserve(30);
    valueLineEditList.reserve(30);
    typeComboboxList.reserve(30);

    QGridLayout* windowLayout = new QGridLayout(this);
    QHBoxLayout* parameterLayout = new QHBoxLayout();

    nameLineEditLayout = new QVBoxLayout;
    valueLineEditLayout = new QVBoxLayout;
    typeComboboxLayout = new QVBoxLayout;

    windowLayout->setColumnStretch(0,1);
    windowLayout->setRowStretch(0,1);
    windowLayout->setColumnStretch(1,3);
    windowLayout->setRowStretch(1,1);
    windowLayout->setColumnStretch(2,1);
    windowLayout->setRowStretch(2,1);

    auto titleLabel = new QLabel(tr("Add task template"));
    auto titleFont = titleLabel->font();
    titleFont.setBold(1);
    titleFont.setPointSize(20);
    titleLabel->setFont(titleFont);
    windowLayout->addWidget(titleLabel,0,1,Qt::AlignHCenter);
    windowLayout->addLayout(parameterLayout,1,1);
    parameterLayout->addLayout(nameLineEditLayout,2);
    parameterLayout->addLayout(valueLineEditLayout,2);
    parameterLayout->addLayout(typeComboboxLayout,1);

    QLabel* nameLabel = new QLabel("Name");
    nameLabel->setAlignment(Qt::AlignBottom);
    nameLineEditLayout->addWidget(nameLabel,1);

    QLabel* valueLabel = new QLabel("Value");
    valueLabel ->setAlignment(Qt::AlignBottom);
    valueLineEditLayout->addWidget(valueLabel,1);

    QLabel* typeLabel = new QLabel("Type");
    typeLabel->setAlignment(Qt::AlignBottom);
    typeComboboxLayout->addWidget(typeLabel,1);


    for(int i = 0; i<1;i++){
        addParameter();
    }
    nameLineEditList[0]->setText("prueba wtf");
    valueLineEditList[2]->setText("prueba wwtfasdftf");
    nameLineEditList[1]->setText("prueba hwaksalj");

}

void AddTemplateWindow :: addParameter(){
        QLineEdit* edit = new QLineEdit();
        valueLineEditList.append(edit);
        QLineEdit* nameEdit = new QLineEdit();
        nameLineEditList.append(nameEdit);
        QComboBox* box = new QComboBox();
        typeComboboxList.append(box);
        box->addItem("Float");
        box->addItem("Bool");
        nameLineEditLayout->addWidget(nameEdit);
        valueLineEditLayout->addWidget(edit);
        typeComboboxLayout->addWidget(box);

}
