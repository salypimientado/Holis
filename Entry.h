#ifndef ENTRY_H
#define ENTRY_H

#include <QString>
#include <chrono>
#include "enums.h"
#include "Parameter.h"


class Entry{
    public:
    Entry(QString title);

    int getTime() const {return deltaTime; }
<<<<<<< HEAD
    int getPriority();
=======
    float getPriority() const;
>>>>>>> fc1efc793ff4a2fc0ce84c862b1c9b10e60f500d
    QString getTitle() const {return title; }

    private:

    QString title;
    int deltaTime;
    int intParameterSize = 0;
    std::vector<Parameter> parameters;
};

struct CompareDate {
    bool operator()(Entry const& e1, Entry const& e2)
    {
        return e1.getTime() > e2.getTime();
    }
};

#endif // ENTRY_H
