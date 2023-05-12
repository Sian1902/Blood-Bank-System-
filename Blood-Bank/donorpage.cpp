#include "donorpage.h"
#include "bloodBankClass.h"
#include "qevent.h"
#include "ui_donorpage.h"

DonorPage::DonorPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DonorPage)
{
    ui->setupUi(this);
    ui->name->setText("Name: "+QString::fromStdString(BloodBankClass::bbc->getDonor().getName()));
    ui->age->setText("Age: "+QString::fromStdString(to_string(BloodBankClass::bbc->getDonor().getAge())));
    ui->bloodType->setText("Blood Type: "+QString::fromStdString(BloodBankClass::bbc->getDonor().getBloodType()));
    if(BloodBankClass::bbc->getDonor().getRemainingDays()>0){
    ui->days->setText(QString::fromStdString(to_string(BloodBankClass::bbc->getDonor().getRemainingDays())+"\n Days"));
    }
    else {
    ui->days->setText("0 \n Days");
    }
}

DonorPage::~DonorPage()
{
    delete ui;
}

void DonorPage::closeEvent(QCloseEvent *event)
{
    BloodBankClass::bbc->~BloodBankClass();
    event->accept();
}
