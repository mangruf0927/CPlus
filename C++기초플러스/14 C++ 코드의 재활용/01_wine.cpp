#include "01_wine.h"

#include <iostream>
#include <string>

// Pair
template<class T1, class T2>
T1 & Pair<T1, T2>::first()
{
    return a;
}

template<class T1, class T2>
T2 & Pair<T1, T2>::second()
{
    return b;
}

// Wine
void Wine::GetBottles()
{
    int yr = data.first().size();

    std::cout << yr << "년 간의 " << name << "데이터를 입력하시오 : \n";
    for(int i = 0; i < yr; i++)
    {
        std::cout << "년도를 입력하시오 : ";
        std::cin >> data.first()[i];
        std::cout << "수량을 입력하시오 : ";
        std::cin >> data.second()[i];
    }
}

void Wine::Show() const
{
    std::cout << "와인 : " << name << std::endl;
    std::cout << "\t년도\t수량\n";
    for(int i = 0; i < data.first().size(); i++)
    {
        std::cout << "\t" << data.first()[i] << "\t" << data.second()[i] << std::endl;
    }
}

std::string & Wine::Label()
{
    return name;
}

int Wine::Sum() const
{
    return data.second().sum();
}
