#include "loginwindow.h"
#include "userwindow.h"
#include "adminwindow.h"

#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include <QInputDialog>
#include <cstdlib>
#include <ctime>

QLineEdit *accInput, *pinInput, *otpInput;

LoginWindow::LoginWindow(QWidget *parent) : QMainWindow(parent) {

    QWidget *w = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout;

    accInput = new QLineEdit;
    accInput->setPlaceholderText("Account No");

    pinInput = new QLineEdit;
    pinInput->setPlaceholderText("PIN");

    QPushButton *loginBtn = new QPushButton("Generate OTP");

    otpInput = new QLineEdit;
    otpInput->setPlaceholderText("Enter OTP");

    QPushButton *verifyBtn = new QPushButton("Verify & Login");

    QPushButton *adminBtn = new QPushButton("Admin Panel");

    layout->addWidget(accInput);
    layout->addWidget(pinInput);
    layout->addWidget(loginBtn);
    layout->addWidget(otpInput);
    layout->addWidget(verifyBtn);
    layout->addWidget(adminBtn);

    connect(loginBtn, &QPushButton::clicked, this, &LoginWindow::on_loginBtn_clicked);
    connect(verifyBtn, &QPushButton::clicked, this, &LoginWindow::on_verifyOtpBtn_clicked);
    connect(adminBtn, &QPushButton::clicked, this, &LoginWindow::on_adminBtn_clicked);

    w->setLayout(layout);
    setCentralWidget(w);

    setWindowTitle("Login");
}

int LoginWindow::generateOTP() {
    srand(time(0));
    return 100000 + rand() % 900000;
}

void LoginWindow::on_loginBtn_clicked() {
    int acc = accInput->text().toInt();
    int pin = pinInput->text().toInt();

    if (!bank.checkAccount(acc, pin)) {
        QMessageBox::warning(this, "Error", "Invalid Login");
        return;
    }

    currentAcc = acc;
    currentOTP = generateOTP();

    QMessageBox::information(this, "OTP",
                             "Your OTP: " + QString::number(currentOTP));
}

void LoginWindow::on_verifyOtpBtn_clicked() {
    int entered = otpInput->text().toInt();

    if (entered == currentOTP) {
        UserWindow *user = new UserWindow(currentAcc);
        user->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Error", "Wrong OTP");
    }
}

void LoginWindow::on_adminBtn_clicked() {
    bool ok;
    QString pass = QInputDialog::getText(this, "Admin Login",
                                         "Enter Password:",
                                         QLineEdit::Password,
                                         "", &ok);

    if (ok && pass == "admin123") {
        AdminWindow *admin = new AdminWindow();
        admin->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Error", "Wrong Password");
    }
}