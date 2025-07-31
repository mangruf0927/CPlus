#include <iostream>
#include "Q4_sales.h"

namespace SALES
{
    void SetSales(Sales & s, const double ar[], int n)
    {
        int num = n < QUARTERS ? n : QUARTERS;
        double sum = 0;

        for(int i = 0; i < num; i++)
        {
            s.sales[i] = ar[i];
            sum += s.sales[i];
        }

        double min = s.sales[0], max = s.sales[0];
        
        for(int i = 1; i < num; i++)
        {
            if(min > s.sales[i]) min = s.sales[i];
            if(max < s.sales[i]) max = s.sales[i];
        }

        s.max = max;
        s.min = min;
        s.average = sum / num;

        for(int i = num; i < QUARTERS; i++)
        {
            s.sales[i] = 0;
        }
    }

    void SetSales(Sales & s)
    {
        double sum = 0;

        for(int i = 0; i < QUARTERS; i++)
        {
            std::cout << i + 1 << "분기 sales 입력 : ";
            std::cin >> s.sales[i];
            sum += s.sales[i];
        }
        
        double min = s.sales[0], max = s.sales[0];
        
        for(int i = 1; i < QUARTERS; i++)
        {
            if(min > s.sales[i]) min = s.sales[i];
            if(max < s.sales[i]) max = s.sales[i];
        }

        s.max = max;
        s.min = min;
        s.average = sum / QUARTERS;
    }

    void showSales(const Sales & s)
    {
        std::cout << "sales : ";

        for(int i = 0; i < QUARTERS; i++)
        {
            std::cout << s.sales[i] << " ";
        }

        std::cout << "\n평균값 : " << s.average << ", 최대값 : " << s.max << ", 최소값 : " << s.min << std::endl;
    }
}
