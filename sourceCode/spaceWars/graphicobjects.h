#ifndef GRAPHICOBJECTS_H
#define GRAPHICOBJECTS_H
#include "graphicchar.h"
#include <QList>
#define DIR_RIGHT 0
#define DIR_LEFT 2
#define DIR_TOP 1
#define DIR_DOWN 3


class graphicObjects
{
private:
    // 0:RIGHT,1:TOP,2:LEFT,3:DOWN
    char _direction;

    point _pos;

    float _speed;
    int _fieldLimtRight, _fieldLimitLeft, _fieldLimitTop, _fieldLimitBot;
    QList <point> _hitAreaRight, _hitAreaLeft, _hitAreaUp, _hitAreaDown;
    //unsigned char _keyPosRight, _keyPosLeft, _keySpeedUp, _keySpeedDown;
    int _edgeRight, _edgeLeft, _edgeTop, _edgeBot;

    //Esta funcion inicializa los objetos
protected:
    void initGraphicObject(point pos, float speed, char dir, int flR, int flL, int flT, int flB);
    void fillHitArea();
    QList <graphicChar> _graphRight, _graphLeft, _graphUp, _graphDown;
    int _hitPower;
public:
    //Initialize all members
    graphicObjects();
    graphicObjects(point pos, float speed, char dir, int flR, int flL, int flT, int flB);
    int paint();
    int tic(double time);//time en milisegundos
    int checkHit(point p);
    int checkHit(const QList<point> &points);
    void setPos(float x, float y);
    void setPos(point p);
    void setSpeed(float s);
    void setFieldLimits(int R, int L, int T, int B);
    bool setDir(char dir);

};

#endif // GRAPHICOBJECTS_H
