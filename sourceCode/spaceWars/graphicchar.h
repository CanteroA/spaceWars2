#ifndef GRAPHICCHAR_H
#define GRAPHICCHAR_H
#include "point.h"
#include "consoleTools/basicGraphic/basicgraphic.h"
#include <iostream>
class graphicChar
{
private:
    point _pos;
    unsigned char _char;
    unsigned char _colour;
public:
    graphicChar();
    graphicChar(point pos, unsigned char ch, unsigned char colour=BG_WHITE);
    int paint(point offset);
    point pos() const;

};

#endif // GRAPHICCHAR_H
