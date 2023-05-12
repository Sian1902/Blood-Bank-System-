#include "recipientPage.h"
#include <QDebug>
#include <QString>
#include <QLabel>
#include<string>
#include "qevent.h"
recipientPage::recipientPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::recipientPageClass)
{
	ui->setupUi(this);
    ui->updateDataPage->hide();
    ui->requestPage->hide();
    ui->age->setText("Age: "+QString::fromStdString(to_string(BloodBankClass::bbc->getRecipient().getAge())));
    ui->name->setText("Name: "+QString::fromStdString(BloodBankClass::bbc->getRecipient().getName()));
    ui->bloodType->setText("Blood Type: "+QString::fromStdString(BloodBankClass::bbc->getRecipient().getBloodType()));
    ui->bloodTypeFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getBloodType()));
    ui->emailFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getMail()));
    ui->doctorFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getDoctorOftheCase()));
    ui->hospitalFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getHospital()));
    ui->nameFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getName()));
    ui->passwordFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getPassword()));
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
recipientPage::~recipientPage()
{}
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
    BloodBankClass::bbc->getRecipient().setDoctorOftheCase(ui->doctorFeild->text().toStdString());
    BloodBankClass::bbc->getRecipient().setHospital(ui->hospitalFeild->text().toStdString());
    BloodBankClass::bbc->getRecipient().setName(ui->nameFeild->text().toStdString());
    BloodBankClass::bbc->getRecipient().setPassword(ui->passwordFeild->text().toStdString());
}

void recipientPage::closeEvent(QCloseEvent *event)
{
    BloodBankClass::bbc->~BloodBankClass();
    event->accept();
}

void recipientPage::on_cancelEditBtn_clicked()
{
    ui->age->setText("Age: "+QString::fromStdString(to_string(BloodBankClass::bbc->getRecipient().getAge())));
    ui->name->setText("Name: "+QString::fromStdString(BloodBankClass::bbc->getRecipient().getName()));
    ui->doctorFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getDoctorOftheCase()));
    ui->hospitalFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getHospital()));
    ui->nameFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getName()));
    ui->passwordFeild->setText(QString::fromStdString(BloodBankClass::bbc->getRecipient().getPassword()));
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
void recipientPage::on_pushButton_clicked()
{
    int rowsSize = ui->spinBox->value();
    ui->tableWidget->setRowCount(rowsSize);
    for (int i = 0; i < rowsSize; ++i) {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString("type")));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString("date of donation")));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString("date of expiration")));
    }
}
// ########################################################################## retrieve data ####################################
void recipientPage::on_tableWidget_cellDoubleClicked(int row, int column)
{
    int index = ui->tableWidget->currentRow(); //hna gbt index el row el double clicked
    QString type = ui->tableWidget->item(index, 0)->text();
    QString DOD = ui->tableWidget->item(index, 1)->text();
    QString DOE = ui->tableWidget->item(index, 2)->text();
    qDebug() << index << type << DOD << DOE;
}
