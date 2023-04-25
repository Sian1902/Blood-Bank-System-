#pragma once

#include <QMainWindow>
#include "ui_recepientPage.h"

class recepientPage : public QMainWindow
{
	Q_OBJECT

public:
	recepientPage(QWidget *parent = nullptr);
	~recepientPage();

private:
	Ui::recepientPageClass ui;
};
