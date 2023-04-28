#include "signup.h"
#include "bloodbank.h"
#include "ui_signup.h"

BloodBank *w;

SignUp::SignUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_pushButton_clicked()
{
    this->hide();
    w = new BloodBank(this);
    w->show();
}
