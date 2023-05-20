#include "donorpage.h"


DonorPage::DonorPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DonorPage)
{
    ui->setupUi(this);
    ui->bloodType->setText("Blood Type: " + QString::fromStdString(BloodBankClass::bbc->getDonor().getBloodType()));
    ui->bloodTypeFeild->setText(QString::fromStdString(BloodBankClass::bbc->getDonor().getBloodType()));
    ui->emailFeild->setText(QString::fromStdString(BloodBankClass::bbc->getDonor().getMail()));
    //ui->idFeild->setText(QString::fromStdString(BloodBankClass::bbc->getDonor().getId()));
    ui->updateDataPage->hide();
    uiSetter();
}

DonorPage::~DonorPage()
{
    delete ui;
}

void DonorPage::closeEvent(QCloseEvent *event)
{
    BloodBankClass::bbc->~BloodBankClass();
    QApplication::quit();
    event->accept();
}

void DonorPage::on_donateBtn_clicked()
{
    if(BloodBankClass::bbc->getDonor().getRemainingDays()<=0){
        ui->donationStatus->setText("Successful donation");
        BloodBankClass::bbc->donationRequest(ui->hospitalSelect->currentText().toStdString());
         ui->days->setText(QString::fromStdString(to_string(BloodBankClass::bbc->getDonor().getRemainingDays())+"\n Days"));
    }
   
    else{
        ui->donationStatus->setText("You have to wait "+QString::fromStdString(to_string(BloodBankClass::bbc->getDonor().getRemainingDays()))+" days");
    }
}
void DonorPage::uiSetter(){
    std::time_t currentTime = BloodBankClass::bbc->getDonor().getBirthDate();
    std::tm* timeInfo = std::localtime(&currentTime);
    int year = timeInfo->tm_year + 1900;  // Year is offset by 1900 in std::tm
    int month = timeInfo->tm_mon + 1;     // Month is zero-based in std::tm
    int day = timeInfo->tm_mday;
    QDate qdate(year, month, day);
    ui->name->setText("Name: "+QString::fromStdString(BloodBankClass::bbc->getDonor().getName()));
    ui->age->setText("Age: "+QString::fromStdString(to_string(BloodBankClass::bbc->getDonor().getAge())));
    ui->nameFeild->setText(QString::fromStdString(BloodBankClass::bbc->getDonor().getName()));
    ui->passwordFeild->setText(QString::fromStdString(BloodBankClass::bbc->getDonor().getPassword()));
    ui->idFeild->setText(QString::fromStdString(BloodBankClass::bbc->getDonor().getId()));
    ui->birthDateFeild->setDate(qdate);
    if(BloodBankClass::bbc->getDonor().getRemainingDays()>0){
        ui->days->setText(QString::fromStdString(to_string(BloodBankClass::bbc->getDonor().getRemainingDays())+"\n Days"));
    }
    else {
        ui->days->setText("0 \n Days");
    }
    ui->updateStatus->setText("");

}


void DonorPage::on_log_out_clicked()
{
    this->hide();
    loginPage = new BloodBank(this);
    loginPage->show();
}

void DonorPage::on_updateBtn_clicked()
{
    string name = ui->nameFeild->text().toStdString();
    name.erase(std::remove_if(name.begin(), name.end(), ::isspace), name.end());
    string pass = ui->passwordFeild->text().toStdString();
    pass.erase(std::remove_if(pass.begin(), pass.end(), ::isspace), pass.end());
    qint64 birthdate = ui->birthDateFeild->dateTime().toSecsSinceEpoch();
    if (!name.empty() && !pass.empty()) {
     
        BloodBankClass::bbc->getDonor().setName(name);
        BloodBankClass::bbc->getDonor().setPassword(pass);
        BloodBankClass::bbc->getDonor().setBirthDate(birthdate);
    }
    else {


        ui->updateStatus->setText("Blank slots must be filled");

    }
}

void DonorPage::on_cancelEditBtn_clicked()
{
    uiSetter();

}




void DonorPage::on_deleteBtn_clicked()
{
    BloodBankClass::bbc->deleteDonor();
    this->hide();
    loginPage= new BloodBank(this);
    loginPage->show();
}

