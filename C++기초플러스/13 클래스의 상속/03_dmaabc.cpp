#include "03_dmaabc.h"
#include <cstring>
#include <iostream>

using std::cout;

// baseDMA
baseDMA::baseDMA(const char * l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

baseDMA::baseDMA(const baseDMA & rs)
{
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

baseDMA::~baseDMA()
{
    delete [] label;
}

void baseDMA::View() const
{
    cout << "[baseDMA]\nlabel = " << label << ", rating = " << rating << std::endl; 
}

baseDMA & baseDMA::operator=(const baseDMA & rs)
{
    if(this == &rs) return *this;
    delete [] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

// lacksDMA
lacksDMA::lacksDMA(const char * c)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

void lacksDMA::View() const
{
    cout << "[lacksDMA]\ncolor = " << color << std::endl; 
}

// hasDMA
hasDMA::hasDMA(const char * s)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs)
{
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & rs)
{
    if(this == &rs) return *this;
    delete [] style;
    style = new char[std::strlen(rs.style) + 1];
    std::strcpy(style, rs.style);
    return *this;
}

void hasDMA::View() const
{
    cout << "[hasDMA]\nstyle = " << style << std::endl; 
}

