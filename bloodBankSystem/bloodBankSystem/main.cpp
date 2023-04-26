#include "recipientPage.h"
#include <QtWidgets/QApplication>
#include"UserClass.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    recipientPage w;
    w.show();
   
   
    return a.exec();
}
