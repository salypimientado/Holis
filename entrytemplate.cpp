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

auto EntryTemplate::name() const{
    return _name;
}

void EntryTemplate::write(QJsonObject &json) const{
    QJsonArray jsonArray;
    json["name"] = name();
    for(int i = 0; i< size(); i++){
        QJsonObject parameter;
        parameter["name"] = parameterNames[i];
        parameter["weight"] = parameterWeights[i];
        parameter["type"] = parameterTypes[i];
        jsonArray.append(parameter);
    }
    json["parameters"] = jsonArray;
}

int EntryTemplate::size() const{
    return parameterNames.size();
}
auto EntryTemplate::getWeights(){
    return parameterWeights;
}

auto EntryTemplate::getTypes(){
    return parameterTypes;
}
