#include "bloodbank.h"
#include <QDebug>
#include <QFile>
#include "./ui_bloodbank.h"
#include "bloodBankClass.h"
#include "donorpage.h"
#include "forgotpassword.h"
#include "recipientPage.h"
#include "signup.h"

BloodBankClass *read = new BloodBankClass();
recipientPage *recPage;
SignUp *signupPage;
ForgotPassword *forgotpasswordPage;
DonorPage *donorPage;

BloodBank::BloodBank(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BloodBank)
{
    ui->setupUi(this);
    BloodBankClass::bbc = read;
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
    if (ui->emailLineEdit->text().isEmpty() || ui->passwordLineEdit->text().isEmpty()
        || ui->buttonGroup->checkedButton() == NULL) {
        ui->statusbar->showMessage("Please fill all the fields", 2000);
    } else {
        bool test = BloodBankClass::bbc->login(ui->emailLineEdit->text().toStdString(),
                                               ui->passwordLineEdit->text().toStdString(),
                                               ui->radioButton->isChecked());
        if (test && ui->buttonGroup->checkedButton()->text() == "Recipient") {
            this->hide();
            recPage = new recipientPage(this);
            recPage->show();
        } else if (test && ui->buttonGroup->checkedButton()->text() == "Donor") {
            this->hide();
            donorPage = new DonorPage(this);
            donorPage->show();
        } else {
            ui->statusbar->showMessage("The email or password you've entered doesn't match any "
                                       "accout. Sign up for an accout.",
                                       4000);
            ui->emailLineEdit->clear();
            ui->passwordLineEdit->clear();
        }
    }
}



void BloodBank::on_pushButton_clicked()
{
    changeStyleSheet("Fibers.qss");
}

void BloodBank::on_forgotThePasswordBtn_clicked()
{
    this->hide();
    signupPage = new SignUp();
    signupPage->show();
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

void BloodBank::closeEvent(QCloseEvent *event)
{
    BloodBankClass::bbc->~BloodBankClass();
    QApplication::quit();
    event->accept();
}
