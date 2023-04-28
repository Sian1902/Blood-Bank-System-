#include "bloodRequestPage.h"
#include"BloodBankClass.h"
#include<string>
bloodRequestPage::bloodRequestPage(QWidget *parent)
	: QMainWindow(parent)
	,ui(new Ui::bloodRequestPageClass)
{
	ui->setupUi(this);
}

bloodRequestPage::~bloodRequestPage()
{}

void bloodRequestPage::on_requestBtn_clicked()
{
	QString reqAmount = ui->amount->text();
	int x = 50;
	if (stoi(reqAmount.toStdString()) > x){
		ui->stateTxt->setText("Failed");
		ui->amount->clear();
	}
	else {
		ui->stateTxt->setText("succeeded");
	     x-= stoi(reqAmount.toStdString());
		ui->amount->clear();
	}

}