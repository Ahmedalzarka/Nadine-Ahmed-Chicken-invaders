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
/* void laser:: move()
{
    if(event->key()== Qt::Key_Space){

        //1-  move the bullet upwards
        // 2- Handle the collision of the bullets with enemies
    }

}
*/
