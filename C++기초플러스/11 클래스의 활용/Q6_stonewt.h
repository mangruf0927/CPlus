#ifndef STONEWT3_H_
#define STONEWT3_H_

class Stonewt
{
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();

    operator int() const;
    operator double() const;

    bool operator>(const Stonewt & st) const;
    bool operator<(const Stonewt & st) const;
    bool operator==(const Stonewt & st) const;
    bool operator!=(const Stonewt & st) const;
    bool operator>=(const Stonewt & st) const;
    bool operator<=(const Stonewt & st) const;

    friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
};

#endif
