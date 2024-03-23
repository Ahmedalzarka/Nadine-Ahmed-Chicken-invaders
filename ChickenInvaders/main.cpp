#include "player.h"
#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

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

    return a.exec();
}
