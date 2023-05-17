#ifndef DONORPAGE_H
#define DONORPAGE_H
#include "bloodBankClass.h"
#include "qevent.h"
#include "ui_donorpage.h"
#include <QMainWindow>
#include "bloodBankClass.h"
#include "bloodbank.h"``
#include<ctime>

namespace Ui {
class DonorPage;
}

class DonorPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit DonorPage(QWidget *parent = nullptr);
    ~DonorPage();
    void uiSetter();
private slots:
    void closeEvent(QCloseEvent *event);

    void on_donateBtn_clicked();

    void on_log_out_clicked();

    void on_deleteBtn_clicked();

private:
    Ui::DonorPage *ui;
    BloodBank *loginPage;
};

#endif // DONORPAGE_H
