#ifndef BULLET_H
#define BULLET_H
#include "graphicobjects.h"

class bullet:public graphicObjects
{
private:
    void initGraphicObject(point pos, float speed, char dir, int flR, int flL, int flT, int flB);


public:    
    bullet(point pos, float speed, char dir, int flR, int flL, int flT, int flB);
    int setPos(point p);
    virtual int hit (const graphicObjects* hitObjects);

};

#endif // BULLET_H
