#include "chicken.h"
#include "bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>

Bullet::Bullet(): QObject(), QGraphicsPixmapItem()
{
<<<<<<< HEAD
    this->setPixmap(QPixmap(".\imgs\red_laser.png").scaled(35,35));
=======
    this->setPixmap(QPixmap("D:/code/university/CSII Lab/Assignment2/Nadine-Ahmed-Chicken-invaders/ChickenInvaders/imgs/red_laser.png").scaled(35,35));
>>>>>>> 343102116c94f7e48fa76dc382817f6e6e4fd3a1


    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

void Bullet :: move()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    int n = colliding_items.size();
    for (int i = 0; i < n; ++i)
    {
        if (typeid(*(colliding_items[i])) == typeid(Chicken)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;
        }
    }



    setPos(x(),y()-10);
    if (pos().y() + pixmap().height() < 0){
        scene()->removeItem(this);
        delete this;
    }
}
