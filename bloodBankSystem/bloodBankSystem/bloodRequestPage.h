#pragma once

#include <QMainWindow>
#include<iostream>
#include "ui_bloodRequestPage.h"
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class bloodRequestPage; }
QT_END_NAMESPACE

class bloodRequestPage : public QMainWindow
{
	Q_OBJECT

public:
	bloodRequestPage(QWidget *parent = nullptr);
	~bloodRequestPage();
private slots:
	void on_requestBtn_clicked();

private:
	Ui::bloodRequestPageClass *ui;
};
