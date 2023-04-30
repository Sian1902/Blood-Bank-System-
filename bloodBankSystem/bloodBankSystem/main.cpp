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
    b.login("osama@gmail.com", "6666", 0);
    QApplication a(argc, argv);
    recipientPage w;
    w.show();
    return a.exec();
}
