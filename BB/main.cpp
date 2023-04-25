#include <QApplication>
#include "bloodbank.h"
#include "user.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BloodBank w;
    w.show();
    return a.exec();
}
