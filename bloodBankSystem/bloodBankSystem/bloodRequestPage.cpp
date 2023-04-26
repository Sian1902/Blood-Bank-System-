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
int BloodBankClass::totalBlood = 50;
void bloodRequestPage::on_requestBtn_clicked()
{
	
	QString reqAmount = ui->amount->text();

	if (stoi(reqAmount.toStdString()) > BloodBankClass::totalBlood) {
		ui->stateTxt->setText("Failed");
		ui->amount->clear();
	}
	else {
		ui->stateTxt->setText("succeeded");
		BloodBankClass::totalBlood -= stoi(reqAmount.toStdString());
		ui->amount->clear();
	}

}