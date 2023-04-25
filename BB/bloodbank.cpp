#include "bloodbank.h"
#include "./ui_bloodbank.h"
#include "user.h"

user testUser("test", "test", "test", "test", "test", 20);

BloodBank::BloodBank(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BloodBank)
{
    ui->setupUi(this);
}

BloodBank::~BloodBank()
{
    delete ui;
}

void BloodBank::on_loginBtn_clicked()
{
    QString emailEntered = ui->emailLineEdit->text();
    QString passwordEnterd = ui->passwordLineEdit->text();
    bool authinticate = testUser.login(emailEntered.toStdString(), passwordEnterd.toStdString());
    if (authinticate == true) {
        ui->label->setText("Successful");
    } else {
        ui->emailLineEdit->clear();
        ui->passwordLineEdit->clear();
    }
}
