#ifndef PETRI_H
#define PETRI_H

#include <vector>
#include "../Controller/GraphicsScene.h"
#include "../Model/PlaceList.h"
#include "../Model/TransitionList.h"
#include "../Model/Matrix.h"

class Petri {
    private:
        PlaceList *pList;
        TransitionList *tList;
        Matrix *pre;
        Matrix *post;
        std::vector<int> m;
        GraphicsScene *g;

    public:
        // Constructor
        Petri(PlaceList*, TransitionList*, Matrix*, Matrix*, GraphicsScene*);

        // Metodos
        void triggerTransition(Transition*);
        std::vector<int> multiply(Matrix*, std::vector<int>*);
        std::vector<int> solveSum(std::vector<int>*, std::vector<int>*, std::vector<int>*);
        void printVector(std::vector<int>);
        std::vector<int> getM();
};
#endif /* PETRI_H */
