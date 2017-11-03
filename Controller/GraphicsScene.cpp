#include "../Controller/GraphicsScene.h"
#include "../View/NodeDialog.h"
#include "../View/TransitionDialog.h"
#include "../View/ArcDialog.h"
#include "../MainWindow.h"
#include <QGraphicsTextItem>
#include <QtGlobal>



GraphicsScene::GraphicsScene(QObject *parent) :  QGraphicsScene(parent) {
    // Intentar redimensionar dinamicamente la escena junto al graphicsView
    this->setSceneRect(0,0,770,480);
    m_nPTargetPixmap = QPixmap(800,600);
}


GraphicsScene::~GraphicsScene() {

}



void GraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent) {
    origen = mouseEvent->scenePos();
    MainWindow *parentWindow = qobject_cast<MainWindow*>(this->parent());


    if (mouseEvent->button() == Qt::LeftButton) {
        // Crear Nodo
        if(parentWindow->crearNodo){
            crearNodo(origen);
        }

        // Crear Transicion
        if(parentWindow->crearTransicion){
            crearTransicion(origen);
        }

        // Crear Arista
        if(parentWindow->crearArista){
            m_nbMousePressed = true;
            preview.setP1(origen.toPoint());
            preview.setP2(origen.toPoint());
        }
    }
}


void GraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent) {
    fin = mouseEvent->scenePos();

    if (mouseEvent->type() == QEvent::MouseMove) {
        preview.setP2(fin.toPoint());
    }

    update(); // update your view
}


void GraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)  {
    MainWindow *parentWindow = qobject_cast<MainWindow*>(this->parent());
    m_nbMousePressed = false;
    fin = mouseEvent->scenePos();

    if(parentWindow->crearArista){
        crearArista(origen, fin);
    }

    this->update();
}


void GraphicsScene::crearNodo(QPointF pt) {
    MainWindow *parentWindow = qobject_cast<MainWindow*>(this->parent());

    NodeDialog *d = new NodeDialog();
    int accepted = d->exec();

    if(accepted == QDialog::Accepted){
        QString sName = d->getName();
        QString sWeight = d->getWeight();

        if(sName.size() > 0 && sWeight.size() > 0){
            double x = pt.x();
            double y = pt.y();

            parentWindow->pList->addPlace(new Place(sName.toStdString(), sWeight.toInt(), pt));

            QGraphicsTextItem *name = this->addText(sName);
            QGraphicsTextItem *weight = this->addText(sWeight);
            name->setPos(x-10, y-40);
            weight->setPos(x-10, y-10);

            double r = 20;
            this->addEllipse(x-r, y-r, r*2.0, r*2.0, QPen(), QBrush(Qt::NoBrush));
        }
    }
}

void GraphicsScene::crearTransicion(QPointF pt){
    MainWindow *parentWindow = qobject_cast<MainWindow*>(this->parent());

    TransitionDialog *d = new TransitionDialog();
    int accepted = d->exec();

    if(accepted == QDialog::Accepted){
        QString text = d->getName();
        if(text.size() > 0){
            double x = pt.x();
            double y = pt.y();

            parentWindow->tList->addTransition(new Transition(text.toStdString(), pt));
            parentWindow->comboBox->addItem(text, parentWindow->tList->getSize() -1);

            QGraphicsTextItem *name = this->addText(text);
            name->setPos(x-10, y-40);

            double t = 20;
            this->addLine(pt.x(), pt.y()-t, pt.x(), pt.y()+t,QPen());
        }
    }
}


void GraphicsScene::crearArista(QPointF origen, QPointF fin) {
    MainWindow *parentWindow = qobject_cast<MainWindow*>(this->parent());

    // pre
    if(  parentWindow->tList->search(fin.toPoint()) != -1   &&   parentWindow->pList->search(origen.toPoint()) != -1 ){
        int fil = parentWindow->pList->search(origen.toPoint());
        int col = parentWindow->tList->search(fin.toPoint());

        ArcDialog *d = new ArcDialog();
        int accepted = d->exec();

        if(accepted == QDialog::Accepted){
            QString preValue = d->getPreValue();
            QString postValue = d->getPostValue();

            parentWindow->pre->setElement(preValue.toInt(), fil, col);
            parentWindow->post->setElement(postValue.toInt(), fil, col);


            // Se dibujan las lineas y etiquetas

            QPointF origenOffset = parentWindow->pList->getPlace(fil)->getLocation();
            QPointF finOffset = parentWindow->tList->getTransition(col)->getLocation();
            //QPointF midPoint =

            QGraphicsTextItem *pre = this->addText("pre: " + preValue);
            QGraphicsTextItem *post = this->addText("post: " + postValue);
            pre->setPos((origenOffset.x() + finOffset.x())/2.0, ((origenOffset.y()+finOffset.y())/2.0) - 25 );
            post->setPos((origenOffset.x() + finOffset.x())/2.0, ((origenOffset.y()+finOffset.y())/2.0) );

            qreal angle = qAtan((origenOffset.y() - finOffset.y()) / (origenOffset.x() - finOffset.x()));
            pre->rotate( (angle*180) / 3.14159265358979323 ) ;
            post->rotate( (angle*180) / 3.14159265358979323 ) ;


            // El nodo esta a la izquierda de la transicion
            if(origen.x() < fin.x()){

                this->addLine(origenOffset.x() + 30, origenOffset.y(), finOffset.x()-10, finOffset.y());
            }

            // El nodo esta a la derecha de la transicion
            if(origen.x() > fin.x()){
                this->addLine(origenOffset.x()-30, origenOffset.y(), finOffset.x()+10, finOffset.y());
            }
        }
    }
}

void GraphicsScene::changeNodeValue(int value, Place *node){
    QPointF center = node->getLocation();
    int r = 19;

    this->addEllipse(center.x()-r, center.y()-r, r*2.0, r*2.0, QPen(), QBrush(Qt::white));
    QGraphicsTextItem *weight = this->addText(QString::number(value));
    weight->setPos(center.x()-10, center.y()-10);

}

void GraphicsScene::deleteAll(){
    QGraphicsRectItem* r = new QGraphicsRectItem(0,0,770,480);
    r->setBrush(QBrush(Qt::white));
    this->addItem(r);
}

