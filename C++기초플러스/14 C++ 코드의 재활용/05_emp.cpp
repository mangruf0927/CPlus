#include "05_emp.h"
#include <iostream>

// abstr_emp
abstr_emp::~abstr_emp() { }

void abstr_emp::ShowAll() const
{
    std::cout << "이름 : " << fname << ", " << lname << std::endl;
    std::cout << "직업 : " << job << std::endl;
}

void abstr_emp::SetAll()
{
    std::cout << "이름과 성을 입력하십시오 : ";
    std::cin >> fname >> lname;
    std::cout << "직업을 입력하십시오 : ";
    std::cin >> job;
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
    os << e.fname << ", " << e.lname << "\n";
    return os;
}


// employee
void employee::ShowAll() const
{
    abstr_emp::ShowAll();
}

void employee::SetAll()
{
    abstr_emp::SetAll();
}


// manager
void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "abstr_emps 수 : " << InChargeOf() << std::endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "abstr_emps수를 입력하십시오 : ";
    std::cin >> inchargeof;
}

// fink
void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "보고 대상 : " << ReportsTo() << std::endl;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "보고 대상을 입력하십시오 : ";
    std::cin >> reportsto;
}

// highfink
void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "abstr_emps 수 : " << InChargeOf() << std::endl;
    std::cout << "보고 대상 : " << ReportsTo() << std::endl;
}

void highfink::SetAll()
{
    abstr_emp::SetAll();
    
    std::cout << "abstr_emps 수를 입력하십시오 : ";
    std::cin >> InChargeOf();

    std::cout << "보고 대상을 입력하십시오 : ";
    std::cin >> ReportsTo();
}
