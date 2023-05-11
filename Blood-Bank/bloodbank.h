
#ifndef BLOODBANK_H
#define BLOODBANK_H

#include <QCloseEvent>
#include <QMainWindow>
#include "forgotpassword.h"
#include "signup.h"

QT_BEGIN_NAMESPACE
namespace Ui { class BloodBank; }
QT_END_NAMESPACE

class BloodBank : public QMainWindow

{
    Q_OBJECT

public:
    BloodBank(QWidget *parent = nullptr);
    ~BloodBank();
    void changeStyleSheet(QString path);

private slots:
    void on_loginBtn_clicked();

    void on_forgotThePasswordBtn_clicked();

    void on_forgotThePasswordBtn_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void closeEvent(QCloseEvent *event);

private:
    Ui::BloodBank *ui;
};

#endif // BLOODBANK_H
