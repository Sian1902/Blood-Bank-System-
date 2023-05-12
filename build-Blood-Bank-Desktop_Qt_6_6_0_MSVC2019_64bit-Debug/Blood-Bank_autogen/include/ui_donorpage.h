/********************************************************************************
** Form generated from reading UI file 'donorpage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONORPAGE_H
#define UI_DONORPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DonorPage
{
public:
    QWidget *centralwidget;
    QWidget *header;
    QLabel *name_2;
    QLabel *name_3;
    QWidget *header_2;
    QWidget *header_3;
    QLabel *bloodType;
    QLabel *name;
    QLabel *age;
    QLabel *days;
    QPushButton *donateBtn;
    QLabel *donationStatus;
    QPushButton *showDataBtn;
    QMenuBar *menubar;
    QMenu *menuDonor;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DonorPage)
    {
        if (DonorPage->objectName().isEmpty())
            DonorPage->setObjectName("DonorPage");
        DonorPage->resize(800, 600);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        DonorPage->setFont(font);
        centralwidget = new QWidget(DonorPage);
        centralwidget->setObjectName("centralwidget");
        header = new QWidget(centralwidget);
        header->setObjectName("header");
        header->setGeometry(QRect(0, 0, 801, 41));
        header->setStyleSheet(QString::fromUtf8("background-color:#7A0000 ;\n"
"border-radius: 10px;"));
        name_2 = new QLabel(header);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(10, 0, 121, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(14);
        font1.setBold(false);
        name_2->setFont(font1);
        name_2->setStyleSheet(QString::fromUtf8("color:#ffffff"));
        name_3 = new QLabel(header);
        name_3->setObjectName("name_3");
        name_3->setGeometry(QRect(390, 0, 61, 51));
        name_3->setFont(font1);
        name_3->setStyleSheet(QString::fromUtf8("color:#ffffff"));
        header_2 = new QWidget(header);
        header_2->setObjectName("header_2");
        header_2->setGeometry(QRect(730, -10, 71, 31));
        header_2->setStyleSheet(QString::fromUtf8("background-color:#7A0000 ;\n"
"border-radius: 10px;"));
        header_3 = new QWidget(header);
        header_3->setObjectName("header_3");
        header_3->setGeometry(QRect(-10, 0, 71, 21));
        header_3->setStyleSheet(QString::fromUtf8("background-color:#7A0000 ;\n"
"border-radius: 10px;"));
        header_3->raise();
        name_2->raise();
        name_3->raise();
        header_2->raise();
        bloodType = new QLabel(centralwidget);
        bloodType->setObjectName("bloodType");
        bloodType->setGeometry(QRect(50, 350, 321, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(14);
        font2.setBold(true);
        bloodType->setFont(font2);
        bloodType->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        name = new QLabel(centralwidget);
        name->setObjectName("name");
        name->setGeometry(QRect(50, 140, 201, 51));
        name->setFont(font2);
        name->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        age = new QLabel(centralwidget);
        age->setObjectName("age");
        age->setGeometry(QRect(50, 240, 101, 51));
        age->setFont(font2);
        age->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        days = new QLabel(centralwidget);
        days->setObjectName("days");
        days->setGeometry(QRect(370, 110, 321, 251));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(36);
        font3.setBold(true);
        days->setFont(font3);
        days->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        days->setAlignment(Qt::AlignCenter);
        donateBtn = new QPushButton(centralwidget);
        donateBtn->setObjectName("donateBtn");
        donateBtn->setGeometry(QRect(390, 360, 271, 71));
        QPalette palette;
        QBrush brush(QColor(255, 82, 82, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush2(QColor(164, 166, 168, 96));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        donateBtn->setPalette(palette);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(20);
        font4.setBold(false);
        donateBtn->setFont(font4);
        donateBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF5252;\n"
"     border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #7A0000;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: black;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"\n"
""));
        donationStatus = new QLabel(centralwidget);
        donationStatus->setObjectName("donationStatus");
        donationStatus->setGeometry(QRect(380, 440, 321, 51));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Times New Roman")});
        font5.setPointSize(10);
        font5.setBold(true);
        donationStatus->setFont(font5);
        donationStatus->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        donationStatus->setAlignment(Qt::AlignCenter);
        showDataBtn = new QPushButton(centralwidget);
        showDataBtn->setObjectName("showDataBtn");
        showDataBtn->setGeometry(QRect(50, 430, 141, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        showDataBtn->setPalette(palette1);
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Times New Roman")});
        font6.setPointSize(12);
        font6.setBold(true);
        showDataBtn->setFont(font6);
        showDataBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF5252 ;\n"
"     border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #7A0000;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: black;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"\n"
""));
        DonorPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DonorPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 32));
        menuDonor = new QMenu(menubar);
        menuDonor->setObjectName("menuDonor");
        DonorPage->setMenuBar(menubar);
        statusbar = new QStatusBar(DonorPage);
        statusbar->setObjectName("statusbar");
        DonorPage->setStatusBar(statusbar);

        menubar->addAction(menuDonor->menuAction());

        retranslateUi(DonorPage);

        QMetaObject::connectSlotsByName(DonorPage);
    } // setupUi

    void retranslateUi(QMainWindow *DonorPage)
    {
        DonorPage->setWindowTitle(QCoreApplication::translate("DonorPage", "MainWindow", nullptr));
        name_2->setText(QCoreApplication::translate("DonorPage", "Welcome", nullptr));
        name_3->setText(QCoreApplication::translate("DonorPage", "Bank", nullptr));
        bloodType->setText(QCoreApplication::translate("DonorPage", "BLood Type", nullptr));
        name->setText(QCoreApplication::translate("DonorPage", "Name:", nullptr));
        age->setText(QCoreApplication::translate("DonorPage", "Age:", nullptr));
        days->setText(QCoreApplication::translate("DonorPage", "BLood Type", nullptr));
        donateBtn->setText(QCoreApplication::translate("DonorPage", "Donate", nullptr));
        donationStatus->setText(QCoreApplication::translate("DonorPage", "BLood Type", nullptr));
        showDataBtn->setText(QCoreApplication::translate("DonorPage", "Show Data", nullptr));
        menuDonor->setTitle(QCoreApplication::translate("DonorPage", "Donor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DonorPage: public Ui_DonorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONORPAGE_H
