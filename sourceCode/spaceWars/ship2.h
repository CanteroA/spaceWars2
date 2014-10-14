#ifndef SHIP2_H
#define SHIP2_H
#include "ship.h"

class ship2:public ship
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
    int _numberFires;

public:
    ship2();
};

#endif // SHIP2_H
