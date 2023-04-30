#include "recipientPage.h"
#include "bloodRequestPage.h"
#include <QLabel>
recipientPage::recipientPage(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}
recipientPage::~recipientPage()
{}
void recipientPage::on_requestBloodBtn_clicked() {

	p = new bloodRequestPage(this);
	p ->show();
}