#include "Entry.h"
#include "enums.h"
#include "ui_mainwindow.h"

Entry::Entry(QString title){
    this->title = title;
    deltaTime = std::time(0);
    std::vector<std::string> defParameters = {"Difficulty","Length","TaskSavvyness","Difficulty"};
    parameterTypes = {integer, 0, 0, 0,};
    for(unsigned int i = 0; i< defParameters.size();i++){
        parameters.insert(std::make_pair(defParameters[i],i));

    }
}
