#include "../Model/Transition.h"

Transition::Transition(std::string label, QPointF p){
    this->label = label;
    this->p = p;
}

std::string Transition::getLabel(){
    return this->label;
}

QPointF Transition::getLocation(){
    return this->p;
}

void Transition::setLabel(std::string label){
    this->label = label;
}

void Transition::setLocation(QPointF p){
    this->p = p;
}

