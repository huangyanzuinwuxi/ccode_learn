#include "bankaccount.h"
#include <iostream>
int main()
{
    BankAccount ba{"huangjiwu", "croak322", 1000.00};
    ba.show();
    ba.deposit(800);
    ba.show();
    ba.withdraw(2000);
    ba.show();

    return 0;
}



