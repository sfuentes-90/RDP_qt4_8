#include "../Model/TransitionList.h"
#include <iostream>
#include <cmath>

TransitionList::TransitionList() {
}

void TransitionList::addTransition(Transition* t){
    this->tList.push_back(t);
}

Transition* TransitionList::getTransition(int index){
    return this->tList[index];
}

int TransitionList::getSize(){
    return this->tList.size();
}

int TransitionList::getIndexOf(std::string label){
    for (unsigned int i = 0; i < this->tList.size(); i++) {
        std::string tLabel = this->tList[i]->getLabel();
        if(label.compare(tLabel) == 0){
            return i;
        }
    }

    return -1;
}

Transition* TransitionList::getTransitionByName(std::string t){
    return getTransition(getIndexOf(t));
}

int TransitionList::search(QPoint p){
    for(int i = 0; i < this->getSize(); i++){
        QPoint tLocation = this->getTransition(i)->getLocation().toPoint();
        float d = distance(p, tLocation);

        //std::cout << d << std::endl;
        if(d < 20.0)
            return i;
    }
    return -1;
}

float TransitionList::distance(QPoint p1, QPoint p2){
    float d;

    d = sqrt(pow((p1.x() - p2.x()), 2) + pow(p1.y() - p2.y(), 2));

    return d;
}

void TransitionList::deleteAll(){
    this->tList.clear();
}

QString TransitionList::getTableHeader(){
    QString r = "";

    // Se concatenan las transiciones separadas por un ";"
    for(int i = 0; i < this->getSize() - 1; i++){
        r = r + (QString::fromStdString(this->getTransition(i)->getLabel()) + ";");
    }

    // Se obtiene el nombre de la ultima transicion y se concatena
    r = r + QString::fromStdString(this->getTransition(this->getSize())->getLabel());


    return r;
}

