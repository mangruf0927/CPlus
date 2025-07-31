#include <iostream>
#include <cstring>
#include "Q1_golf.h"

// Q1

void setgolf(golf & g, const char * name, int hc)
{
    strncpy(g.fullname, name, Len - 1); 
    g.fullname[Len - 1] = '\0';   
    g.handicap = hc;
}

int setgolf(golf & g)
{
    std::cout << "이름을 입력하세요 : ";
    std::cin.getline(g.fullname, Len);

    if(g.fullname[0] == '\0') return 0;

    std::cout << "핸디캡을 입력하세요 : ";
    std::cin >> g.handicap;
    std::cin.ignore();
    
    return 1;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    std::cout << "이름 : " << g.fullname << ", 핸디캡 : " << g.handicap << std::endl;
}
