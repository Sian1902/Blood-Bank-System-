#pragma once

#include <QMainWindow>
#include "ui_signUp.h"

class signUp : public QMainWindow
{
	Q_OBJECT

public:
	signUp(QWidget *parent = nullptr);
	~signUp();

private:
	Ui::signUpClass ui;
};
