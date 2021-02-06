#ifndef ENTRY_H
#define ENTRY_H

#include <QString>
#include <chrono>
#include "enums.h"


class Entry{
    public:
    Entry(QString title);

    int getTime() const {return deltaTime; }
    int getPriority() const;
    QString getTitle() const {return title; }

    private:

    QString title;
    int deltaTime;
    int intParameterSize = 0;
    std::unordered_map<std::string,int> parameters;
    std::vector<type> parameterTypes;
    std::vector<int> intParameters;
    std::vector<bool> boolParameters;

};

struct CompareDate {
    bool operator()(Entry const& e1, Entry const& e2)
    {
        return e1.getPriority() > e2.getPriority();
    }
};

#endif // ENTRY_H
