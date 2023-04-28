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
<<<<<<< Updated upstream
    b.Regestration("hamed", "1234", "hamed@gmail.com", "6666", t, "male", "o", "tt", "t1");
>>>>>>> Stashed changes
=======
    b.Regestration("osama", "3456789", "osama3@gmail.com", "32d13",t/2,"male","0+","fdd","sifddso");

>>>>>>> Stashed changes
    QApplication a(argc, argv);
    bloodBankSystem w;
    w.show();
    return a.exec();
}
