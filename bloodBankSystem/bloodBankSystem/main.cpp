#include "bloodBankSystem.h"
#include <QtWidgets/QApplication>
<<<<<<< Updated upstream
#include"userClass.h"
int main(int argc, char *argv[])
{
=======
#include"UserClass.h"
#include"BloodBankClass.h"
int main(int argc, char *argv[])
{
    time_t t;
    time(&t);
    BloodBankClass b;
    b.Regestration("hamed", "1234", "hamed@gmail.com", "6666", t, "male", "o", "tt", "t1");
>>>>>>> Stashed changes
    QApplication a(argc, argv);
    bloodBankSystem w;
    w.show();
    return a.exec();
}
