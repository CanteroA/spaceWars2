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
    ship2(point pos, float speed, char dir, int flR, int flL, int flT, int flB);
    void speedUp();
    void speedDown();
    void turnRight();
    void turnLeft();
    void fire1();
    void fire2();
    int recvCmd(int cmd);
    int confCmd(int sUp, int sDown, int tLeft, int tRight, int fire1, int fire2);
    int getLifes();
    int getNumberFires();
    int lose();
    void win();
    virtual int hit(const graphicObjects* hitObject);
    QList<graphicObjects*> createGO();
};

#endif // SHIP2_H
