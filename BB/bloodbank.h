
#ifndef BLOODBANK_H
#define BLOODBANK_H

#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class BloodBank; }
QT_END_NAMESPACE

class BloodBank : public QMainWindow

{
    Q_OBJECT

public:
    BloodBank(QWidget *parent = nullptr);
    ~BloodBank();

private slots:
    void on_loginBtn_clicked();

private:
    Ui::BloodBank *ui;
};

#endif // BLOODBANK_H
