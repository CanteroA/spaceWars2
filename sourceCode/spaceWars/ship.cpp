#include "ship.h"
#include "consoleTools/basicGraphic/basicgraphic.h"
const float ship::_speedStep = 0.02;
const float ship::_speedMax = 0.05;
const float ship::_speedMin = 0;
const float ship::_bulletSpeed = ship::_speedMax;

void ship::initGraphicObject(point pos, float speed, char dir, int flR, int flL, int flT, int flB)
{

    graphicObjects::initGraphicObject(pos,speed,dir,flR,flL,flT,flB);


    _graphRight.clear();
    _graphRight.append(graphicChar(point(0,0),'|',BG_GREEN));
    _graphRight.append(graphicChar(point(1,0),'\\',BG_GREEN));
    _graphRight.append(graphicChar(point(2,0),'_',BG_GREEN));
    _graphRight.append(graphicChar(point(0,1),'>',BG_CYAN));
    _graphRight.append(graphicChar(point(2,1),'_',BG_GREEN));
    _graphRight.append(graphicChar(point(3,1),'>',BG_GREEN));
    _graphRight.append(graphicChar(point(0,2),'|',BG_GREEN));
    _graphRight.append(graphicChar(point(1,2),'/',BG_GREEN));

    _graphLeft.clear();
    _graphLeft.append(graphicChar(point(1,0),'_',BG_GREEN));
    _graphLeft.append(graphicChar(point(2,0),'/',BG_GREEN));
    _graphLeft.append(graphicChar(point(3,0),'|',BG_GREEN));
    _graphLeft.append(graphicChar(point(0,1),'<',BG_GREEN));
    _graphLeft.append(graphicChar(point(1,1),'_',BG_GREEN));
    _graphLeft.append(graphicChar(point(3,1),'<',BG_CYAN));
    _graphLeft.append(graphicChar(point(2,2),'\\',BG_GREEN));
    _graphLeft.append(graphicChar(point(3,2),'|',BG_GREEN));

    _graphDown.clear();
    _graphDown.append(graphicChar(point(0,0),'_',BG_GREEN));
    _graphDown.append(graphicChar(point(1,0),'V',BG_CYAN));
    _graphDown.append(graphicChar(point(2,0),'_',BG_GREEN));
    _graphDown.append(graphicChar(point(0,1),'\\',BG_GREEN));
    _graphDown.append(graphicChar(point(1,1),'X',BG_CYAN));
    _graphDown.append(graphicChar(point(2,1),'/',BG_GREEN));
    _graphDown.append(graphicChar(point(0,2),'|',BG_GREEN));
    _graphDown.append(graphicChar(point(2,2),'|',BG_GREEN));
    _graphDown.append(graphicChar(point(1,3),'v',BG_GREEN));


    _graphUp.clear();
    _graphUp.append(graphicChar(point(0,3),'_',BG_GREEN));
    _graphUp.append(graphicChar(point(1,3),'^',BG_CYAN));
    _graphUp.append(graphicChar(point(2,3),'_',BG_GREEN));
    _graphUp.append(graphicChar(point(0,2),'\\',BG_GREEN));
    _graphUp.append(graphicChar(point(1,2),'X',BG_CYAN));
    _graphUp.append(graphicChar(point(2,2),'/',BG_GREEN));
    _graphUp.append(graphicChar(point(0,1),'|',BG_GREEN));
    _graphUp.append(graphicChar(point(2,1),'|',BG_GREEN));
    _graphUp.append(graphicChar(point(1,0),'^',BG_GREEN));

    fillHitArea();
    setDir(dir);
    _hitPower=2;
    _lifes=9;

    _speedUp= 0;
    _speedDown=0;
    _turnLeft=0;
    _turnRight=0;
    _fire1=0;
    _fire2=0;


}

ship::ship()
{

}

ship::ship(point pos, float speed, char dir, int flR, int flL, int flT, int flB)
{
    initGraphicObject(pos,speed,dir,flR,flL,flT,flB);
}



void ship::speedUp()
{
    _speed += _speedStep;
    if(_speed>_speedMax)
    _speed =_speedMax;
}

