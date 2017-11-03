#include "../Model/Place.h"

Place::Place(std::string label, int value, QPointF p) {
    this->label = label;
    this->value = value;
    this->p = p;
}

// Getters
std::string Place::getLabel(){
    return this->label;
}

int Place::getValue(){
    return this->value;
}

QPointF Place::getLocation(){
    return this->p;
}

// Setters
void Place::setLabel(std::string label){
    this->label = label;
}

void Place::setValue(int value) {
    this->value = value;
}
