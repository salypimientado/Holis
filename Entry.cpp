#include "Entry.h"
#include "enums.h"
#include "ui_mainwindow.h"

Entry::Entry(QString title){
    this->title = title;
    deltaTime = time(0);
}

float Entry::getPriority() const {
    int val = 1;
    for(unsigned int i = 0; i< parameters.size();i++){
        val = val * parameters[i].getWeight() * parameters[i].getValue();
    }
    return deltaTime;
}
