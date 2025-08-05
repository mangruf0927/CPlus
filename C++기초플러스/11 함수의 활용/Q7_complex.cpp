#include "Q7_complex.h"
#include <iostream>

Complex::Complex()
{
    real = imaginary = 0;
}

Complex::Complex(double r, double i)
{
    real = r;
    imaginary = i;
}

Complex::~Complex()
{
}

Complex Complex::operator+(const Complex & c) const
{
    return Complex(real + c.real, imaginary + c.imaginary);
}

Complex Complex::operator-(const Complex & c) const
{
    return Complex(real - c.real, imaginary - c.imaginary);
}

Complex Complex::operator*(const Complex & c) const
{
    return Complex(real * c.real - imaginary * c.imaginary,
                   real * c.imaginary + imaginary * c.real);
}

Complex Complex::operator*(double n) const
{
    return Complex(real * n, imaginary * n);
}

Complex Complex::operator~() const
{
    return Complex(real, imaginary * -1);
}

std::ostream & operator<<(std::ostream & os, const Complex & c)
{
    os << "(" << c.real << ", " << c.imaginary << "i)";

    return os;
}

std::istream & operator>>(std::istream & is, Complex & c)
{
    std::cout << "실수부 : ";
    is >> c.real;
    std::cout << "허수부 : ";
    is >> c.imaginary;
    
    return is;
}
