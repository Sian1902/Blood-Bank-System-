#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_bloodbankvidualstudio.h"

class bloodbankvidualstudio : public QMainWindow
{
    Q_OBJECT

public:
    bloodbankvidualstudio(QWidget *parent = nullptr);
    ~bloodbankvidualstudio();

private:
    Ui::bloodbankvidualstudioClass ui;
};
