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
    void keyPressEvent(QKeyEvent * event);
private:
    int scoreValue;
    QGraphicsTextItem * score;
public slots:
    void createEnemy();
};

#endif // PLAYER_H
