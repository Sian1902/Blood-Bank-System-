#include <QApplication>
#include <QFile>
#include "bloodbank.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //    QFile styleSheetFile("C:/Users/Ahmed/Documents/BB/Fibers.qss");
    //    styleSheetFile.open(QFile::ReadOnly);
    //    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    //    a.setStyleSheet(styleSheet);
    BloodBank w;
    w.show();
    return a.exec();
}
