#include "bloodbank.h"
#include <QDebug>
#include <QFile>
#include "./ui_bloodbank.h"
#include "bloodBankClass.h"
#include "forgotpassword.h"
#include "signup.h"

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

void BloodBank::changeStyleSheet(QString path)
{
    QFile styleSheetFile(path);
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    this->setStyleSheet(styleSheet);
}

void BloodBank::on_loginBtn_clicked()
{
    if (ui->emailLineEdit->text().isEmpty() || ui->emailLineEdit->text().isEmpty()
        || ui->buttonGroup->checkedButton() == NULL) {
        ui->statusbar->showMessage("Please fill all the fields", 2000);
    } else {
<<<<<<< Updated upstream
        BloodBankClass read;
        bool test = read.login(ui->emailLineEdit->text().toStdString(),
                               ui->passwordLineEdit->text().toStdString(),
                               ui->radioButton->isChecked());
        if (test) {
            ui->statusbar->showMessage("Successfully loggedin.", 2000);
=======

        bool test = BloodBankClass::getobject().login(ui->emailLineEdit->text().toStdString(),
                                ui->passwordLineEdit->text().toStdString(),
                                ui->radioButton->isChecked());
        if (test && ui->buttonGroup->checkedButton()->text() == "Recipient") {
            this->hide();
            f = new recipientPage( this);
            f->show();
>>>>>>> Stashed changes
        } else {
            ui->statusbar->showMessage("The email or password you've entered doesn't match any "
                                       "accout. Sign up for an accout.",
                                       4000);
            ui->emailLineEdit->clear();
            ui->passwordLineEdit->clear();
        }
    }
}

void BloodBank::on_forgotThePasswordBtn_clicked()
{
    this->hide();
    w = new SignUp(this);
    w->show();
}

void BloodBank::on_forgotThePasswordBtn_2_clicked()
{
    this->hide();
    wf = new ForgotPassword(this);
    wf->show();
}

void BloodBank::on_pushButton_clicked()
{
    changeStyleSheet("Fibers.qss");
}

void BloodBank::on_pushButton_2_clicked()
{
    changeStyleSheet("Darkeum.qss");
}

void BloodBank::on_pushButton_3_clicked()
{
    changeStyleSheet("Irrorater.qss");
}

void BloodBank::on_pushButton_4_clicked()
{
    changeStyleSheet("Dark_Orange.qss");
}

void BloodBank::on_pushButton_5_clicked()
{
    this->setStyleSheet("");
}
