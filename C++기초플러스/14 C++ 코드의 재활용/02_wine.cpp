#include "02_wine.h"

#include <iostream>
#include <string>

// Wine
void Wine::GetBottles()
{
    int yr = this->first().size();

    std::cout << yr << "년 간의 " << Label() << " 데이터를 입력하시오 : \n";
    for(int i = 0; i < yr; i++)
    {
        std::cout << "년도를 입력하시오 : ";
        std::cin >> this->first()[i];
        std::cout << "수량을 입력하시오 : ";
        std::cin >> this->second()[i];
    }
}

void Wine::Show() const
{
    int yr = this->first().size();

    std::cout << "와인 : " << Label() << std::endl;
    std::cout << "\t년도\t수량\n";
    for(int i = 0; i < yr; i++)
    {
        std::cout << "\t" << this->first()[i] << "\t" << this->second()[i] << std::endl;
    }
}

std::string & Wine::Label()
{
    return (std::string &) *this;
}

const std::string & Wine::Label() const
{
    return (const std::string &) *this;
}

int Wine::Sum() const
{
    return this->second().sum();
}
