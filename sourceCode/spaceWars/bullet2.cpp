#include "bullet2.h"


void bullet2::initGraphicObject(point pos, float speed, char dir, int flR, int flL, int flT, int flB)
{
    graphicObjects::initGraphicObject(pos,speed,dir,flR,flL,flT,flB);

    _graphRight.clear();
    _graphRight.append(graphicChar(point(0,0),219,BG_RED));


   fillHitArea();



    setDir(dir);
    _hitPower=5;
}

bullet2::bullet2(point pos, int flR, int flL, int flT, int flB) :  bullet(pos, 0, DIR_RIGHT, flR, flL, flT, flB)

{
    initGraphicObject(pos,0,DIR_RIGHT,flR,flL,flT,flB);
}
