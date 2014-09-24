#ifndef SHIP_H
#define SHIP_H
#include "graphicobjects.h"

class ship:public graphicObjects
{
private:
    void initGraphicObject(point pos, float speed, char dir, int flR, int flL, int flT, int flB);
    static const float _speedStep;
    static const float _speedMax;
    static const float _speedMin;
    int _speedUp,_speedDown,_turnLeft, _turnRight, _fire1, _fire2;
    int _lifes;


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
                //Ejecutar antes de recvCmd


};

#endif // SHIP_H
