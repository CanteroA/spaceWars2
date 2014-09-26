#include "bullet.h"

void bullet::initGraphicObject(point pos, float speed, char dir, int flR, int flL, int flT, int flB)
{
    graphicObjects::initGraphicObject(pos,speed,dir,flR,flL,flT,flB);

    _graphRight.clear();
    _graphRight.append(graphicChar(point(0,0),'~',BG_GREEN));
    _graphRight.append(graphicChar(point(1,0),'>',BG_GREEN));

    _graphLeft.clear();
    _graphLeft.append(graphicChar(point(0,0),'<',BG_GREEN));
    _graphLeft.append(graphicChar(point(1,0),'~',BG_GREEN));

    _graphDown.clear();
    _graphDown.append(graphicChar(point(0,0),'S',BG_GREEN));
    _graphDown.append(graphicChar(point(0,1),'v',BG_CYAN));

    _graphUp.clear();
    _graphUp.append(graphicChar(point(0,0),'^',BG_GREEN));
    _graphUp.append(graphicChar(point(0,1),'S',BG_CYAN));

    fillHitArea();
    setDir(dir);
    _hitPower=1;
}


bullet::bullet(point pos, float speed, char dir, int flR, int flL, int flT, int flB)
{

    initGraphicObject(pos,speed,dir,flR,flL,flT,flB);
}

int bullet::setPos(point p)
{
    int r = graphicObjects::setPos(p);
    if(r)
        _alive = false;

    return r;
}

int bullet::hit(const graphicObjects *hitObjects)
{
    int r = graphicObjects::hit(hitObjects);
    _alive=false;

    return r;

}
