#ifndef __TEST_5_H__
#define __TEST_5_H__

#include <iostream>
#include "stdio.h"

struct customer{
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
    private:
        enum{MAX=10};
        Item items[MAX];
        int top;
    public:
        Stack();
        bool isempty()const;
        bool isfull()const;
        bool push(const Item& item);
        bool pop(Item& item);
};


#endif