#include "recipientPage.h"
#include "bloodBankClass.h"
<<<<<<< Updated upstream
#include <QLabel>
recipientPage::recipientPage(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::recipientPageClass)
{
	ui->setupUi(this);

=======



recipientPage::recipientPage( QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::recipientPageClass)
{
	ui->setupUi(this);
    ui->updateDataPage->hide();
    ui->requestPage->hide();
    ui->name->setText(QString::fromStdString("Name: "+BloodBankClass::getobject().recipientsDataMap[BloodBankClass::getobject().currEmail].getName()));
    ui->age->setText(QString::fromStdString("Age: "+to_string(BloodBankClass::getobject().recipientsDataMap[BloodBankClass::getobject().currEmail].getAge())));
    ui->bloodType->setText(QString::fromStdString("Blood Type: "+BloodBankClass::getobject().recipientsDataMap[BloodBankClass::getobject().currEmail].getBloodType()));
    ui->bloodTypeFeild->setText(QString::fromStdString(BloodBankClass::getobject().recipientsDataMap[BloodBankClass::getobject().currEmail].getBloodType()));
    ui->emailFeild->setText(QString::fromStdString(BloodBankClass::getobject().recipientsDataMap[BloodBankClass::getobject().currEmail].getMail()));
    ui->doctorFeild->setText(QString::fromStdString(BloodBankClass::getobject().recipientsDataMap[BloodBankClass::getobject().currEmail].getDoctorOftheCase()));
    ui->idFeild->setText(QString::fromStdString(BloodBankClass::getobject().recipientsDataMap[BloodBankClass::getobject().currEmail].getId()));
    ui->nameFeild->setText(QString::fromStdString(BloodBankClass::getobject().recipientsDataMap[BloodBankClass::getobject().currEmail].getName()));
    ui->hospitalFeild->setText(QString::fromStdString(BloodBankClass::getobject().recipientsDataMap[BloodBankClass::getobject().currEmail].getHospital()));
    ui->passwordFeild->setText(QString::fromStdString(BloodBankClass::getobject().recipientsDataMap[BloodBankClass::getobject().currEmail].getPassword()));
>>>>>>> Stashed changes
}
recipientPage::~recipientPage()
{
    delete ui;
}
void recipientPage::on_requestBtn_clicked() {

    QString amount = ui->amountFeild->text();

<<<<<<< Updated upstream
    b.requestBlood(stoi(amount.toStdString()));
	
=======
    if(! BloodBankClass::getobject().requestBlood(stoi(amount.toStdString()))){
        ui->reqStatus->setText("Request failed");

    }
    else{
        ui->requestPage->hide();
    }

>>>>>>> Stashed changes
}



void recipientPage::on_deleteBtn_clicked()
{
    BloodBankClass::getobject().deleteRecipient();
    BloodBankClass::getobject().currEmail="";
}

