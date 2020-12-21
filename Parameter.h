#ifndef PARAMETER_H
#define PARAMETER_H

#include "enums.h"
#include <QString>

class Parameter{
public:
    Parameter(QString name);
private:
    QString _name;
    type _type;
};

#endif // PARAMETER_H
