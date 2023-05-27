#include "signup.h"
#include <QDateTime>
#include <QDebug>
#include <QMessageBox>
#include <QRegularExpressionValidator>
#include "bloodBankClass.h"
#include "bloodbank.h"
#include "ui_signup.h"

BloodBank *w;

SignUp::SignUp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);
    ui->widget->hide();
    ui->widget_2->hide();
}

SignUp::~SignUp()
{
    delete ui;
    qDebug() << "Signup page destructor is called";
}

void SignUp::on_pushButton_clicked()
{
    this->hide();
    w = new BloodBank(this);
    w->show();
}

void SignUp::on_pushButton_2_clicked()
{
    if (ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty()
        || ui->lineEdit_3->text().isEmpty() || ui->lineEdit_4->text().isEmpty()
        || ui->lineEdit_6->text().isEmpty() || ui->buttonGroup->checkedButton() == NULL
        || ui->buttonGroup_2->checkedButton() == NULL
        || ui->buttonGroup_3->checkedButton() == NULL) {
        QMessageBox::warning(this, "Missing information", "Please fill all the fields");
    } else if (ui->lineEdit_3->text() == ui->lineEdit_4->text()) {
        if (ui->buttonGroup_3->checkedButton()->text() == "Recipient") {
            if ( ui->lineEdit_7->text().isEmpty()) {
                QMessageBox::warning(this,
                                     "Missing information",
                                     "Please fill the name of the doctor and the disease");
            } else {
                qint64 timeOfBirth = ui->dateEdit->dateTime().toSecsSinceEpoch();
                string name = ui->lineEdit->text().toStdString();
                name.erase(std::remove_if(name.begin(), name.end(), ::isspace), name.end());
                string ID = ui->lineEdit_6->text().toStdString();
                ID.erase(std::remove_if(ID.begin(), ID.end(), ::isspace), ID.end());
                string password = ui->lineEdit_3->text().toStdString();
                password.erase(std::remove_if(password.begin(), password.end(), ::isspace),
                               password.end());
                string doctor = ui->lineEdit_7->text().toStdString();
                doctor.erase(std::remove_if(doctor.begin(), doctor.end(), ::isspace), doctor.end());
                string email = ui->lineEdit_2->text().toStdString();
                email.erase(std::remove_if(email.begin(), email.end(), ::isspace), email.end());
                bool checkRecipient = BloodBankClass::bbc->Regestration(
                    name,
                    ID,
                    email,
                    password,
                    timeOfBirth,
                    ui->buttonGroup_2->checkedButton()->text().toStdString(),
                    ui->buttonGroup->checkedButton()->text().toStdString(),
                    ui->comboBox->currentText().toStdString(),
                    doctor);
                if (checkRecipient) {
                    QMessageBox::information(this,
                        "Successful signup",
                        "Go back to login page.");
                }
                else {
                    QMessageBox::warning(this,
                        "Signup failed",
                        "ID or Email may be taken.");
                }
            }
        } else if (ui->buttonGroup_3->checkedButton()->text() == "Donor") {
            if (ui->lineEdit_8->text().isEmpty()) {
                QMessageBox::warning(this, "Missing information", "If no disease, type: NA");
            } else if ((ui->lineEdit_8->text() == "NA" || ui->lineEdit_8->text() == "na"
                        || ui->lineEdit_8->text() == "Na")
                       && ui->comboBox_2->currentText() == "None") {
                if ((QDateTime::currentDateTime().toMSecsSinceEpoch()
                     - ui->dateEdit->dateTime().toMSecsSinceEpoch())
                    < 567993600) {
                    QMessageBox::warning(this,
                                         "Inappropriate age",
                                         "Your age is too young to donate blood");
                } else {
                    qint64 timeOfBirth = ui->dateEdit->dateTime().toSecsSinceEpoch();
                    qint64 timeOfLastDonation = ui->dateEdit_2->dateTime().toSecsSinceEpoch();
                    string name = ui->lineEdit->text().toStdString();
                    name.erase(std::remove_if(name.begin(), name.end(), ::isspace), name.end());
                    string ID = ui->lineEdit_6->text().toStdString();
                    ID.erase(std::remove_if(ID.begin(), ID.end(), ::isspace), ID.end());
                    string password = ui->lineEdit_3->text().toStdString();
                    password.erase(std::remove_if(password.begin(), password.end(), ::isspace),
                                   password.end());
                    string email = ui->lineEdit_2->text().toStdString();
                    email.erase(std::remove_if(email.begin(), email.end(), ::isspace), email.end());
                    bool checkDonor = BloodBankClass::bbc->Regestration(
                        name,
                        ID,
                        email,
                        password,
                        timeOfBirth,
                        ui->buttonGroup_2->checkedButton()->text().toStdString(),
                        ui->buttonGroup->checkedButton()->text().toStdString(),
                        timeOfLastDonation);
                    if (checkDonor) {
                        QMessageBox::information(this,
                            "Successful signup",
                            "Go back to login page.");
                    } else {
                        QMessageBox::warning(this,
                            "Signup failed",
                            "ID or Email may be taken.");
                    }
                }
            } else {
                QMessageBox::warning(this, "Disease detected", "Sorry, you can NOT signup");
            }
        }
    } else {
        QMessageBox::warning(this, "Inaccurate password", "Passwords do NOT match");
    }
}

void SignUp::closeEvent(QCloseEvent *event)
{
    BloodBankClass::bbc->~BloodBankClass();
    QApplication::quit();
    event->accept();
}
