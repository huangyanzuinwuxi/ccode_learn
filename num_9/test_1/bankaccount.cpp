#include "bankaccount.h"

BankAccount::BankAccount(const std::string&client,
        const std:: string &num, double bal)
{
    name    = client;
    acctnum = num;
    balance = bal;
}

void BankAccount::show()const
{
    printf("%s's account %s has balance %f\n",
        name.c_str(), acctnum.c_str(), balance);
}

void BankAccount::deposit(double cash)
{
    balance += cash;
}

void BankAccount::withdraw(double cash)
{
    if (cash > balance) {
        printf("很抱歉，你的索取金额超过余额\n");
    } else {
        balance = balance - cash;
    }
}

