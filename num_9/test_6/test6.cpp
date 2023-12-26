#include "test6.h"

int main()
{
    Move m1(4, 5);
    Move m2(2, 1);
    Move m3;
    m1.showMove();
    m2.showMove();
    m3 = m2.Moveadd(m1);
    m3.showMove();
    m1.showMove();
    m2.showMove();
    m1.reset();
    m1.showMove();

    return 0;
}