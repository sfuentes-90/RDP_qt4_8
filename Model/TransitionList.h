#ifndef TRANSITIONLIST_H
#define TRANSITIONLIST_H
#include <vector>
#include <QString>
#include "../Model/Transition.h"


class TransitionList {
private:
    std::vector<Transition*> tList;

public:
    // Constructor
    TransitionList();

    // Metodos
    void addTransition(Transition*);
    Transition* getTransition(int);
    int getSize();
    int getIndexOf(std::string);
    int search(QPoint);
    float distance(QPoint, QPoint);
    Transition* getTransitionByName(std::string t);
    void deleteAll();
    QString getTableHeader();
};

#endif /* TRANSITIONLIST_H */
