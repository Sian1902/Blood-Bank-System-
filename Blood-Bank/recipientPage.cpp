#include "recipientPage.h"
#include <QLabel>
#include "bloodBankClass.h"
recipientPage::recipientPage(BloodBankClass *z, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::recipientPageClass)
{
	ui->setupUi(this);
    BloodBankClass::bbc = z;
    ui->updateDataPage->hide();
    ui->requestPage->hide();
}
recipientPage::~recipientPage()
{}
void recipientPage::on_requestBtn_clicked() {
    QString amount = ui->amountFeild->text();

    if(! b.requestBlood(stoi(amount.toStdString()))){
        ui->reqStatus->setText("Request failed");

    }
    else{
        ui->requestPage->hide();
    }

}
