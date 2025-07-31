#include<iostream>
#include<cstring>

#include "Q1_account.h"

// Q1

BankAccount::BankAccount()
{
    strncpy(name, "no name", 39);
    name[39] = '\0';
    strncpy(accountnumber, "0", 24);
    accountnumber[24] = '\0';
    balance = 0.0;
}

BankAccount::BankAccount(const char * client, const char * num, double bal)
{
    strcpy(name, client);
    strcpy(accountnumber, num);
    balance = bal;
}

void BankAccount::Show() const
{
    std::cout << "이름 : " << name << ", 계좌번호 : " << accountnumber << ", 잔액 : " << balance << std::endl;
}

void BankAccount::Deposit(double cash)
{
    balance += cash;
}

void BankAccount::Withdraw(double cash)
{
    if(balance - cash < 0) std::cout << "잔액이 부족합니다.\n";
    else balance -= cash;
}
