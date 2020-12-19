#ifndef ENTRY_H
#define ENTRY_H

#include <QString>
#include <chrono>

using namespace std::chrono;

class Entry{
    public:
    Entry(QString title){
        this->title = title;
        deltaTime = std::time(0);
    }
    int getTime() const {return deltaTime; }
    QString getTitle() const {return title; }
    private:
    QString title;
    int deltaTime;

};

struct CompareDate {
    bool operator()(Entry const& e1, Entry const& e2)
    {
        return e1.getTime() > e2.getTime();
    }
};

#endif // ENTRY_H
