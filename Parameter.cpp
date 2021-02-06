#include "ui_mainwindow.h"
#include "Parameter.h"

Parameter::Parameter(QString name, alias value, typeWeights type){
    _name = name;
    _value = value;
    _weight = type/100;
}

int Parameter::getValue(){
    return _value;
}
float Parameter::getWeight(){
    return _weight;
}
