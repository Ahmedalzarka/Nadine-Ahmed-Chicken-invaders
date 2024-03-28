#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsTextItem>

class Player : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player(QGraphicsTextItem * score=0);
<<<<<<< HEAD
    void keyPressEvent(QKeyEvent * event);
=======
>>>>>>> f0f4151c72bb2d9913c63fd21d150e99d9bcbae1
private:
    int scoreValue;
    QGraphicsTextItem * score;
public slots:
<<<<<<< HEAD
    void createEnemy();
=======
    void keyPressEvent(QKeyEvent * event);
>>>>>>> f0f4151c72bb2d9913c63fd21d150e99d9bcbae1
};

#endif // PLAYER_H
