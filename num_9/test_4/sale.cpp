#include "sale.h"

namespace SALES
{
    using namespace std;

    double calaverage(double ar[], int n)
    {
        double sum = 0.0;
        for(int i = 0; i < n; i++)
        {
            sum += ar[i];
        }
        return sum/n;
    }

    double calmax(double ar[], int n)
    {
        double max_temp = ar[0];
        for(int i = 1; i < n; i++)
        {
            if (max_temp < ar[i]) {
                max_temp = ar[i];
            }
        }
        return max_temp;
    }

    double calmin(double ar[], int n)
    {
        double min_temp = ar[0];
        for(int i = 0; i < n; i++)
        {
            if(ar[i] < min_temp) {
                min_temp = ar[i];
            }
        }
        return min_temp;
    }

    Sales::Sales()
    {
        min=0;
        max=0;
        average=0;
        for( int i=0;i<QUARIERS;i++)
        {
            sales[i]=0;
        }
    }

    Sales::Sales(const double ar[], int n)
    {
        int times = n > QUARIERS? QUARIERS:n;
        for (int i = 0; i < times; i++)
        {
            sales[i] = ar[i];
        }
        average = calaverage(sales, n);
        max     = calmax(sales, n);
        min     = calmin(sales, n);
    }

    void Sales::setSales()
    {
       printf("请输入4个数字:\n");
       for(int i = 0; i < QUARIERS; i++)
       {
            cout<<"sales "<<i+1<<":";
            cin>>sales[i];
       }
       *this = Sales(sales, QUARIERS);
    }

    void Sales::showSales()const
    {
        for(int i = 0; i < QUARIERS ; i++)
        {
            printf("the sale[%d] = %f\n", i, sales[i]);
        }
        printf("The average value is %f, max and min is [%f, %f]\n",
        average, max, min);
    }
}
