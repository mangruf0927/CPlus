#include "02_classic.h"
#include <iostream>
#include <cstring>

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    performers = new char[std::strlen(s1) + 1];
    label = new char[std::strlen(s2) + 1];
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    performers = new char[std::strlen(d.performers) + 1];
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    const char * n = "";
    performers = new char[std::strlen(n) + 1];
    label      = new char[std::strlen(n) + 1];
    std::strcpy(performers, n);
    std::strcpy(label, n);
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] label;
}

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
    if(this == & d) return *this;

    delete [] performers;
    delete [] label;

    performers = new char[std::strlen(d.performers) + 1];
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;

    return * this;
}

Classic::Classic( const char * s, const char * s1, const char * s2, int n, double x)
: Cd(s1, s2, n, x)
{
    song = new char[std::strlen(s) + 1];
    std::strcpy(song, s);
}

Classic::Classic(const Classic & c) : Cd(c)
{
    song = new char[std::strlen(c.song) + 1];
    std::strcpy(song, c.song);
}

Classic::Classic() : Cd()
{
    const char* nul = "";
    song = new char[std::strlen(nul) + 1];
    std::strcpy(song, nul);
}

Classic::~Classic() 
{ 
    delete [] song;
}

void Classic::Report() const
{
    using std::cout;
    using std::endl;

    std::cout << "대표곡 : " << song << std::endl;
    Cd::Report(); 
}

Classic & Classic::operator=(const Classic & c)
{
    if (this == &c) return *this;

    delete [] song;

    Cd::operator=(c);   
    song = new char[std::strlen(c.song) + 1];           
    std::strcpy(song, c.song);

    return *this; 
}
