#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>
#include "bank.h"

class QLabel;
class QLineEdit;

class UserWindow : public QMainWindow {
    Q_OBJECT

public:
    UserWindow(int acc, QWidget *parent = nullptr);

private slots:
    void depositMoney();
    void withdrawMoney();

private:
    Bank bank;
    int accNo;

    QLabel *balanceLabel;
    QLineEdit *amountInput;

    void updateBalance();
};

#endif