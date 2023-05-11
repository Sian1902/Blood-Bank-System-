#pragma once

#include <QMainWindow>
#include "ui_recipientPage.h"
//#include "bloodRequestPage.h"
#include "bloodBankClass.h"
#include<Qlabel>
QT_BEGIN_NAMESPACE
namespace Ui { class recipientPage; }
QT_END_NAMESPACE
class recipientPage : public QMainWindow
{
   Q_OBJECT

public:
<<<<<<< Updated upstream
	recipientPage(QWidget *parent = nullptr);
	~recipientPage();
=======
    recipientPage( QWidget *parent = nullptr);
    ~recipientPage();
   // void feildSetter();
>>>>>>> Stashed changes

private slots:
    void on_requestBtn_clicked();


    void on_deleteBtn_clicked();

private:
	Ui::recipientPageClass *ui;
};

