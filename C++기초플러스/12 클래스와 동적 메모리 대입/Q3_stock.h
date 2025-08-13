#ifndef STOCK3_H_
#define STOCK3_H_

#include <iostream>

class Stock
{
private:
	char * company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();
    Stock(const char * co, long n, double pr);
    Stock(const Stock & st);              // 복사 생성자
    ~Stock();

	void acquire(const char * co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    const Stock & topval(const Stock & s) const;

    Stock & operator=(const Stock & st);  // 대입 연산자
    friend std::ostream & operator<<(std::ostream & os, const Stock & s);
};	

#endif
