#include "golf.h"
#include <iostream>

int main()
{
    Golf golger1("AnnBirdfree", 5);
    golger1.showgolf();
    Golf golger2;
    golger2.setgolf(golger1);
    golger2.showgolf();
    return 0;
}