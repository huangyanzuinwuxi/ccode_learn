#include "test8.h"

List::List()
{
    count = 0;
}

bool List::isempty()
{
    if (count == 0)
        return false;
}

bool List::isfull()
{
    if (count == LISTMAX)
        return true;
}

int List::itemcount()
{
    //printf("the object count is %d\n", count);
    return count;
}

bool List::additem(Item item)
{
    if (count >= LISTMAX) {
        printf("the list is full,can not add!\n");
        return false;
    } else {
        items[count++] = item;
        return true;
    }
}

void List::visit(void(*pf)(Item&))
{
    for( int i=0;i<count;i++)
    {
        (*pf)(items[i]);
    }
}
