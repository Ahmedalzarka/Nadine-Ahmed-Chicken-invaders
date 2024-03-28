<<<<<<< HEAD
#include "player.h"
#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>
=======
#include <QApplication>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include<QGraphicsView>
#include <QTimer>
#include <QDebug>
#include <QBrush>
#include "ship.h"
#include "stats.h"
>>>>>>> f0f4151c72bb2d9913c63fd21d150e99d9bcbae1

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

<<<<<<< HEAD
    QGraphicsView view;
    view.setFixedSize(800, 600);

    view.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QGraphicsScene scene;
    scene.setSceneRect(0, 0, 800, 600);

    //chicken enemy
    QPixmap chicken("C:/Users/Nadine/Downloads/Assignment 2 - Game (2).zip/chicken.png");

    // score
    QGraphicsTextItem * score = new QGraphicsTextItem;
    score->setFont(QFont("times", 16));
    score->setDefaultTextColor(Qt::blue);
    score->setPlainText("Score: " + QString::number(0));
    score->setPos(600, 10);
    scene.addItem(score);


    // laser
    QPixmap laser("C:/Users/Nadine/Desktop/AUC/Semester 4/CS2 Lab/ChickenInvaders/red_laser.png");
    laser = laser.scaledToWidth(50);
    laser = laser.scaledToHeight(50);
    QGraphicsPixmapItem * image1 = new QGraphicsPixmapItem;
    image1->setPixmap(laser);
    image1->setPos(30, 400);
    scene.addItem(image1);

    // ship player
    QPixmap ship("C:/Users/Nadine/Desktop/AUC/Semester 4/CS2 Lab/ChickenInvaders/ship.png");
    laser = ship.scaledToWidth(80);
    laser = ship.scaledToHeight(80);
    Player * player = new Player(score);
    player->setPixmap(ship);
    player->setPos(10, 450);
    scene.addItem(player);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    view.setScene(&scene);
    view.show();
=======
    QGraphicsScene * scene = new QGraphicsScene();
    QGraphicsPixmapItem * player = new Ship();
    scene-> addItem(player);
    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();


    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);
    QBrush blue(Qt::blue);
    scene->setBackgroundBrush(blue);

    player->setPos(view->width()/2,view->height() - player->pixmap().height());

    QGraphicsTextItem* scoreText = new QGraphicsTextItem();
    QGraphicsTextItem* healthText = new QGraphicsTextItem();

    scene->addItem(scoreText);
    scene->addItem(healthText);

    Stats::setHealthText(healthText);
    Stats::setScoreText(scoreText);

>>>>>>> f0f4151c72bb2d9913c63fd21d150e99d9bcbae1

    return a.exec();
}