void ship::speedDown()
{
    _speed -= _speedStep;
    if(_speed<_speedMin)
        _speed=_speedMin;
}

void ship::turnRight()
{
    float w = getWidth();
    float h = getHeight();
    point pos = getPos();

    switch(_direction)
 {
    case DIR_LEFT:
        pos.setX(pos.x()+w);
        pos.setY(pos.y()-(w-h));
        setPos(pos);
        setDir(DIR_TOP);

    break;
    case DIR_DOWN:
        pos.setX(pos.x()-(h-w));
        pos.setY(pos.y()-w);
        setPos(pos);
        setDir(DIR_LEFT);

        break;
    case DIR_RIGHT:
        pos.setX(pos.x()-h);
        pos.setY(pos.y());
        setPos(pos);
        setDir(DIR_DOWN);
    break;
    case DIR_TOP:
        pos.setX(pos.x());
        pos.setY(pos.y()+h);
        setPos(pos);
        setDir(DIR_RIGHT);

    break;
}
}


void ship::turnLeft()
{
    float w = getWidth();
    float h = getHeight();
    point pos = getPos();
    switch(_direction)
{
    case DIR_LEFT:
        pos.setX(pos.x()+w);
        pos.setY(pos.y());
        setPos(pos);
        setDir(DIR_DOWN);

    break;
    case DIR_DOWN:
        pos.setX(pos.x());
        pos.setY(pos.y()-w);
        setPos(pos);
        setDir(DIR_RIGHT);
    break;
    case DIR_RIGHT:
        pos.setX(pos.x()-h);
        pos.setY(pos.y()-(w-h));
        setPos(pos);
        setDir(DIR_TOP);
    break;
    case DIR_TOP:
        pos.setX(pos.x()-(h-w));
        pos.setY(pos.y()+h);
        setPos(pos);
        setDir(DIR_LEFT);
        break;
    }
}

void ship::fire1()
{
    bullet* b = new bullet(getPos(), _bulletSpeed, _direction, _fieldLimtRight, _fieldLimitLeft, _fieldLimitTop, _fieldLimitBot );
    float w = getWidth();
    float h = getHeight();
    switch (_direction) {
    case DIR_RIGHT:
            b->setPos(point((getPos().x()+w), (getPos().y()+(w/2))));
        break;
    case DIR_LEFT:
            b->setPos(point((getPos().x()-1), (getPos().y()+(w/2))));
        break;
    case DIR_DOWN:
            b->setPos(point((getPos().x()+(w/2)), (getPos().y()+h)));
        break;
    case DIR_TOP:
            b->setPos(point(getPos().x()+(w/2), (getPos().y()-1)));
        break;
    default:
        break;
    }
    _bulletFired.append(b);
}

void ship::fire2()
{

}

int ship::confCmd(int sUp, int sDown, int turnRight, int turnLeft, int fire1, int fire2)
{
    _speedUp = sUp;
    _speedDown = sDown;
    _turnRight = turnRight;
    _turnLeft = turnLeft;
    _fire1 = fire1;
    _fire2 = fire2;
}

int ship::getLifes()
{
    return _lifes;
}

int ship::hit(const graphicObjects *hitObject)
{
    graphicObjects::hit(hitObject);
    _lifes-=hitObject->getHitPower();
    if(_lifes<=0)
        _alive=false;
    return 0;
}

QList<graphicObjects *> ship::createGO()
{
    QList<graphicObjects*> ret = _bulletFired;
    _bulletFired.clear();
    return ret;
}
int ship::recvCmd(int cmd)
{
    if(!(_speedUp && _speedDown && _turnLeft && _turnRight && _fire1 && _fire2))
        return -1;


    if(cmd == _speedUp)
        speedUp();
    else if(cmd == _speedDown)
        speedDown();
    else if(cmd == _turnLeft)
        turnLeft();
    else if(cmd == _turnRight)
        turnRight();
    else if(cmd == _fire1)
        fire1();
    else if(cmd == _fire2)
        fire2();
    else
        return 0;



    return 1;


}



