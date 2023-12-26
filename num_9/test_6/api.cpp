#include "test6.h"

Move::Move(double a,double b)
{
    x = a;
    y = b;
}

void Move::showMove()const
{
    printf("show info : x = %lf, y = %lf\n", x, y);
}

Move Move::Moveadd(const Move&m)const
{
    Move temp;
    temp.x = x +  m.x;
    temp.y = y +  m.y;

    return temp;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}

