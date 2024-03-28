#include "player.h"
#include "enemy.h"
#include "laser.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QDebug>

Player::Player(QGraphicsTextItem * score)
{
    score = score;
    scoreValue = 0;
}

void Player::keyPressEvent(QKeyEvent * event)
{
    if (event->key() == Qt::Key_Left)
    {
        if(x()>0)
        {
            setPos(x()-10,y());
        }
    }
    else if (event->key() == Qt::Key_Right)
    {
        { if(x()+100<800)
                setPos(x()+10,y());
        }
    }
    else if (event->key() == Qt::Key_Up)
    {
        setPos(x(), y()-30);
    }
    else if (event->key() == Qt::Key_Down)
    {
        setPos(x(), y()+30);
    }
    else if(event->key()== Qt::Key_Space)
    {
        laser * laser1 = new laser();
        laser1->setPos(x()+30,y());
        scene()->addItem(laser1);

    }

    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0; i < colliding_items.size(); i++)
    {
        scene()->removeItem(colliding_items[i]);
        scoreValue++;
        score->setPlainText("Score: " + QString::number(scoreValue));
    }
}

void Player::createEnemy()
{ enemy * enemy1 = new enemy();
    scene()->addItem(enemy1);

}

