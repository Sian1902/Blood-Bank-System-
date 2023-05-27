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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QWidget *updateDataPage;
    QLineEdit *nameFeild;
    QDateEdit *birthDateFeild;
    QLabel *name_4;
    QLabel *name_5;
    QLineEdit *emailFeild;
    QLabel *name_8;
    QLabel *name_9;
    QLineEdit *passwordFeild;
    QLineEdit *bloodTypeFeild;
    QLabel *name_10;
    QPushButton *updateBtn;
    QPushButton *cancelEditBtn;
    QPushButton *deleteBtn;
    QPushButton *log_out;
    QLineEdit *idFeild;
    QLabel *name_11;
    QLabel *updateStatus;
    QComboBox *hospitalSelect;
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
        days->setGeometry(QRect(340, 110, 321, 251));
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
        donationStatus->setGeometry(QRect(360, 490, 321, 51));
        donationStatus->setFont(font2);
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
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Times New Roman")});
        font5.setPointSize(12);
        font5.setBold(true);
        showDataBtn->setFont(font5);
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
        updateDataPage = new QWidget(centralwidget);
        updateDataPage->setObjectName("updateDataPage");
        updateDataPage->setGeometry(QRect(0, 40, 791, 491));
        updateDataPage->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF;"));
        nameFeild = new QLineEdit(updateDataPage);
        nameFeild->setObjectName("nameFeild");
        nameFeild->setGeometry(QRect(140, 20, 141, 28));
        birthDateFeild = new QDateEdit(updateDataPage);
        birthDateFeild->setObjectName("birthDateFeild");
        birthDateFeild->setGeometry(QRect(140, 80, 141, 29));
        name_4 = new QLabel(updateDataPage);
        name_4->setObjectName("name_4");
        name_4->setGeometry(QRect(30, 10, 71, 51));
        name_4->setFont(font1);
        name_4->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        name_5 = new QLabel(updateDataPage);
        name_5->setObjectName("name_5");
        name_5->setGeometry(QRect(30, 70, 101, 51));
        name_5->setFont(font1);
        name_5->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        emailFeild = new QLineEdit(updateDataPage);
        emailFeild->setObjectName("emailFeild");
        emailFeild->setGeometry(QRect(550, 40, 141, 28));
        emailFeild->setReadOnly(true);
        name_8 = new QLabel(updateDataPage);
        name_8->setObjectName("name_8");
        name_8->setGeometry(QRect(440, 30, 71, 51));
        name_8->setFont(font1);
        name_8->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        name_9 = new QLabel(updateDataPage);
        name_9->setObjectName("name_9");
        name_9->setGeometry(QRect(440, 90, 91, 51));
        name_9->setFont(font1);
        name_9->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        passwordFeild = new QLineEdit(updateDataPage);
        passwordFeild->setObjectName("passwordFeild");
        passwordFeild->setGeometry(QRect(550, 100, 141, 28));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Times New Roman")});
        font6.setPointSize(9);
        font6.setBold(false);
        passwordFeild->setFont(font6);
        passwordFeild->setEchoMode(QLineEdit::Password);
        passwordFeild->setReadOnly(false);
        bloodTypeFeild = new QLineEdit(updateDataPage);
        bloodTypeFeild->setObjectName("bloodTypeFeild");
        bloodTypeFeild->setGeometry(QRect(580, 160, 111, 28));
        bloodTypeFeild->setReadOnly(true);
        name_10 = new QLabel(updateDataPage);
        name_10->setObjectName("name_10");
        name_10->setGeometry(QRect(440, 150, 111, 51));
        name_10->setFont(font1);
        name_10->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        updateBtn = new QPushButton(updateDataPage);
        updateBtn->setObjectName("updateBtn");
        updateBtn->setGeometry(QRect(180, 280, 150, 50));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        updateBtn->setPalette(palette2);
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Times New Roman")});
        font7.setPointSize(12);
        font7.setBold(false);
        updateBtn->setFont(font7);
        updateBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        cancelEditBtn = new QPushButton(updateDataPage);
        cancelEditBtn->setObjectName("cancelEditBtn");
        cancelEditBtn->setGeometry(QRect(350, 280, 150, 50));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        cancelEditBtn->setPalette(palette3);
        cancelEditBtn->setFont(font7);
        cancelEditBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        deleteBtn = new QPushButton(updateDataPage);
        deleteBtn->setObjectName("deleteBtn");
        deleteBtn->setGeometry(QRect(180, 340, 150, 50));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        deleteBtn->setPalette(palette4);
        deleteBtn->setFont(font7);
        deleteBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        log_out = new QPushButton(updateDataPage);
        log_out->setObjectName("log_out");
        log_out->setGeometry(QRect(350, 340, 150, 50));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        log_out->setPalette(palette5);
        log_out->setFont(font7);
        log_out->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        idFeild = new QLineEdit(updateDataPage);
        idFeild->setObjectName("idFeild");
        idFeild->setGeometry(QRect(170, 140, 111, 28));
        idFeild->setReadOnly(true);
        name_11 = new QLabel(updateDataPage);
        name_11->setObjectName("name_11");
        name_11->setGeometry(QRect(50, 130, 41, 51));
        name_11->setFont(font1);
        name_11->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        updateStatus = new QLabel(updateDataPage);
        updateStatus->setObjectName("updateStatus");
        updateStatus->setGeometry(QRect(90, 400, 491, 51));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Times New Roman")});
        font8.setPointSize(18);
        font8.setBold(false);
        updateStatus->setFont(font8);
        updateStatus->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        updateStatus->setAlignment(Qt::AlignCenter);
        hospitalSelect = new QComboBox(centralwidget);
        hospitalSelect->addItem(QString());
        hospitalSelect->addItem(QString());
        hospitalSelect->addItem(QString());
        hospitalSelect->addItem(QString());
        hospitalSelect->setObjectName("hospitalSelect");
        hospitalSelect->setGeometry(QRect(470, 440, 111, 22));
        DonorPage->setCentralWidget(centralwidget);
        hospitalSelect->raise();
        header->raise();
        bloodType->raise();
        name->raise();
        age->raise();
        days->raise();
        donateBtn->raise();
        donationStatus->raise();
        showDataBtn->raise();
        updateDataPage->raise();
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
        QObject::connect(showDataBtn, &QPushButton::clicked, updateDataPage, qOverload<>(&QWidget::show));
        QObject::connect(cancelEditBtn, &QPushButton::clicked, updateDataPage, qOverload<>(&QWidget::hide));

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
        donationStatus->setText(QString());
        showDataBtn->setText(QCoreApplication::translate("DonorPage", "Show Data", nullptr));
        name_4->setText(QCoreApplication::translate("DonorPage", "Name", nullptr));
        name_5->setText(QCoreApplication::translate("DonorPage", "Birth Date", nullptr));
        name_8->setText(QCoreApplication::translate("DonorPage", "Email", nullptr));
        name_9->setText(QCoreApplication::translate("DonorPage", "Password", nullptr));
        name_10->setText(QCoreApplication::translate("DonorPage", "Blood Type", nullptr));
        updateBtn->setText(QCoreApplication::translate("DonorPage", "update", nullptr));
        cancelEditBtn->setText(QCoreApplication::translate("DonorPage", "cancel", nullptr));
        deleteBtn->setText(QCoreApplication::translate("DonorPage", "Delete ", nullptr));
        log_out->setText(QCoreApplication::translate("DonorPage", "Log Out", nullptr));
        idFeild->setText(QCoreApplication::translate("DonorPage", "ID", nullptr));
        name_11->setText(QCoreApplication::translate("DonorPage", "ID", nullptr));
        updateStatus->setText(QCoreApplication::translate("DonorPage", "Doctor", nullptr));
        hospitalSelect->setItemText(0, QCoreApplication::translate("DonorPage", "hopital_1", nullptr));
        hospitalSelect->setItemText(1, QCoreApplication::translate("DonorPage", "hopital_2", nullptr));
        hospitalSelect->setItemText(2, QCoreApplication::translate("DonorPage", "hopital_3", nullptr));
        hospitalSelect->setItemText(3, QCoreApplication::translate("DonorPage", "hopital_4", nullptr));

        menuDonor->setTitle(QCoreApplication::translate("DonorPage", "Donor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DonorPage: public Ui_DonorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONORPAGE_H
