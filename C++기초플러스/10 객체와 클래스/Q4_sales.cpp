#include <iostream>
#include "Q4_sales.h"

// Q4

namespace SALES
{
    Sales::Sales()
    {
        for(int i = 0; i < QUARTERS; i++)
            sales[i] = 0;
        average = max = min = 0;
    }

    Sales::Sales(const double ar[], int n)
    {
        int num = n < QUARTERS ? n : QUARTERS;
        double sum = 0;

        for(int i = 0; i < num; i++)
        {
            sales[i] = ar[i];
            sum += sales[i];
        }

        for(int i = num; i < QUARTERS; i++)
        {
            sales[i] = 0;
        }

        if(num > 0)
        {
            min = max = sales[0];
            for(int i = 1; i < num; i++)
            {
                if(min > sales[i]) min = sales[i];
                if(max < sales[i]) max = sales[i];
            }
            average = sum / num;
        }
        else average = min = max = 0;
    }

    void Sales::SetSales()
    {
        double arr[QUARTERS];

        for(int i = 0; i < QUARTERS; i++)
        {
            std::cout << i + 1 << "분기 sales 입력 : ";
            std::cin >> arr[i];
        }
        
        *this = Sales(arr, QUARTERS);
    }

    void Sales::ShowSales() const
    {
        std::cout << "sales : ";

        for(int i = 0; i < QUARTERS; i++)
        {
            std::cout << sales[i] << " ";
        }

        std::cout << "\n평균값 : " << average << ", 최대값 : " << max << ", 최소값 : " << min << std::endl;
    }
}
