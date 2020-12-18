#ifndef ENTRY_H
#define ENTRY_H

#include <QString>


class Entry{
    public:
    Entry(QString title){
        this->title = title;
    }
    int getTime() const {return deltaTime; }
    private:
    QString title;
    int deltaTime;

};

struct CompareDate {
    bool operator()(Entry const& e1, Entry const& e2)
    {
        return e1.getTime() < e2.getTime();
    }
};

#endif // ENTRY_H
