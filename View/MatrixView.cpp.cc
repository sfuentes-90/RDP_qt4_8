#include "MatrixView.h"
#include "ui_MatrixView.h"

MatrixView::MatrixView(QWidget *parent, QString title, Matrix* m, TransitionList* t, PlaceList* p) : QDialog(parent), ui(new Ui::MatrixView) {
    ui->setupUi(this);
    this->setWindowTitle(title);

    // Se obtienen las dimensiones
    rows = m->getRows();
    cols = m->getCols();

    // Se definen las dimensiones de la tabla
    ui->tableWidget->setRowCount(rows);
    ui->tableWidget->setColumnCount(cols);

    // Se cambia el encabezado de las columnas
    for(int i = 0; i < cols; i++){
        QTableWidgetItem* header = new QTableWidgetItem();
        header->setText(QString::fromStdString(t->getTransition(i)->getLabel()));
        ui->tableWidget->setHorizontalHeaderItem(i, header);
    }

    // Se cambia el encabezado de las filas
    for(int i = 0; i < rows; i++){
        QTableWidgetItem* header = new QTableWidgetItem();
        header->setText(QString::fromStdString(p->getPlace(i)->getLabel()));
        ui->tableWidget->setVerticalHeaderItem(i, header);
    }


    // Se agregan los elemntos en cada celda de la tabla
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            QTableWidgetItem* item = new QTableWidgetItem();
            item->setText(QString::number(m->getElement(i,j)));
            ui->tableWidget->setItem(i, j, item);
        }
    }
}



MatrixView::~MatrixView()
{
    delete ui;
}