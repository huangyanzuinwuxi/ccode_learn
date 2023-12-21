#include <iostream>
#include "person.h"


int main()
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy","Sam");
    two.Show();
    three.FormalShow();

    return 0;
}