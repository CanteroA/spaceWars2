#ifndef POINT_H
#define POINT_H

class point
{
private:
    float _posX, _posY;

public:
    point();
    point(float x, float y);
    void setX(float x);
    void setY(float y);
    float x() const;
    float y() const;
    int xi() const;
    int yi() const;

};
bool operator == (const point& p1,  const point& p2);//operador para comparar puntos
#endif // POINT_H
