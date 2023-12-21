#ifndef __SALE_H__
#define __SALE_H__

#include <iostream>
#include "stdio.h"

namespace SALES
{
    const int QUARIERS = 4;
    class Sales
    {
    private:
        double sales[QUARIERS];
        double average;
        double max;
        double min;
    public:
        Sales();
        Sales(const double ar[],int n);
        void setSales();
        void showSales()const;
    };
}

#endif