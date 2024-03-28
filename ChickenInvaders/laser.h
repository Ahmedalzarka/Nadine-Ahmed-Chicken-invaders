#ifndef LASER_H
#define LASER_H
#include <QGraphicsPixMapItem>
#include <QObject>

class laser: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    laser();

public slots:
    void move();
};

#endif // LASER_H
