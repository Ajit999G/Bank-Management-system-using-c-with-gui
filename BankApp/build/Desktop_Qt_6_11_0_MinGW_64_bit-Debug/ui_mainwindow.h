/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QGroupBox *createBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *accCreate;
    QLabel *label1;
    QLineEdit *nameCreate;
    QLabel *label2;
    QLineEdit *pinCreate;
    QLabel *label3;
    QLineEdit *balCreate;
    QPushButton *createBtn;
    QGroupBox *loginBox;
    QFormLayout *formLayout1;
    QLabel *label4;
    QLineEdit *accLogin;
    QLabel *label5;
    QLineEdit *pinLogin;
    QPushButton *loginBtn;
    QLabel *label6;
    QLineEdit *otpInput;
    QPushButton *verifyOtpBtn;
    QGroupBox *dashboardBox;
    QVBoxLayout *vboxLayout1;
    QLabel *balanceLabel;
    QLineEdit *amountInput;
    QHBoxLayout *hboxLayout;
    QPushButton *depositBtn;
    QPushButton *withdrawBtn;
    QPushButton *adminBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 674);
        MainWindow->setStyleSheet(QString::fromUtf8("/* GLOBAL */\n"
"QWidget {\n"
"    background-color: #0f172a;\n"
"    color: #e2e8f0;\n"
"    font-family: 'Segoe UI';\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* LEFT PANEL */\n"
"QFrame#leftPanel {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 #3b82f6,\n"
"        stop:1 #9333ea\n"
"    );\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QLabel#appTitle {\n"
"    font-size: 32px;\n"
"    font-weight: bold;\n"
"    color: white;\n"
"}\n"
"\n"
"QLabel#tagline {\n"
"    font-size: 14px;\n"
"    color: #e0e7ff;\n"
"}\n"
"\n"
"/* LOGIN CARD */\n"
"QFrame#loginCard {\n"
"    background-color: #1e293b;\n"
"    border-radius: 20px;\n"
"    padding: 25px;\n"
"}\n"
"\n"
"/* TITLE */\n"
"QLabel#loginTitle {\n"
"    font-size: 22px;\n"
"    font-weight: bold;\n"
"    margin-bottom: 10px;\n"
"}\n"
"\n"
"/* INPUTS */\n"
"QLineEdit {\n"
"    background-color: #0f172a;\n"
"    border: 2px solid #334155;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QLineEdit:focus"
                        " {\n"
"    border: 2px solid #3b82f6;\n"
"}\n"
"\n"
"/* BUTTONS */\n"
"QPushButton {\n"
"    background-color: #3b82f6;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2563eb;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1d4ed8;\n"
"}\n"
"\n"
"/* ADMIN BUTTON SPECIAL */\n"
"QPushButton#adminBtn {\n"
"    background-color: #9333ea;\n"
"}\n"
"\n"
"QPushButton#adminBtn:hover {\n"
"    background-color: #7e22ce;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName("vboxLayout");
        createBox = new QGroupBox(centralwidget);
        createBox->setObjectName("createBox");
        formLayout = new QFormLayout(createBox);
        formLayout->setObjectName("formLayout");
        label = new QLabel(createBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        accCreate = new QLineEdit(createBox);
        accCreate->setObjectName("accCreate");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, accCreate);

        label1 = new QLabel(createBox);
        label1->setObjectName("label1");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label1);

        nameCreate = new QLineEdit(createBox);
        nameCreate->setObjectName("nameCreate");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, nameCreate);

        label2 = new QLabel(createBox);
        label2->setObjectName("label2");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label2);

        pinCreate = new QLineEdit(createBox);
        pinCreate->setObjectName("pinCreate");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, pinCreate);

        label3 = new QLabel(createBox);
        label3->setObjectName("label3");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label3);

        balCreate = new QLineEdit(createBox);
        balCreate->setObjectName("balCreate");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, balCreate);

        createBtn = new QPushButton(createBox);
        createBtn->setObjectName("createBtn");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, createBtn);


        vboxLayout->addWidget(createBox);

        loginBox = new QGroupBox(centralwidget);
        loginBox->setObjectName("loginBox");
        formLayout1 = new QFormLayout(loginBox);
        formLayout1->setObjectName("formLayout1");
        label4 = new QLabel(loginBox);
        label4->setObjectName("label4");

        formLayout1->setWidget(0, QFormLayout::ItemRole::LabelRole, label4);

        accLogin = new QLineEdit(loginBox);
        accLogin->setObjectName("accLogin");

        formLayout1->setWidget(0, QFormLayout::ItemRole::FieldRole, accLogin);

        label5 = new QLabel(loginBox);
        label5->setObjectName("label5");

        formLayout1->setWidget(1, QFormLayout::ItemRole::LabelRole, label5);

        pinLogin = new QLineEdit(loginBox);
        pinLogin->setObjectName("pinLogin");

        formLayout1->setWidget(1, QFormLayout::ItemRole::FieldRole, pinLogin);

        loginBtn = new QPushButton(loginBox);
        loginBtn->setObjectName("loginBtn");

        formLayout1->setWidget(2, QFormLayout::ItemRole::FieldRole, loginBtn);

        label6 = new QLabel(loginBox);
        label6->setObjectName("label6");

        formLayout1->setWidget(3, QFormLayout::ItemRole::LabelRole, label6);

        otpInput = new QLineEdit(loginBox);
        otpInput->setObjectName("otpInput");

        formLayout1->setWidget(3, QFormLayout::ItemRole::FieldRole, otpInput);

        verifyOtpBtn = new QPushButton(loginBox);
        verifyOtpBtn->setObjectName("verifyOtpBtn");

        formLayout1->setWidget(4, QFormLayout::ItemRole::FieldRole, verifyOtpBtn);


        vboxLayout->addWidget(loginBox);

        dashboardBox = new QGroupBox(centralwidget);
        dashboardBox->setObjectName("dashboardBox");
        vboxLayout1 = new QVBoxLayout(dashboardBox);
        vboxLayout1->setObjectName("vboxLayout1");
        balanceLabel = new QLabel(dashboardBox);
        balanceLabel->setObjectName("balanceLabel");

        vboxLayout1->addWidget(balanceLabel);

        amountInput = new QLineEdit(dashboardBox);
        amountInput->setObjectName("amountInput");

        vboxLayout1->addWidget(amountInput);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        depositBtn = new QPushButton(dashboardBox);
        depositBtn->setObjectName("depositBtn");

        hboxLayout->addWidget(depositBtn);

        withdrawBtn = new QPushButton(dashboardBox);
        withdrawBtn->setObjectName("withdrawBtn");

        hboxLayout->addWidget(withdrawBtn);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addWidget(dashboardBox);

        adminBtn = new QPushButton(centralwidget);
        adminBtn->setObjectName("adminBtn");

        vboxLayout->addWidget(adminBtn);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Bank App", nullptr));
        createBox->setTitle(QCoreApplication::translate("MainWindow", "Create Account", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Acc No", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label2->setText(QCoreApplication::translate("MainWindow", "PIN", nullptr));
        label3->setText(QCoreApplication::translate("MainWindow", "Balance", nullptr));
        createBtn->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        loginBox->setTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label4->setText(QCoreApplication::translate("MainWindow", "Acc No", nullptr));
        label5->setText(QCoreApplication::translate("MainWindow", "PIN", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label6->setText(QCoreApplication::translate("MainWindow", "OTP", nullptr));
        verifyOtpBtn->setText(QCoreApplication::translate("MainWindow", "Verify OTP", nullptr));
        dashboardBox->setTitle(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        balanceLabel->setText(QCoreApplication::translate("MainWindow", "Balance: \342\202\2710", nullptr));
        amountInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Amount", nullptr));
        depositBtn->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
        withdrawBtn->setText(QCoreApplication::translate("MainWindow", "Withdraw", nullptr));
        adminBtn->setText(QCoreApplication::translate("MainWindow", "Admin Panel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
