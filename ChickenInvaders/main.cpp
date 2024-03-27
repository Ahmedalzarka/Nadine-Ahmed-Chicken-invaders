#include <QApplication>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include<QGraphicsView>
#include <QTimer>
#include <QDebug>
#include <QBrush>
#include "ship.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create scene
    QGraphicsScene * scene = new QGraphicsScene();

    // Add ship tp the scene
    QGraphicsPixmapItem * player = new Ship();


    // Add player to scene
    scene-> addItem(player);

    // Remove scroll bars
    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // Make player focusable
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    // Show the view
    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);
    QBrush blue(Qt::blue);
    scene->setBackgroundBrush(blue);

    return a.exec();
}
