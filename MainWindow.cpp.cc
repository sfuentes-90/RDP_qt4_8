#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "View/MatrixView.h"

MainWindow::MainWindow(QWidget *parent) :  QMainWindow(parent),  ui(new Ui::MainWindow) {
    ui->setupUi(this);
    scene = new GraphicsScene(this);
    ui->graphicsView->fitInView(scene->sceneRect());
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    comboBox = new QComboBox;
    ui->toolBar->addWidget(comboBox);

    // No redimensiona correctamente la escena...
    this->setFixedSize(800,600);

    this->ui->actionCrear_Arcos->setDisabled(true);
    this->ui->actionEjecutar->setDisabled(true);
    this->ui->actionMatriz_Post->setDisabled(true);
    this->ui->actionMatriz_Pre->setDisabled(true);

    created = false;
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_actionAgregar_Nodo_triggered() {
    MainWindow::crearNodo = true;
    MainWindow::crearTransicion = false;
    MainWindow::crearArista = false;

    QMessageBox::information(this, "Informacion", "Puede comenzar a dibujar los nodos en el area de dibujo");
}

void MainWindow::on_actionAgregar_Transicion_triggered() {
    MainWindow::crearNodo = false;
    MainWindow::crearTransicion = true;
    MainWindow::crearArista = false;

    QMessageBox::information(this, "Información", "Puede comenzar a dibujar las transiciones en el area de dibujo");
}

void MainWindow::on_actionGenerar_Modelo_triggered() {
    // Se cambia el estado de los botones
    this->ui->actionAgregar_Nodo->setDisabled(true);
    this->ui->actionAgregar_Transicion->setDisabled(true);
    this->ui->actionCrear_Arcos->setDisabled(false);
    this->ui->actionMatriz_Post->setDisabled(false);
    this->ui->actionMatriz_Pre->setDisabled(false);
    this->ui->actionGenerar_Modelo->setDisabled(true);

    // Se crean las matrices pre y post
    this->pre = new Matrix(pList->getSize(), tList->getSize());
    this->post = new Matrix(pList->getSize(), tList->getSize());

    // Se crea la RDP
    this->rdp = new Petri(pList,tList,pre,post, scene);

    created = true;

}

void MainWindow::on_actionCrear_Arcos_triggered() {
    MainWindow::crearNodo = false;
    MainWindow::crearTransicion = false;
    MainWindow::crearArista = true;
    this->ui->actionEjecutar->setDisabled(false);

    QMessageBox::information(this, "Información", "Puede comenzar a dibujar los nodos en el area de dibujo");
}

void MainWindow::on_actionEjecutar_triggered() {
    // Se obtiene el texto seleccionado en el comboBox
    QString t = this->comboBox->currentText();

    // Se obtiene la columna de la transicion para analizar la sensibilidad
    int col = tList->getIndexOf(t.toStdString());

    // Se intenta lanzar la transicion o se lanza un mensaje diciendo que no es posible
    if(pre->sencibilizada(col, rdp->getM()))
        rdp->triggerTransition(tList->getTransitionByName(t.toStdString()));
    else
        QMessageBox::information(this, "Atencion", "No se puede lanzar la transicion seleccionada, asegurece que cumpla las condiciones");
}

void MainWindow::on_actionBorrar_triggered(){
    this->tList->deleteAll();
    this->pList->deleteAll();

    if(created){
        pre->deleteAll();
        post->deleteAll();
    }

    // Se limpia la interfaz
    this->scene->clear();
    this->comboBox->clear();
    this->ui->actionCrear_Arcos->setDisabled(true);
    this->ui->actionEjecutar->setDisabled(true);
    this->ui->actionMatriz_Post->setDisabled(true);
    this->ui->actionMatriz_Pre->setDisabled(true);
    this->ui->actionAgregar_Nodo->setDisabled(false);
    this->ui->actionAgregar_Transicion->setDisabled(false);
    this->ui->actionGenerar_Modelo->setDisabled(false);
}

void MainWindow::on_actionExportar_Diagrama_triggered() {
    QString fileName= QFileDialog::getSaveFileName(this, "Exportar Diagrama...", QCoreApplication::applicationDirPath(), "BMP Files (*.bmp);;JPEG (*.JPEG);;PNG (*.png)" );

    if (!fileName.isNull()) {
        QPixmap pixMap = QPixmap::grabWidget(this->ui->graphicsView);
        pixMap.save(fileName);
    }
}

void MainWindow::on_actionMatriz_Pre_triggered() {
    MatrixView* d = new MatrixView(this, "Matriz Pre", pre, tList, pList);
    d->exec();
}

void MainWindow::on_actionMatriz_Post_triggered() {
    MatrixView* d = new MatrixView(this, "Matriz Post", post, tList, pList);
    d->exec();
}
