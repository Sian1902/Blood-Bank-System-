#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include "bloodBankClass.h"
namespace Ui {
class SignUp;
}

class SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp(BloodBankClass *z,QWidget *parent = nullptr);
    ~SignUp();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
