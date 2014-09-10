#include "ship.h"
#include "consoleTools/basicGraphic/basicgraphic.h"
const float ship::_speedStep = 0.02;
const float ship::_speedMax = 0.05;
const float ship::_speedMin = 0;

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
    setDir(DIR_RIGHT);
    _hitPower=2;

    _sUp= 0;
    _sDown=0;
    _tLeft=0;
    _tRight=0;
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
    switch(_direction)
 {
    case DIR_RIGHT:
        setDir(DIR_DOWN);
    break;
    case DIR_DOWN:
        setDir(DIR_LEFT);
    break;
    case DIR_LEFT:
        setDir(DIR_TOP);
    break;
    case DIR_TOP:
        setDir(DIR_RIGHT);
    break;
}
}


void ship::turnLeft()
{
    switch(_direction)
{
    case DIR_LEFT:
        _direction = DIR_DOWN;
    break;
    case DIR_DOWN:
        _direction = DIR_RIGHT;
    break;
    case DIR_RIGHT:
        _direction = DIR_TOP;
    break;
    case DIR_TOP:
        _direction = DIR_LEFT;
        break;
    }
}

void ship::fire1()
{

}

void ship::fire2()
{

}

int ship::recvCmd(int cmd)
{
    if (!(_sUp && _tLeft && _sDown && _tRight && _fire1 && _fire2))
        return -1;
    if(cmd == _sUp)
        speedUp();
    else if(cmd == _sDown)
        speedDown();
    else if (cmd == _tLeft)
        turnLeft();
    else if (cmd == _tRight)
        turnRight();
    else if (cmd == _fire1)
        fire1();
    else if (cmd == _fire2)
        fire2();
    else
        return 0;

}

int ship::confCmds(int sUp, int sDown, int tLeft, int tRight, int fire1, int fire2)
{
    _sUp = sUp;
    _sDown = sDown;
    _tLeft =  tLeft;
    _tRight = tRight;
    _fire1 = fire1;
    _fire2 = fire2;

}



