
#ifndef GRAPHICSSCENE_H
#define GRAPHICSSCENE_H
#include <QGraphicsScene>
#include <QPoint>
#include <QLine>
#include <QPixmap>
#include <QGraphicsSceneMouseEvent>
#include "../Model/Place.h"

class GraphicsScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit GraphicsScene(QObject *parent = 0);
    ~GraphicsScene();
    void crearNodo(QPointF);
    void crearTransicion(QPointF);
    void crearArista(QPointF, QPointF);
    void deleteAll();
    void changeNodeValue(int value, Place *node);

signals:

protected:
    bool m_nbMousePressed;
    QLine preview;
    QPointF origen;
    QPointF fin;
    QPixmap m_nPTargetPixmap;
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent);



public slots:
    private:

};
#endif // GRAPHICSSCENE_H
