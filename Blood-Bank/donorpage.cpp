#include "donorpage.h"
#include "bloodBankClass.h"
#include "qevent.h"
#include "ui_donorpage.h"

DonorPage::DonorPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DonorPage)
{
    ui->setupUi(this);
    ui->lineEdit->setText(QString::fromStdString(BloodBankClass::bbc->getDonor().getName()));
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
