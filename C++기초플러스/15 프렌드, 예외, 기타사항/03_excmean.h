#include <iostream>
#include <stdexcept>
#include <string>

class bad_mean : public std::logic_error
{
private:
    double v1;
    double v2;
    std::string funcName;
public:
    bad_mean(const std::string & func, double a, double b, const std::string & s)
        : funcName(func), v1(a), v2(b), std::logic_error(s) { }
    
    virtual void mesg() const;
};

void bad_mean::mesg() const
{
    std::cout << what() << "[" << funcName << "] (a=" << v1 << ", b=" << v2 << ")\n";
}


class bad_hmean : public bad_mean
{
public:
    bad_hmean(double a = 0, double b = 0)
        : bad_mean("hmean", a, b, "잘못된 매개변수 : a = -b\n") { }
};

class bad_gmean :  public bad_mean
{
public:
    bad_gmean(double a = 0, double b = 0) 
        : bad_mean("gmean", a, b, "잘못된 매개변수 : a = -b\n") {}
};
