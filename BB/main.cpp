#include <QApplication>
#include "bloodBankClass.h"
#include "bloodbank.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BloodBank w;
    w.show();
    return a.exec();
}
