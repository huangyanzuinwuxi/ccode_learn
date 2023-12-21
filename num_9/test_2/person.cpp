
#include "person.h"

Person::Person(const std::string & ln, const char* fn)
{
    lname = ln;
    strcpy(fname, fn);
}

void Person::Show()const
{
    printf("the name is %s, %s\n", fname, lname.c_str());
}

void Person::FormalShow()const
{
    printf("the name is %s, %s\n", lname.c_str(), fname);
}