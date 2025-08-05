#include "Q2_vect.h"
#include <cmath>
#include <iostream>

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    const double Rad_to_deg = 45.0 / atan(1.0);

    Vector::Vector()
    {
        x = y = 0.0;
        mode = RECT;
    }

    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if(form == RECT)
        {
            x = n1;
            y = n2;
        }
        else if(form == POL)
        {
            x = n1 * cos(n2);
            y = n1 * sin(n2);
        }
        else
        {
            cout << "Vector()에 전달된 제 3의 매개변수가 잘못되었다.\n";
            cout << "그래서 벡터를 0으로 설정하였다.\n";
            x = y = 0.0;
            mode = RECT;
        }
    }

    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if(form == RECT)
        {
            x = n1;
            y = n2;
        }
        else if(form == POL)
        {
            x = n1 * cos(n2);
            y = n1 * sin(n2);
        }
        else
        {
            cout << "Vector()에 전달된 제 3의 매개변수가 잘못되었다.\n";
            cout << "그래서 벡터를 0으로 설정하였다.\n";
            x = y = 0.0;
            mode = RECT;
        }
    }

    Vector::~Vector()
    {
    }

    double Vector::magval() const
    {
        return sqrt(x * x + y * y);
    }

    double Vector::angval() const
    {
        if(x == 0.0 && y == 0.0) return 0.0;
        else return atan2(y, x);
    }

    void Vector::polar_mode()
    {
        mode = POL;
    }

    void Vector::rect_mode()
    {
        mode = RECT;
    }
    
    // 연산자 오버로딩
    Vector Vector::operator+(const Vector & b) const
    {
        return Vector(x + b.x, y + b.y);                    // 생성자 사용하여 해결
    }

    Vector Vector::operator-(const Vector & b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }
    
    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }
    
    // 프렌드 함수
    Vector operator*(double n, const Vector & a)
    {
        return a * n;
    }
    
    std::ostream & operator<<(std::ostream & os, const Vector & v)
    {
        if(v.mode == Vector::RECT)
            os << "(x, y) = (" << v.x << ", " << v.y << ")\n";
        else if(v.mode == Vector::POL)
            os << "(m, a) = (" << v.magval() << ", " << v.angval() * Rad_to_deg << ")\n";
        else
            os << "Vector 객체의 모드 지정이 틀렸습니다.\n";
        
        return os;
    }   
}
