#include "bloodbank.h"
#include <QFile>
#include "./ui_bloodbank.h"
#include "forgotpassword.h"
#include "signup.h"
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

void BloodBank::changeStyleSheet(QString path)
{
    QFile styleSheetFile(path);
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    this->setStyleSheet(styleSheet);
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
    changeStyleSheet("C:/Users/Ahmed/Documents/BB/Fibers.qss");
}

void BloodBank::on_pushButton_2_clicked()
{
    changeStyleSheet("C:/Users/Ahmed/Documents/BB/Darkeum.qss");
}

void BloodBank::on_pushButton_3_clicked()
{
    changeStyleSheet("C:/Users/Ahmed/Documents/BB/Irrorater.qss");
}
