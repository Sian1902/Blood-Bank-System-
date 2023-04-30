#pragma once

#include <QMainWindow>
#include "ui_recipientPage.h"
#include "bloodRequestPage.h"
#include<Qlabel>
class recipientPage : public QMainWindow
{
	Q_OBJECT

public:
	recipientPage(QWidget *parent = nullptr);
	~recipientPage();

private slots:
	void on_requestBloodBtn_clicked();
private:
	Ui::recipientPageClass ui;
	bloodRequestPage* p;
	
};

