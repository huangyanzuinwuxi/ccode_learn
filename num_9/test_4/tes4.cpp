
#include "sale.h"


int main()
{
    using namespace SALES;
    double salesList[]={12.2,11.16,10.61,16.24,11.53};
    Sales salesBook(salesList,
        sizeof(salesList)/sizeof(salesList[0]));
    salesBook.showSales();
    Sales salesPen;
    salesPen.setSales();
    salesPen.showSales();
    return 0;
}