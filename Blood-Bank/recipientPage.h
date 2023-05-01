#pragma once

#include <QMainWindow>
#include "ui_recipientPage.h"
//#include "bloodRequestPage.h"
#include "bloodBankClass.h"
#include<Qlabel>
QT_BEGIN_NAMESPACE
namespace Ui { class recipientPage; }
QT_END_NAMESPACE
class recipientPage : public QMainWindow
{
   Q_OBJECT

public:
    recipientPage(BloodBankClass *z, QWidget *parent = nullptr);
    ~recipientPage();

private slots:
	void on_requestBtn_clicked();
private:
	Ui::recipientPageClass *ui;
	BloodBankClass b;
	
};

