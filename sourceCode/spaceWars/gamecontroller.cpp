#include "gamecontroller.h"
const int gameController::_FIELD_HEIGHT = 65;
const int gameController:: _FIELD_WIDTH = 70;

int gameController::printUI()
{
    QList<graphicChar> area;
    for(int i=1; i<_FIELD_HEIGHT; i++)
    {
        area.append(graphicChar(point(0,i), '|', BG_RED));
        area.append(graphicChar(point(_FIELD_WIDTH, i), '|', BG_RED));
    }

    bg::setColor(BG_DARK_BLUE);
    bg::gotoxy(0, 75);
    std::cout << "Jugador 1";


    for(int i=1; i<_FIELD_WIDTH+1; i++)
    {
        area.append(graphicChar(point(i,0), '_', BG_RED));
        area.append(graphicChar(point(i, _FIELD_HEIGHT), '-', BG_RED));
    }
    for(int i=0; i<area.size(); i++)
    {
        area[i].paint(point(0, 0));
    }
}

gameController::gameController()
{
}
