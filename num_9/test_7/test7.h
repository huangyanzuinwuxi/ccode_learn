#ifndef __TEST_7_H__
#define __TEST_7_H__

#include <iostream>
#include "stdio.h"
#include "cstring"

class  Plorg
{
    private:
        char name[20];
        int ci_value;
    public:
        Plorg();
        Plorg(char* na, int ci = 50);
        void show()const;
        void modifyci(int ci);
};

#endif