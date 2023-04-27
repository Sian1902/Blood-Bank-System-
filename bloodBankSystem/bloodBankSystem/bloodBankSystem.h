#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_bloodBankSystem.h"

class bloodBankSystem : public QMainWindow
{
    Q_OBJECT

public:
    bloodBankSystem(QWidget *parent = nullptr);
    ~bloodBankSystem();

private:
    Ui::bloodBankSystemClass ui;
};
