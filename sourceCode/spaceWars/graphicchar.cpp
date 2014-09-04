#include "graphicchar.h"


graphicChar::graphicChar()
{
    graphicChar(point(),'-', BG_GREEN);
}

graphicChar::graphicChar(point pos, unsigned char ch, unsigned char colour)
{
    _pos=pos;
    _char=ch;
    _colour=colour;
}

int graphicChar::paint(point offset)
{
    int x = (int)(offset.x()+ _pos.x());
    int y = (int)(offset.y()+_pos.y());
    bg::gotoxy(x,y);
    bg::setColor(_colour);
    std::cout<< _char;

}

point graphicChar::pos() const
{
    return _pos;

}
