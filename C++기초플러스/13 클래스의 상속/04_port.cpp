#include "04_port.h"
#include <iostream>
#include <cstring>

// Port
Port::Port(const char * br, const char * st, int b)
{
    brand = new char[std::strlen(br) + 1];
    strcpy(brand, br);
    strncpy(style, st, 19);
    style[19] = '\0';
    bottles = b;
}

Port::Port(const Port & p)
{
    brand = new char[std::strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port & Port::operator=(const Port & p)
{
    if(this == &p) return *this;
    delete [] brand;
    brand = new char[std::strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port & Port::operator+=(int b)
{
    if (b > 0) bottles += b;
    return *this;
}

Port & Port::operator-=(int b)
{
    if (b > 0 && bottles >= b) bottles -= b; 
    return *this;
}         

void Port::Show() const
{
    std::cout << "브랜드: " << brand << "\n스타일: " << style << "\n수량: " << bottles << std::endl;
}

ostream & operator<<(ostream & os, const Port & p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}


// VintagePort
VintagePort::VintagePort() : Port("none", "vintage", 0)
{
    nickname = new char[5];
    std::strcpy(nickname, "none");
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y)
    : Port(br, "vintage", b)
{
    nickname = new char[std::strlen(nn) + 1];
    std::strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp)
{
    nickname = new char[std::strlen(vp.nickname) + 1];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
    if(this == & vp) return *this;
    delete [] nickname;
    nickname = new char[std::strlen(vp.nickname) + 1];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    std::cout << "닉네임: " << nickname << "\n연도 : " << year << endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp)
{
    os << (const Port &) vp;
    os << vp.nickname << ", " << vp.year;

    return os;
}
