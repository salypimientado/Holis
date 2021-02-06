#ifndef ENTRYTEMPLATE_H
#define ENTRYTEMPLATE_H

#include "enums.h"
#include <vector>
#include <QString>
#include <QJsonObject>
#include <QJsonArray>

class EntryTemplate
{
public:
    EntryTemplate(std::vector<QString> names,std::vector<float> weights,std::vector<type> types);
    auto getParameterNames();
    auto getWeights();
    auto getTypes();
    auto name() const;
    int size() const;
    void write(QJsonObject &json) const;

private:
    QString _name;
    std::vector<QString> parameterNames;
    std::vector<float> parameterWeights;
    std::vector<type> parameterTypes;
};

#endif // ENTRYTEMPLATE_H
