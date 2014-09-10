#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H
#include "QList"
#include "graphicchar.h"
#include "consoleTools/basicGraphic/basicgraphic.h"

class gameController
{
private:
    static const int _FIELD_HEIGHT;
    static const int _FIELD_WIDTH;
public:
    gameController();
    int run();
    int printUI();

};

#endif // GAMECONTROLLER_H
