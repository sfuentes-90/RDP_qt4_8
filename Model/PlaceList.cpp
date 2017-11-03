#include "../Model/PlaceList.h"

PlaceList::PlaceList() {
}

void PlaceList::addPlace(Place* t){
    this->pList.push_back(t);
}

int PlaceList::getSize(){
    return this->pList.size();
}

Place* PlaceList::getPlace(int index){
    return this->pList[index];
}

std::vector<int> PlaceList::getWeightVector(){
    std::vector<int> v(this->getSize());

    for (int i = 0; i < this->getSize(); i++) {
        v[i] = this->pList[i]->getValue();
    }

    return v;
}

int PlaceList::search(QPoint p){
    for(int i = 0; i < this->getSize(); i++){
        QPoint pLocation = this->getPlace(i)->getLocation().toPoint();
        float d = distance(p, pLocation);
        if(d < 20.0)
            return i;
    }
    return -1;
}

float PlaceList::distance(QPoint p1, QPoint p2){
    float d;

    d = sqrt(pow((p1.x() - p2.x()), 2) + pow(p1.y() - p2.y(), 2));

    return d;
}

void PlaceList::deleteAll(){
    this->pList.clear();
}
