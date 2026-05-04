#ifndef BANK_H
#define BANK_H

#include <QString>

class Bank {
public:
    Bank();

    bool createAccount(int accNo, QString name, int pin, double balance);
    bool checkAccount(int accNo, int pin);

    double getBalance(int accNo);
    void deposit(int accNo, double amt);
    bool withdraw(int accNo, double amt);

    QString getAllAccounts();
    void applyInterest();
};

#endif