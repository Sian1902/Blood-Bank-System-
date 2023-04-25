#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_bloodBank.h"

class bloodBank : public QMainWindow
{
    Q_OBJECT

public:
    bloodBank(QWidget *parent = nullptr);
    ~bloodBank();

private:
    Ui::bloodBankClass ui;
};
