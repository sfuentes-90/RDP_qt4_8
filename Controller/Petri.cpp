#include "../Controller/Petri.h"

Petri::Petri(PlaceList *pList, TransitionList *tList, Matrix *pre, Matrix *post, GraphicsScene* g){
    this->pList = pList;
    this->tList = tList;
    this->pre = pre;
    this->post = post;
    this->m = pList->getWeightVector();
    this->g = g;
}

void Petri::triggerTransition(Transition *t){
    std::vector<int> s(tList->getSize());
    int idx = tList->getIndexOf(t->getLabel());
    s[idx] = 1;

    std::vector<int> m1 = multiply(pre, &s);
    std::vector<int> m2 = multiply(post, &s);

    this->m = solveSum(&m, &m1, &m2);
    printVector(this->m);

    for(unsigned int i=0; i < m.size(); i++){
        this->g->changeNodeValue(m[i], pList->getPlace(i));
    }
}

std::vector<int> Petri::multiply(Matrix *m, std::vector<int> *v){
    int fil = pList->getSize();
    int col = tList->getSize();
    std::vector<int> result(pList->getSize());

    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            int s1 = m->getElement(i,j);
            int s2 = (*v)[j];
            //std::cout << "i: " << i << " j: " << j << "   " << s1 << "*" << s2 << "=" << s1*s2 << std::endl;

            result[i] += s1 * s2;
        }
    }
    return result;
}

std::vector<int> Petri::solveSum(std::vector<int> *v1, std::vector<int> *v2, std::vector<int> *v3){
    std::vector<int> result(pList->getSize());

    for (int i = 0; i < pList->getSize(); i++) {
        result[i] = ((*v1)[i] - (*v2)[i]) + (*v3)[i];
    }

    return result;
}

void Petri::printVector(std::vector<int> v){
    std::cout << "[";
    for (unsigned int i = 0; i < v.size(); i++) {
        if(i != (v.size()-1))
            std::cout << v[i] << " ";
        else
            std::cout << v[i] << "]" << std::endl;
    }
}

std::vector<int> Petri::getM(){
    return this->m;
}
