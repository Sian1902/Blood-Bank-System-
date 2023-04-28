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
    b.login("tebo@gmail.com", "1234", 0);
    b.requestBlood(3);
    QApplication a(argc, argv);
    recipientPage w;
    w.show();
    return a.exec();
}
