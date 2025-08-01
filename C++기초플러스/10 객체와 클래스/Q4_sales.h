#ifndef SALES_H_
#define SALES_H_

// Q4

namespace SALES
{
    class Sales
    {
    private:
        const static int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales();
        Sales(const double ar[], int n);
        void SetSales();
        void ShowSales() const;
    };
}

#endif
