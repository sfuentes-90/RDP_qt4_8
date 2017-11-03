#ifndef TRANSITION_H
#define TRANSITION_H
#include <string>
#include <QPoint>

class Transition {
    private:
        std::string label;
        QPointF p;

    public:
        // Constructor
        Transition(std::string, QPointF);

        // Getters
        std::string getLabel();
        QPointF getLocation();

        // Setters
        void setLabel(std::string);
        void setLocation(QPointF);


};

#endif /* TRANSITION_H */
