#ifndef PARAMETER_H
#define PARAMETER_H

#include "enums.h"
#include <QString>

class Parameter{
public:
    Parameter(QString name);
    auto getname() const {return _name; }
    auto getValue() const { return _value; }
    auto getWeight() const {return _weight;}
private:

    QString _name;
    float _value;
    float _weight;
};

#endif // PARAMETER_H
