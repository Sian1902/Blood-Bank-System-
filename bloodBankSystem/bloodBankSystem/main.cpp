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
    b.login( "hamed@gmail.com","6666", 0);
    b.login( "ahmed@gmail.com", "6666", 1);
    b.Regestration("hamed", "1234", "abas@gmail.com", "6666", t / 2, "male", "O+", t);
    b.Regestration("ahmed", "1234", "hosny@gmail.com", "6666", t, "male", "O+", "dmerdash", "hassan");
    b.Regestration("ahmed", "1234", "ahmed@gmail.com", "6666", t, "male", "O+", "dmerdash", "hassan");
    b.Regestration("ahmed", "1234", "osama@gmail.com", "6666", t, "male", "O+", "dmerdash", "hassan");
    b.login("hamed@gmail.com", "6666", 1);
    b.login("ahmed@gmail.com", "6666", 0);
    b.Regestration("hamed", "1234", "waleed@gmail.com", "6666", t / 2, "male", "O+", t);
    b.Regestration("ahmed", "1234", "magdy@gmail.com", "6666", t, "male", "O+", "dmerdash", "hassan");
    b.login("wael@gmail.com", "6666", 1);
    b.login("osama@gmail.com", "6666", 0);
    QApplication a(argc, argv);
    recipientPage w;
    w.show();
    return a.exec();
}
