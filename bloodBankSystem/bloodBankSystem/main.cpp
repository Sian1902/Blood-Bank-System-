#include "recipientPage.h"
#include <QtWidgets/QApplication>
#include"UserClass.h"
#include<ctime>
#include "bloodBankClass.h"
int main(int argc, char *argv[])
{
    time_t t;
    time(&t);
    BloodBankClass b;
    b.Regestration("osama", "12345678765432", "omar@gmail.com", "1234", t / 2, "male", "A-", "cvb", "bnm");
    QApplication a(argc, argv);
    recipientPage w;
    w.show();
    return a.exec();
}
