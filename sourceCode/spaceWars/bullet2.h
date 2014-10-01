#ifndef BULLET2_H
#define BULLET2_H
#include "bullet.h"

class bullet2:public bullet
{
protected:
    virtual void initGraphicObject(point pos, float speed, char dir, int flR, int flL, int flT, int flB);

public:
    bullet2(point pos, int flR, int flL, int flT, int flB);



};

#endif // BULLET2_H
