#include <iostream>
#include "Q6_stonewt.h"

using std::cout;

Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{
}

Stonewt::operator int() const
{
    return int (pounds + 0.5);
}

Stonewt::operator double() const
{
    return pounds;
}

bool Stonewt::operator>(const Stonewt & st) const
{
    return pounds > st.pounds;
}

bool Stonewt::operator<(const Stonewt & st) const
{
    return pounds < st.pounds;
}

bool Stonewt::operator==(const Stonewt & st) const
{
    return pounds == st.pounds;  
}

bool Stonewt::operator!=(const Stonewt & st) const
{
    return pounds != st.pounds;  
}

bool Stonewt::operator>=(const Stonewt & st) const
{
    return pounds >= st.pounds;  
}

bool Stonewt::operator<=(const Stonewt & st) const
{
    return pounds <= st.pounds;  
}

std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
    os << st.stone << "스톤, " << st.pds_left << "파운드\n";

    return os;
}
