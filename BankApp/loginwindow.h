#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "bank.h"

class LoginWindow : public QMainWindow {
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);

private slots:
    void on_loginBtn_clicked();
    void on_verifyOtpBtn_clicked();
    void on_adminBtn_clicked();

private:
    Bank bank;
    int currentOTP;
    int currentAcc;

    int generateOTP();
};

#endif