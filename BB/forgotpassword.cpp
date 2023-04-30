#include "forgotpassword.h"
#include "bloodbank.h"
#include "ui_forgotpassword.h"

BloodBank *wf;

ForgotPassword::ForgotPassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ForgotPassword)
{
    ui->setupUi(this);
    ui->widget->hide();
}

ForgotPassword::~ForgotPassword()
{
    delete ui;
}

void ForgotPassword::on_pushButton_clicked()
{
   
}

void ForgotPassword::on_pushButton_2_clicked()
{
    this->hide();
    wf = new BloodBank(this);
    wf->show();
}
