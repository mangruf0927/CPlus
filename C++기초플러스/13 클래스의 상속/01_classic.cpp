#include "01_classic.h"
#include <iostream>
#include <cstring>

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd() { }

void Cd::Report() const
{
    using std::cout;
    using std::endl;

    cout << "Performers : " << performers << endl;
    cout << "label : " << label << endl;
    cout << "곡목 수 : " << selections << ", 연주 시간 : " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;

    return * this;
}

Classic::Classic( const char * s, const char * s1, const char * s2, int n, double x)
: Cd(s1, s2, n, x)
{
    strcpy(song, s);
}

Classic::Classic(const Classic & c) : Cd(c)
{
    strcpy(song, c.song);
}

Classic::Classic() : Cd()
{
    song[0] = '\0';
}

Classic::~Classic() { }

void Classic::Report() const
{
    using std::cout;
    using std::endl;

    std::cout << "대표곡 : " << song << std::endl;
    Cd::Report(); 
}

Classic & Classic::operator=(const Classic & c)
{
    if (this != &c)
    {
        Cd::operator=(c);              
        strcpy(song, c.song);
    }
    return *this; 
}
