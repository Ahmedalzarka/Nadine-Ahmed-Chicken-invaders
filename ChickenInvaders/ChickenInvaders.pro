QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
<<<<<<< HEAD \
    bullet.cpp \
    chicken.cpp \
    enemy.cpp \
    laser.cpp \
    main.cpp \
    mainwindow.cpp \
    player.cpp \
    ship.cpp \
    spaceships.cpp \
    stats.cpp \
    enemy.cpp \
    laser.cpp \
    main.cpp \
    player.cpp

HEADERS += \
    enemy.h \
    laser.h \
    player.h
=======
    bullet.cpp \
    chicken.cpp \
    main.cpp \
    ship.cpp \
    stats.cpp

HEADERS += \
    bullet.h \
    chicken.h \
    ship.h \
    stats.h
>>>>>>> f0f4151c72bb2d9913c63fd21d150e99d9bcbae1

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
<<<<<<< HEAD
=======

RESOURCES += \
    img.qrc \
    imgs/chicken.qrc

DISTFILES += \
    imgs/chicken.png \
    imgs/otherChicken.png \
    imgs/red_laser.png \
    imgs/ship.png
>>>>>>> f0f4151c72bb2d9913c63fd21d150e99d9bcbae1z
