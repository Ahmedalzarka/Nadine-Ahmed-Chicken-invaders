#include "chicken.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>


Chicken::Chicken(): QObject(), QGraphicsPixmapItem(){
    this->setPixmap(QPixmap("D:/code/university/CSII Lab/Assignment2/Nadine-Ahmed-Chicken-invaders/ChickenInvaders/imgs/otherChicken.png").scaled(80,80));
    int randomNumber = rand() % 801;
    setPos(randomNumber, 0);

    //set timer
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);
}

void Chicken::move()
{
    setPos(x(), y() + 10);
    //check if out of bounds of scene
    if (y() + pixmap().height() > scene()->height()){
        scene()->removeItem(this);
        delete this;
        return;
    }
}
