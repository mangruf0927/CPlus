#ifndef SALES_H_
#define SALES_H_

// Q4

namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void SetSales(Sales & s, const double ar[], int n);
    void SetSales(Sales & s);
    void showSales(const Sales & s);
}

#endif
