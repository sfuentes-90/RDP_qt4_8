#ifndef MATRIXVIEW_H
#define MATRIXVIEW_H

#include <QDialog>
#include <QTableWidget>
#include <QTableWidgetItem>
#include "../Model/Matrix.h"
#include "../Model/TransitionList.h"
#include "../Model/PlaceList.h"

namespace Ui {
class MatrixView;
}

class MatrixView : public QDialog {
    Q_OBJECT

public:
    explicit MatrixView(QWidget *parent = 0,QString title ="", Matrix* m =  NULL, TransitionList* t = NULL, PlaceList* p = NULL);
    ~MatrixView();

private:
    Ui::MatrixView *ui;
    int rows;
    int cols;
    Matrix *m;
    TransitionList* t;
    PlaceList* p;
};

#endif // MATRIXVIEW_H
