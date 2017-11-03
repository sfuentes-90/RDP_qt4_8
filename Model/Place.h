#ifndef PLACE_H
#define PLACE_H
#include <string>
#include <QPoint>

class Place{
    private:
        std::string label;
        QPointF p;
        int value = 0;

    public:
        // Constructor
        Place(std::string, int, QPointF);

        // getters
        std::string getLabel();
        int getValue();
        QPointF getLocation();

        // setters
        void setLabel(std::string);
        void setValue(int);
};

#endif /* PLACE_H */
