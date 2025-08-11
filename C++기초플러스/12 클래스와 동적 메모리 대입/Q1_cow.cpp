#include "Q1_cow.h"
#include <iostream>
#include <cstring>

Cow::Cow()
{
    name[0] = '\0';
    hobby = new char[1];
    hobby[0] = '\0'; 
    weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    std::strncpy(name, nm, 19);
    name[19] = '\0';
    hobby = new char[std::strlen(ho) + 1];
    std::strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & c)
{
    std::strncpy(name, c.name, 19);
    name[19] = '\0';
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}


Cow & Cow::operator=(const Cow & c)
{
    if(this == & c) return *this;

    delete [] hobby;
    std::strncpy(name, c.name, 19);
    name[19] = '\0';
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
    return * this;
}

void Cow::ShowCow() const
{
    std::cout << "name : " << name << "\nhobby : " << hobby << "\nweight : " << weight << std::endl;
}

Cow::~Cow()
{
    delete [] hobby;
}
