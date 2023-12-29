#include "test7.h"

Plorg::Plorg()
{
    strcpy(name, "plorg");
    ci_value = 50;
}

Plorg::Plorg(char* na, int ci)
{
    strcpy(name, na);
    ci_value = ci;
}

void Plorg::show()const
{
    printf("%s's ci value is %d\n", name, ci_value);
}

void Plorg::modifyci(int ci)
{
    ci_value = ci;
}
