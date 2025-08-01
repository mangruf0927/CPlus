#include "Q7_plorg.h"
#include <iostream>
#include <cstring>

Plorg::Plorg()
{
    strncpy(name, "Plorga", 19);
    name[19] = '\0';
    CI = 50;
}

Plorg::Plorg(const char* n)
{
    strncpy(name, n, 19);
    name[19] = '\0';
    CI = 50;
}

void Plorg::ResetCI(int index)
{
    CI = index;
}

void Plorg::ShowPlorg() const
{
    std::cout << "이름 : " << name << ", 만족 지수 : " << CI << std::endl;
}
