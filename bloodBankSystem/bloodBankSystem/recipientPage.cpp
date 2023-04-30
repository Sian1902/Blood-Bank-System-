#include "recipientPage.h"
//#include "bloodRequestPage.h"
#include "bloodBankClass.h"
#include <QLabel>
recipientPage::recipientPage(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::recipientPageClass)
{
	ui->setupUi(this);

}
recipientPage::~recipientPage()
{}
void recipientPage::on_requestBtn_clicked() {
	
	QString amount = ui->amountFeild->text();

	b.requestBlood(stoi(amount.toStdString()));
	
}