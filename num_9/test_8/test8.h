#ifndef __TEST_8_H__
#define __TEST_8_H__

#include <iostream>
#include "stdio.h"
#include "cstring"

const int TSIZE=50;

struct film
{
    char title[TSIZE];
    int rating;
};

typedef film Item;
const int LISTMAX = 10;
class List
{
private:
    Item items[LISTMAX];
    int count;
public:
    List();
    bool isempty();
    bool isfull();
    int itemcount();
    bool additem(Item item);
    void visit(void(*pf)(Item&));
};

#endif