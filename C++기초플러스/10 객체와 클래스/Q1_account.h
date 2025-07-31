#ifndef ACCOUNT_H_
#define ACCOUNT_H_

// Q1

class BankAccount
{
private:
    char name[40];
    char accountnumber[25];
    double balance;
public:
    BankAccount();
    BankAccount(const char * client, const char * num, double bal = 0.0);
    void Show() const;
    void Deposit(double cash);
    void Withdraw(double cash);
};

#endif
