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
    int getPriority();
    QString getTitle() const {return title; }

    private:
    QString title;
    int deltaTime;
    std::unordered_map<std::string,int> parameters;
    std::vector<int> parameterTypes;
    std::vector<int> intParameters;
    std::vector<bool> boolParameters;

};

struct CompareDate {
    bool operator()(Entry const& e1, Entry const& e2)
    {
        return e1.getTime() > e2.getTime();
    }
};

#endif // ENTRY_H
