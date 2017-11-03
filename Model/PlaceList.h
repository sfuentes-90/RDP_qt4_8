#ifndef PLACELIST_H
#define PLACELIST_H

#include <vector>
#include "Place.h"

class PlaceList {
private:
    std::vector<Place*> pList;

public:
    // Constructor
    PlaceList();

    // Metodos
    void addPlace(Place*);
    int getSize();
    Place* getPlace(int i);
    std::vector<int> getWeightVector();
    int search(QPoint);
    float distance(QPoint, QPoint);
    void deleteAll();
};

#endif /* PLACELIST_H */
