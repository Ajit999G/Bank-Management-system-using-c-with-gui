#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bank.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_createBtn_clicked();
    void on_loginBtn_clicked();
    void on_verifyOtpBtn_clicked();
    void on_depositBtn_clicked();
    void on_withdrawBtn_clicked();
    void on_adminBtn_clicked();

private:
    Ui::MainWindow *ui;
    Bank bank;

    int currentOTP = 0;
    int currentAcc = 0;

    int generateOTP();
};

#endif