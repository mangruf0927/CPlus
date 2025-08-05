#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>

class Complex
{
private:
    double real;            // 실수부
    double imaginary;       // 허수부
public:
    Complex();
    Complex(double real, double imaginary);
    ~Complex();

    Complex operator+(const Complex & c) const;
    Complex operator-(const Complex & c) const;
    Complex operator*(const Complex & c) const;
    Complex operator*(double n) const;
    Complex operator~() const;
    
    friend Complex operator*(double n, const Complex & c) {return c * n;}
    friend std::ostream & operator<<(std::ostream & os, const Complex & c);
    friend std::istream & operator>>(std::istream & is, Complex & c);
};

#endif
