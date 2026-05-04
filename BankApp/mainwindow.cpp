#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <cstdlib>
#include <ctime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

// OTP
int MainWindow::generateOTP() {
    srand(time(0));
    return 100000 + rand() % 900000;
}

// CREATE ACCOUNT
void MainWindow::on_createBtn_clicked() {
    int acc = ui->accCreate->text().toInt();
    QString name = ui->nameCreate->text();
    int pin = ui->pinCreate->text().toInt();
    double bal = ui->balCreate->text().toDouble();

    if (bank.createAccount(acc, name, pin, bal))
        QMessageBox::information(this, "Success", "Account Created!");
    else
        QMessageBox::warning(this, "Error", "Failed!");
}

// LOGIN → OTP
void MainWindow::on_loginBtn_clicked() {
    int acc = ui->accLogin->text().toInt();
    int pin = ui->pinLogin->text().toInt();

    if (!bank.checkAccount(acc, pin)) {
        QMessageBox::warning(this, "Error", "Invalid login");
        return;
    }

    currentAcc = acc;
    currentOTP = generateOTP();

    QMessageBox::information(this, "OTP",
                             "Your OTP: " + QString::number(currentOTP));
}

// VERIFY OTP
void MainWindow::on_verifyOtpBtn_clicked() {
    int entered = ui->otpInput->text().toInt();

    if (entered == currentOTP) {
        QMessageBox::information(this, "Success", "Login Successful!");
        ui->balanceLabel->setText(
            "Balance: ₹" + QString::number(bank.getBalance(currentAcc)));
    } else {
        QMessageBox::warning(this, "Error", "Wrong OTP");
    }
}

// DEPOSIT
void MainWindow::on_depositBtn_clicked() {
    double amt = ui->amountInput->text().toDouble();
    bank.deposit(currentAcc, amt);

    ui->balanceLabel->setText(
        "Balance: ₹" + QString::number(bank.getBalance(currentAcc)));
}

// WITHDRAW
void MainWindow::on_withdrawBtn_clicked() {
    double amt = ui->amountInput->text().toDouble();

    if (!bank.withdraw(currentAcc, amt)) {
        QMessageBox::warning(this, "Error", "Insufficient Balance");
        return;
    }

    ui->balanceLabel->setText(
        "Balance: ₹" + QString::number(bank.getBalance(currentAcc)));
}

// ADMIN
void MainWindow::on_adminBtn_clicked() {
    QString data = bank.getAllAccounts();
    QMessageBox::information(this, "All Accounts", data);
}