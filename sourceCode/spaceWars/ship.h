#ifndef SHIP_H
#define SHIP_H
#include "graphicobjects.h"
#include "bullet.h"
#include "bullet2.h"

class ship:public graphicObjects
{
private:
    virtual void initGraphicObject(point pos, float speed, char dir, int flR, int flL, int flT, int flB);
    static const float _speedStep;
    static const float _speedMax;
    static const float _speedMin;
    int _speedUp,_speedDown,_turnLeft, _turnRight, _fire1, _fire2;
    int _lifes;
    static const float _bulletSpeed;
    QList<graphicObjects*> _bulletFired;

public:

    ship();
    ship(point pos, float speed, char dir, int flR, int flL, int flT, int flB);
    void speedUp();
    void speedDown();
    void turnRight();
    void turnLeft();
    void fire1();
    void fire2();
    int recvCmd(int cmd);
    int confCmd(int sUp, int sDown, int tLeft, int tRight, int fire1, int fire2);
    int getLifes();
    virtual int hit(const graphicObjects* hitObject);
    QList<graphicObjects*> createGO();
                //Ejecutar antes de recvCmd


};

#endif // SHIP_H
