#ifndef STONEWT2_H_
#define STONEWT2_H_

#include <iostream>

class Stonewt
{
public:
    enum Form {STONE, POUND, FLOATPOUND};
private:
    enum {Lbs_per_stn = 14};
    
    int stone;
    double pds_left;
    double pounds;
    Form form; 
public:
    Stonewt(double lbs, Form form = FLOATPOUND);
    Stonewt(int stn, double lbs, Form form = STONE);
    Stonewt();
    ~Stonewt();

    void setForm(Form f);

    operator int() const;
    operator double() const;

    Stonewt operator+(const Stonewt & st) const;
    Stonewt operator-(const Stonewt & st) const;
    Stonewt operator*(double m) const;

    friend Stonewt operator*(double m, const Stonewt & st) {return st * m;}
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
};

#endif
