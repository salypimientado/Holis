#include "entrytemplate.h"

EntryTemplate::EntryTemplate(std::vector<QString> names,std::vector<float> weights,std::vector<type> types)
{
    parameterNames = names;
    parameterWeights = weights;
    parameterTypes = types;
}

auto EntryTemplate::getParameterNames(){
    return parameterNames;
}

auto EntryTemplate::getWeights(){
    return parameterWeights;
}

auto EntryTemplate::getTypes(){
    return parameterTypes;
}
