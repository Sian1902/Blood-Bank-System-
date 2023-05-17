#include "donorpage.h"


DonorPage::DonorPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DonorPage)
{
    ui->setupUi(this);
    uiSetter();
}

DonorPage::~DonorPage()
{
    delete ui;
}

void DonorPage::closeEvent(QCloseEvent *event)
{
    BloodBankClass::bbc->~BloodBankClass();
    QApplication::quit();
    event->accept();
}

void DonorPage::on_donateBtn_clicked()
{
    if(BloodBankClass::bbc->getDonor().getRemainingDays()<=0){
        ui->donationStatus->setText("Successful donation");
        BloodBankClass::bbc->donationRequest();
         ui->days->setText(QString::fromStdString(to_string(BloodBankClass::bbc->getDonor().getRemainingDays())+"\n Days"));
    }
    else{
        ui->donationStatus->setText("You have to wait "+QString::fromStdString(to_string(BloodBankClass::bbc->getDonor().getRemainingDays()))+" days");
    }
}
void DonorPage::uiSetter(){
    ui->name->setText("Name: "+QString::fromStdString(BloodBankClass::bbc->getDonor().getName()));
    ui->age->setText("Age: "+QString::fromStdString(to_string(BloodBankClass::bbc->getDonor().getAge())));
    ui->bloodType->setText("Blood Type: "+QString::fromStdString(BloodBankClass::bbc->getDonor().getBloodType()));
    ui->bloodTypeFeild->setText(QString::fromStdString(BloodBankClass::bbc->getDonor().getBloodType()));
    ui->emailFeild->setText(QString::fromStdString(BloodBankClass::bbc->getDonor().getMail()));
    ui->nameFeild->setText(QString::fromStdString(BloodBankClass::bbc->getDonor().getName()));
    ui->passwordFeild->setText(QString::fromStdString(BloodBankClass::bbc->getDonor().getPassword()));

    if(BloodBankClass::bbc->getDonor().getRemainingDays()>0){
        ui->days->setText(QString::fromStdString(to_string(BloodBankClass::bbc->getDonor().getRemainingDays())+"\n Days"));
    }
    else {
        ui->days->setText("0 \n Days");
    }
    ui->updateDataPage->hide();
}


void DonorPage::on_log_out_clicked()
{
    this->hide();
    loginPage = new BloodBank(this);
    loginPage->show();
}


void DonorPage::on_deleteBtn_clicked()
{
    BloodBankClass::bbc->deleteDonor();
    this->hide();
    loginPage= new BloodBank(this);
    loginPage->show();
}

