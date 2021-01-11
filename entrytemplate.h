#ifndef ENTRYTEMPLATE_H
#define ENTRYTEMPLATE_H

#include "enums.h"
#include <vector>
#include <QString>

class EntryTemplate
{
public:
    EntryTemplate(std::vector<QString> names,std::vector<float> weights,std::vector<type> types);
    auto getParameterNames();
    auto getWeights();
    auto getTypes();
    void write();

private:
    std::vector<QString> parameterNames;
    std::vector<float> parameterWeights;
    std::vector<type> parameterTypes;
};

#endif // ENTRYTEMPLATE_H
