#include "adminwindow.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QTextEdit>

AdminWindow::AdminWindow(QWidget *parent) : QMainWindow(parent) {

    QWidget *w = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout;

    view = new QTextEdit;

    QPushButton *load = new QPushButton("View Accounts");
    QPushButton *interest = new QPushButton("Apply Interest");

    layout->addWidget(view);
    layout->addWidget(load);
    layout->addWidget(interest);

    connect(load, &QPushButton::clicked, this, &AdminWindow::loadData);
    connect(interest, &QPushButton::clicked, this, &AdminWindow::applyInterest);

    w->setLayout(layout);
    setCentralWidget(w);
}

void AdminWindow::loadData() {
    view->setText(bank.getAllAccounts());
}

void AdminWindow::applyInterest() {
    bank.applyInterest();
    loadData();
}