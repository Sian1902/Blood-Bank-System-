/********************************************************************************
** Form generated from reading UI file 'recipientPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPIENTPAGE_H
#define UI_RECIPIENTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recipientPageClass
{
public:
    QWidget *centralWidget;
    QLabel *name;
    QPushButton *requestBloodBtn;
    QPushButton *showDataBtn;
    QLabel *age;
    QLabel *bloodType;
    QWidget *header;
    QLabel *name_2;
    QLabel *name_3;
    QWidget *header_2;
    QWidget *header_3;
    QWidget *requestPage;
    QSpinBox *amountFeild;
    QLabel *amount;
    QPushButton *requestBtn;
    QPushButton *cancelBtn;
    QLabel *reqStatus;
    QWidget *updateDataPage;
    QLineEdit *nameFeild;
    QDateEdit *birthDateFeild;
    QLabel *name_4;
    QLabel *name_5;
    QLineEdit *hospitalFeild;
    QLabel *name_6;
    QLabel *name_7;
    QLineEdit *doctorFeild;
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *recipientPageClass)
    {
        if (recipientPageClass->objectName().isEmpty())
            recipientPageClass->setObjectName("recipientPageClass");
        recipientPageClass->setEnabled(true);
        recipientPageClass->resize(600, 455);
        recipientPageClass->setAnimated(false);
        recipientPageClass->setDocumentMode(true);
        recipientPageClass->setTabShape(QTabWidget::Rounded);
        recipientPageClass->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(recipientPageClass);
        centralWidget->setObjectName("centralWidget");
        name = new QLabel(centralWidget);
        name->setObjectName("name");
        name->setGeometry(QRect(70, 160, 121, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        name->setFont(font);
        name->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        requestBloodBtn = new QPushButton(centralWidget);
        requestBloodBtn->setObjectName("requestBloodBtn");
        requestBloodBtn->setGeometry(QRect(370, 270, 141, 41));
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
        requestBloodBtn->setPalette(palette);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        requestBloodBtn->setFont(font1);
        requestBloodBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        showDataBtn = new QPushButton(centralWidget);
        showDataBtn->setObjectName("showDataBtn");
        showDataBtn->setGeometry(QRect(370, 180, 141, 41));
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
        showDataBtn->setFont(font1);
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
        age = new QLabel(centralWidget);
        age->setObjectName("age");
        age->setGeometry(QRect(90, 220, 121, 51));
        age->setFont(font);
        age->setStyleSheet(QString::fromUtf8("color:#FF5252\n"
""));
        bloodType = new QLabel(centralWidget);
        bloodType->setObjectName("bloodType");
        bloodType->setGeometry(QRect(70, 280, 131, 51));
        bloodType->setFont(font);
        bloodType->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        header = new QWidget(centralWidget);
        header->setObjectName("header");
        header->setGeometry(QRect(0, 0, 601, 41));
        header->setStyleSheet(QString::fromUtf8("background-color:#7A0000 ;\n"
"border-radius: 10px;"));
        name_2 = new QLabel(header);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(10, 0, 121, 51));
        name_2->setFont(font);
        name_2->setStyleSheet(QString::fromUtf8("color:#ffffff"));
        name_3 = new QLabel(header);
        name_3->setObjectName("name_3");
        name_3->setGeometry(QRect(260, 0, 61, 51));
        name_3->setFont(font);
        name_3->setStyleSheet(QString::fromUtf8("color:#ffffff"));
        header_2 = new QWidget(header);
        header_2->setObjectName("header_2");
        header_2->setGeometry(QRect(540, 0, 71, 21));
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
        requestPage = new QWidget(centralWidget);
        requestPage->setObjectName("requestPage");
        requestPage->setGeometry(QRect(110, 110, 361, 201));
        requestPage->setCursor(QCursor(Qt::ArrowCursor));
        requestPage->setAutoFillBackground(false);
        requestPage->setStyleSheet(QString::fromUtf8("background-color:#FF5252;\n"
"border-radius:4px;\n"
"\n"
""));
        amountFeild = new QSpinBox(requestPage);
        amountFeild->setObjectName("amountFeild");
        amountFeild->setGeometry(QRect(200, 80, 31, 31));
        amountFeild->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF;\n"
""));
        amountFeild->setWrapping(false);
        amountFeild->setFrame(true);
        amountFeild->setAlignment(Qt::AlignCenter);
        amountFeild->setButtonSymbols(QAbstractSpinBox::NoButtons);
        amount = new QLabel(requestPage);
        amount->setObjectName("amount");
        amount->setGeometry(QRect(110, 80, 61, 31));
        amount->setFont(font);
        amount->setStyleSheet(QString::fromUtf8("color:#FFFFFF"));
        requestBtn = new QPushButton(requestPage);
        requestBtn->setObjectName("requestBtn");
        requestBtn->setGeometry(QRect(40, 130, 141, 41));
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
        requestBtn->setPalette(palette2);
        requestBtn->setFont(font1);
        requestBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        cancelBtn = new QPushButton(requestPage);
        cancelBtn->setObjectName("cancelBtn");
        cancelBtn->setGeometry(QRect(190, 130, 141, 41));
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
        cancelBtn->setPalette(palette3);
        cancelBtn->setFont(font1);
        cancelBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        reqStatus = new QLabel(requestPage);
        reqStatus->setObjectName("reqStatus");
        reqStatus->setGeometry(QRect(110, 30, 151, 31));
        reqStatus->setFont(font);
        reqStatus->setStyleSheet(QString::fromUtf8("color:#FFFFFF"));
        reqStatus->setAlignment(Qt::AlignCenter);
        updateDataPage = new QWidget(centralWidget);
        updateDataPage->setObjectName("updateDataPage");
        updateDataPage->setGeometry(QRect(-10, 40, 621, 351));
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
        name_4->setFont(font);
        name_4->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        name_5 = new QLabel(updateDataPage);
        name_5->setObjectName("name_5");
        name_5->setGeometry(QRect(30, 70, 101, 51));
        name_5->setFont(font);
        name_5->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        hospitalFeild = new QLineEdit(updateDataPage);
        hospitalFeild->setObjectName("hospitalFeild");
        hospitalFeild->setGeometry(QRect(140, 140, 141, 28));
        name_6 = new QLabel(updateDataPage);
        name_6->setObjectName("name_6");
        name_6->setGeometry(QRect(30, 130, 81, 51));
        name_6->setFont(font);
        name_6->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        name_7 = new QLabel(updateDataPage);
        name_7->setObjectName("name_7");
        name_7->setGeometry(QRect(30, 190, 81, 51));
        name_7->setFont(font);
        name_7->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        doctorFeild = new QLineEdit(updateDataPage);
        doctorFeild->setObjectName("doctorFeild");
        doctorFeild->setGeometry(QRect(140, 200, 141, 28));
        emailFeild = new QLineEdit(updateDataPage);
        emailFeild->setObjectName("emailFeild");
        emailFeild->setGeometry(QRect(440, 20, 141, 28));
        emailFeild->setReadOnly(true);
        name_8 = new QLabel(updateDataPage);
        name_8->setObjectName("name_8");
        name_8->setGeometry(QRect(330, 10, 71, 51));
        name_8->setFont(font);
        name_8->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        name_9 = new QLabel(updateDataPage);
        name_9->setObjectName("name_9");
        name_9->setGeometry(QRect(330, 70, 91, 51));
        name_9->setFont(font);
        name_9->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        passwordFeild = new QLineEdit(updateDataPage);
        passwordFeild->setObjectName("passwordFeild");
        passwordFeild->setGeometry(QRect(440, 80, 141, 28));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        passwordFeild->setFont(font2);
        passwordFeild->setReadOnly(false);
        bloodTypeFeild = new QLineEdit(updateDataPage);
        bloodTypeFeild->setObjectName("bloodTypeFeild");
        bloodTypeFeild->setGeometry(QRect(470, 140, 111, 28));
        bloodTypeFeild->setReadOnly(true);
        name_10 = new QLabel(updateDataPage);
        name_10->setObjectName("name_10");
        name_10->setGeometry(QRect(330, 130, 111, 51));
        name_10->setFont(font);
        name_10->setStyleSheet(QString::fromUtf8("color:#FF5252"));
        updateBtn = new QPushButton(updateDataPage);
        updateBtn->setObjectName("updateBtn");
        updateBtn->setGeometry(QRect(320, 190, 101, 31));
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
        updateBtn->setPalette(palette4);
        updateBtn->setFont(font1);
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
        cancelEditBtn->setGeometry(QRect(450, 190, 101, 31));
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
        cancelEditBtn->setPalette(palette5);
        cancelEditBtn->setFont(font1);
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
        deleteBtn->setGeometry(QRect(320, 230, 101, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush);
        deleteBtn->setPalette(palette6);
        deleteBtn->setFont(font1);
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
        log_out->setGeometry(QRect(450, 230, 101, 31));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush);
        log_out->setPalette(palette7);
        log_out->setFont(font1);
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
        recipientPageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(recipientPageClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 25));
        recipientPageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(recipientPageClass);
        mainToolBar->setObjectName("mainToolBar");
        recipientPageClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(recipientPageClass);
        statusBar->setObjectName("statusBar");
        recipientPageClass->setStatusBar(statusBar);

        retranslateUi(recipientPageClass);
        QObject::connect(requestBloodBtn, &QPushButton::clicked, requestPage, qOverload<>(&QWidget::show));
        QObject::connect(cancelBtn, &QPushButton::clicked, requestPage, qOverload<>(&QWidget::hide));
        QObject::connect(cancelEditBtn, &QPushButton::clicked, updateDataPage, qOverload<>(&QWidget::hide));
        QObject::connect(showDataBtn, &QPushButton::clicked, updateDataPage, qOverload<>(&QWidget::show));

        QMetaObject::connectSlotsByName(recipientPageClass);
    } // setupUi

    void retranslateUi(QMainWindow *recipientPageClass)
    {
        recipientPageClass->setWindowTitle(QCoreApplication::translate("recipientPageClass", "recipientPage", nullptr));
        name->setText(QCoreApplication::translate("recipientPageClass", "Name: Ahmed", nullptr));
        requestBloodBtn->setText(QCoreApplication::translate("recipientPageClass", "Request Blood", nullptr));
        showDataBtn->setText(QCoreApplication::translate("recipientPageClass", "Show Data", nullptr));
        age->setText(QCoreApplication::translate("recipientPageClass", "Age: 20", nullptr));
        bloodType->setText(QCoreApplication::translate("recipientPageClass", "Blood Type: B+", nullptr));
        name_2->setText(QCoreApplication::translate("recipientPageClass", "Welcome", nullptr));
        name_3->setText(QCoreApplication::translate("recipientPageClass", "Bank", nullptr));
        amount->setText(QCoreApplication::translate("recipientPageClass", "# Bags", nullptr));
        requestBtn->setText(QCoreApplication::translate("recipientPageClass", "Request Blood", nullptr));
        cancelBtn->setText(QCoreApplication::translate("recipientPageClass", "Cancel", nullptr));
        reqStatus->setText(QString());
        name_4->setText(QCoreApplication::translate("recipientPageClass", "Name", nullptr));
        name_5->setText(QCoreApplication::translate("recipientPageClass", "Birth Date", nullptr));
        name_6->setText(QCoreApplication::translate("recipientPageClass", "Hospital", nullptr));
        name_7->setText(QCoreApplication::translate("recipientPageClass", "Doctor", nullptr));
        name_8->setText(QCoreApplication::translate("recipientPageClass", "Email", nullptr));
        name_9->setText(QCoreApplication::translate("recipientPageClass", "Password", nullptr));
        name_10->setText(QCoreApplication::translate("recipientPageClass", "Blood Type", nullptr));
        updateBtn->setText(QCoreApplication::translate("recipientPageClass", "update", nullptr));
        cancelEditBtn->setText(QCoreApplication::translate("recipientPageClass", "cancel", nullptr));
        deleteBtn->setText(QCoreApplication::translate("recipientPageClass", "Delete ", nullptr));
        log_out->setText(QCoreApplication::translate("recipientPageClass", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recipientPageClass: public Ui_recipientPageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPIENTPAGE_H
