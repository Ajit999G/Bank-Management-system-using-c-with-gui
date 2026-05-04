#include "bank.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

Bank::Bank() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("bank.db");
    db.open();

    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS accounts("
               "accNo INTEGER PRIMARY KEY,"
               "name TEXT,"
               "pin INTEGER,"
               "balance REAL)");
}

bool Bank::createAccount(int accNo, QString name, int pin, double balance) {
    QSqlQuery query;
    query.prepare("INSERT INTO accounts VALUES (?, ?, ?, ?)");
    query.addBindValue(accNo);
    query.addBindValue(name);
    query.addBindValue(pin);
    query.addBindValue(balance);
    return query.exec();
}

bool Bank::checkAccount(int accNo, int pin) {
    QSqlQuery query;
    query.prepare("SELECT * FROM accounts WHERE accNo=? AND pin=?");
    query.addBindValue(accNo);
    query.addBindValue(pin);
    query.exec();
    return query.next();
}

double Bank::getBalance(int accNo) {
    QSqlQuery query;
    query.prepare("SELECT balance FROM accounts WHERE accNo=?");
    query.addBindValue(accNo);
    query.exec();
    if (query.next()) return query.value(0).toDouble();
    return 0;
}

void Bank::deposit(int accNo, double amt) {
    QSqlQuery q;
    q.prepare("UPDATE accounts SET balance = balance + ? WHERE accNo=?");
    q.addBindValue(amt);
    q.addBindValue(accNo);
    q.exec();
}

bool Bank::withdraw(int accNo, double amt) {
    double bal = getBalance(accNo);
    if (amt > bal) return false;

    QSqlQuery q;
    q.prepare("UPDATE accounts SET balance = balance - ? WHERE accNo=?");
    q.addBindValue(amt);
    q.addBindValue(accNo);
    return q.exec();
}

QString Bank::getAllAccounts() {
    QSqlQuery q("SELECT * FROM accounts");
    QString data;

    while (q.next()) {
        data += "Acc: " + q.value(0).toString() +
                " | Name: " + q.value(1).toString() +
                " | Balance: ₹" + q.value(3).toString() + "\n";
    }
    return data;
}

void Bank::applyInterest() {
    QSqlQuery q;
    q.exec("UPDATE accounts SET balance = balance * 1.05");
}