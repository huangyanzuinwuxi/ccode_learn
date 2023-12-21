#include <iostream>
#include "golf.h"

Golf::Golf()
{
    strcpy(fullname, "noname");
    handicap = 0;
}

Golf::Golf(const char* name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

const Golf& Golf::setgolf(const Golf&g)
{
    strcpy(fullname, g.fullname);
    handicap =  g.handicap;
    
    return *this;
}

void Golf::showgolf()const
{
    printf("fullname is %s, handicap is %d\n", fullname, handicap);
    
}