#include "userwindow.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>

UserWindow::UserWindow(int acc, QWidget *parent)
    : QMainWindow(parent), accNo(acc) {

    QWidget *w = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout;

    balanceLabel = new QLabel;
    amountInput = new QLineEdit;

    QPushButton *dep = new QPushButton("Deposit");
    QPushButton *wit = new QPushButton("Withdraw");

    layout->addWidget(balanceLabel);
    layout->addWidget(amountInput);
    layout->addWidget(dep);
    layout->addWidget(wit);

    connect(dep, &QPushButton::clicked, this, &UserWindow::depositMoney);
    connect(wit, &QPushButton::clicked, this, &UserWindow::withdrawMoney);

    w->setLayout(layout);
    setCentralWidget(w);

    updateBalance();
}

void UserWindow::updateBalance() {
    balanceLabel->setText("Balance: ₹" + QString::number(bank.getBalance(accNo)));
}

void UserWindow::depositMoney() {
    double amt = amountInput->text().toDouble();
    bank.deposit(accNo, amt);
    updateBalance();
}

void UserWindow::withdrawMoney() {
    double amt = amountInput->text().toDouble();

    if (!bank.withdraw(accNo, amt)) {
        QMessageBox::warning(this, "Error", "Insufficient Balance");
        return;
    }

    updateBalance();
}