#include "bloodBankSystem.h"
#include <QtWidgets/QApplication>
#include"userClass.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bloodBankSystem w;
    w.show();
    return a.exec();
}
