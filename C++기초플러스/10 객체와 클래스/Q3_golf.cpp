#include <iostream>
#include <cstring>
#include "Q3_golf.h"

// Q3

Golf::Golf()
{
    fullname[0] = '\0';
    handicap = 0;
}

Golf::Golf(const char * name, int hc)
{
    strncpy(fullname, name, Len - 1); 
    fullname[Len - 1] = '\0';   
    handicap = hc;
}

void Golf::SetGolf()
{
    char name[Len];
    int hc;

    std::cout << "이름을 입력하세요 : ";
    std::cin.getline(name, Len);
    while(name[0] == '\0')
    {
        std::cout << "공백 입력은 허용되지 않습니다. 다시 입력해주세요 : ";
        std::cin.getline(name, Len);
    }

    std::cout << "핸디캡을 입력하세요 : ";
    std::cin >> hc;
    std::cin.ignore();
    
    *this = Golf(name, hc);
}

void Golf::Handicap(int hc)
{
    handicap = hc;
}

void Golf::ShowGolf() const
{
    std::cout << "이름 : " << fullname << ", 핸디캡 : " << handicap << std::endl;
}
