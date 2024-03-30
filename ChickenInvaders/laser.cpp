#include "laser.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QList>
#include <enemy.h>
#include <player.h>

laser::laser():QObject(), QGraphicsPixmapItem() {

    setPos(10,50);
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT (move()));
    timer->start(50);
}

 void laser:: move()
{
    if(event->key()== Qt::Key_Space){
        QList<QGraphicsItem *> colliding_items = collidingItems();
        int n = colliding_items.size();
        for (int i = 0; i < n; ++i)
        {
            if (typeid(*(colliding_items[i])) == typeid(Chicken)){
                Stats::increase();

                int score = Stats::getScore();
                if(score > 0 && score%(10*Stats::difficulty) == 0){
                    Spawn::increaseDifficulty();
                }

                scene()->removeItem(colliding_items[i]);
                scene()->removeItem(this);
                delete colliding_items[i];
                delete this;
                return;
            }


}

