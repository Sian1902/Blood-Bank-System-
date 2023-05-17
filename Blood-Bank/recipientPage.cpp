#include "recipientPage.h"
#include <QDebug>
#include <QString>
#include <QLabel>
#include <ctime>
#include <QDate>
#include <QDateEdit>
#include<string>
#include "qevent.h"
recipientPage::recipientPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::recipientPageClass)
{
	ui->setupUi(this);
    ui->updateDataPage->hide();
    ui->tableWidget->hide();
    ui->requestPage->hide();
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->bloodType->setText("Blood Type: "+QString::fromStdString(BloodBankClass::bbc->getRecipient().getBloodType()));
    ui->bloodTypeFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getBloodType()));
    ui->emailFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getMail()));
    ui->idFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getId()));
    uiSetter();

}
recipientPage::~recipientPage()
{
  delete ui;
}
void recipientPage::uiSetter()
{
    std::time_t currentTime = BloodBankClass::bbc->getRecipient().getBirthDate();
    std::tm* timeInfo = std::localtime(&currentTime);
    int year = timeInfo->tm_year + 1900;  // Year is offset by 1900 in std::tm
    int month = timeInfo->tm_mon + 1;     // Month is zero-based in std::tm
    int day = timeInfo->tm_mday;
    QDate qdate(year, month, day);
    ui->age->setText("Age: " + QString::fromStdString(to_string(BloodBankClass::bbc->getRecipient().getAge())));
    ui->name->setText("Name: " + QString::fromStdString(BloodBankClass::bbc->getRecipient().getName()));
    ui->doctorFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getDoctorOftheCase()));
    ui->hospitalFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getHospital()));
    ui->nameFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getName()));
    ui->passwordFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getPassword()));
    ui->birthDateFeild->setDate(qdate);
    ui->closeBtn->hide();
    ui->updateStatus->setText("");
}
void recipientPage::on_requestBtn_clicked() {
    QString amount = ui->amountFeild->text();

    if(! BloodBankClass::bbc->requestBlood(stoi(amount.toStdString()))){
        ui->reqStatus->setText("Request failed");

    }
    else{
        ui->requestPage->hide();
    }

}

void recipientPage::on_updateBtn_clicked()
{
    string doc = ui->doctorFeild->text().toStdString();
    string hos = ui->hospitalFeild->text().toStdString();
    string name = ui->nameFeild->text().toStdString();
    string pass = ui->passwordFeild->text().toStdString();
    qint64 birthdate = ui->birthDateFeild->dateTime().toSecsSinceEpoch();
    if (!doc.empty() && !hos.empty() && !name.empty() && !pass.empty()) {
        BloodBankClass::bbc->getRecipient().setDoctorOftheCase(doc);
        BloodBankClass::bbc->getRecipient().setHospital(hos);
        BloodBankClass::bbc->getRecipient().setName(name);
        BloodBankClass::bbc->getRecipient().setPassword(pass);
        BloodBankClass::bbc->getRecipient().setBirthDate(birthdate);
    }
    else {
     

        ui->updateStatus->setText("Blank slots must be filled");
      
    }
}

void recipientPage::closeEvent(QCloseEvent *event)
{
    BloodBankClass::bbc->~BloodBankClass();
    QApplication::quit();
    event->accept();
}

void recipientPage::on_cancelEditBtn_clicked()
{
    uiSetter();
}


void recipientPage::on_deleteBtn_clicked()
{
    BloodBankClass::bbc->deleteRecipient();
    this->hide();
    loginPage= new BloodBank(this);
    loginPage->show();

}





void recipientPage::on_log_out_clicked()
{
    this->hide();
    loginPage= new BloodBank(this);
    loginPage->show();
}
// ##################################################### create data ##########################3
void recipientPage::on_bloodDataBtn_clicked()
{
    queue<BloodClass> b = BloodBankClass::bbc->getBloodData();
    ui->tableWidget->setRowCount(b.size());
    if (b.size() == 0) {
        ui->tableWidget->setRowCount(1);
    }
    
     string bloodType = BloodBankClass::bbc->getRecipient().getBloodType();
     time_t donationDate;
     time_t expirationDate;
     string donationDateStr ;
     string expirationDateStr;
    
     int i = 0;
   
     

   while(!b.empty()){
      
        donationDate = b.front().getDonationDate();
        expirationDate = b.front().getExpirationDate();
        donationDateStr = ctime(&donationDate);
        expirationDateStr = ctime(&expirationDate);
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(bloodType)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(donationDateStr)));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(expirationDateStr)));
        b.pop();
       
        i++;
        if (b.empty()) {
            i--;
        }
    }
   float amount = i * 0.5;
   ostringstream oss;
   oss << std::fixed << std::setprecision(1) << amount;
   string result = oss.str();
   ui->tableWidget->setItem(i, 0, new QTableWidgetItem("total"));
   ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(to_string(i)) + " Donation"));
   ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(result) + " liters"));

   
   
}

