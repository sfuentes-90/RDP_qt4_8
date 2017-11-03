#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QMouseEvent>
#include <QtGui>
#include <QtCore>

#include "../Model/PlaceList.h"
#include "../Model/TransitionList.h"
#include "../Model/Matrix.h"
#include "../Controller/GraphicsScene.h"
#include "../Controller/Petri.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


    GraphicsScene *scene;
    // Flags GraphicsScene
    bool crearNodo = false;
    bool crearTransicion = false;
    bool crearArista = false;

    // Nodos, Transiciones, Aristas
    PlaceList * pList = new PlaceList();
    TransitionList * tList = new TransitionList();

    // Matrices
    Matrix *pre;
    Matrix *post;

    // RDP
    Petri *rdp;

    QComboBox* comboBox;

private slots:
    void on_actionAgregar_Nodo_triggered();
    void on_actionAgregar_Transicion_triggered();
    void on_actionGenerar_Modelo_triggered();
    void on_actionCrear_Arcos_triggered();

    void on_actionEjecutar_triggered();

    void on_actionBorrar_triggered();

    void on_actionExportar_Diagrama_triggered();

    void on_actionMatriz_Pre_triggered();

    void on_actionMatriz_Post_triggered();

private:
    Ui::MainWindow *ui;
    bool created;
};

#endif // MAINWINDOW_H
