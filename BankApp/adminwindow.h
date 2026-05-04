#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include "bank.h"

class QTextEdit;

class AdminWindow : public QMainWindow {
    Q_OBJECT

public:
    AdminWindow(QWidget *parent = nullptr);

private slots:
    void loadData();
    void applyInterest();

private:
    Bank bank;
    QTextEdit *view;
};

#endif