#ifndef __TEST_5_H__
#define __TEST_5_H__

#include "iostream"
#include  "stdio.h"
class Move
{
private:
    double x;
    double y;
public:
    Move(double a=0,double b=0);
    void showMove()const;
    Move Moveadd(const Move&m)const;
    //thisfunctionaddsxofmtoxofinvokingobjecttogetnewx
    //addyofmtoyofinvokingobjecttogetnewy,createsanew
    //moveobjectinitializedtonewx,yvaluesandreturnsit
    void reset(double a=0,double b=0);
};

#endif