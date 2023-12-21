#include "test5.h"

Stack::Stack()
{
    top = 0;
}

bool Stack::isempty()const
{
    return (top == 0) ? 1 : 0;
}

bool Stack::isfull()const
{
    return (top == MAX) ? 1 : 0;
}

bool Stack::push(const Item& item)
{
    if (top < MAX) {
        items[top++] = item;
        return true;
    } else {
        return false;
    }
}

bool Stack::pop(Item& item)
{

}