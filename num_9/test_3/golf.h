#ifndef __GOLF_H__
#define __GOLF_H__

#include <iostream>
#include <string>
#include <cstring>

class Golf
{
private:
    char fullname[40];
    int handicap;
public:
    Golf();
    Golf(const char* name, int hc);
    const Golf& setgolf(const Golf& g);
    void showgolf()const;
};

#endif
