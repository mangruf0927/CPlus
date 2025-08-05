#include "Q5_stonewt.h"
#include <iostream>

using std::cout;

Stonewt::Stonewt(double lbs, Form f)
{
    stone = (int) lbs / Lbs_per_stn;
    pds_left = lbs - stone * Lbs_per_stn;
    pounds = lbs;
    form = f;
}

Stonewt::Stonewt(int stn, double lbs, Form f)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    form = f;
}

Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
    form = STONE;
}

Stonewt::~Stonewt()
{
}

void Stonewt::setForm(Form f)
{
    form = f;
}

Stonewt::operator int() const
{
    return int (pounds + 0.5);
}

Stonewt::operator double() const
{
    return pounds;
}

Stonewt Stonewt::operator+(const Stonewt & st) const
{
    return Stonewt(pounds + st.pounds, form);
}

Stonewt Stonewt::operator-(const Stonewt & st) const
{
    return Stonewt(pounds - st.pounds, form);
}

Stonewt Stonewt::operator*(double m) const
{
    return Stonewt(pounds * m, form);
}

std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{   
    if(st.form == Stonewt::STONE)
        os << st.stone << "스톤, " << st.pds_left << "파운드\n";
    else if(st.form == Stonewt::POUND)
        os << int (st.pounds + 0.5) << "파운드\n";
    else if(st.form == Stonewt::FLOATPOUND)
        os << st.pounds << "파운드\n";
    else
        os << "Stonewt 형식 지정이 틀렸습니다.\n";
    
    return os;
}
