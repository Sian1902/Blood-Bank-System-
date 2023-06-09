#pragma once
#include "bloodBankClass.h"
#include <QMainWindow>
#include "ui_recipientPage.h"
//#include "bloodRequestPage.h"
#include "bloodBankClass.h"
#include "bloodbank.h"
#include<Qlabel>
#include<ctime>
#include<time.h>
QT_BEGIN_NAMESPACE
namespace Ui { class recipientPage; }
QT_END_NAMESPACE
class recipientPage : public QMainWindow
{
   Q_OBJECT

public:
    recipientPage(QWidget *parent = nullptr);
    ~recipientPage();
    void uiSetter();
private slots:
    void on_requestBtn_clicked();
    void on_updateBtn_clicked();
    void closeEvent(QCloseEvent *event);


    void on_cancelEditBtn_clicked();

    void on_deleteBtn_clicked();

    void on_log_out_clicked();

    void on_bloodDataBtn_clicked();

   // void on_tableWidget_cellDoubleClicked(int row, int column);

private:
    Ui::recipientPageClass *ui;
    BloodBank *loginPage;
};
