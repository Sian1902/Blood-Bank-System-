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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *recipientPageClass)
    {
        if (recipientPageClass->objectName().isEmpty())
            recipientPageClass->setObjectName("recipientPageClass");
        recipientPageClass->resize(600, 400);
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
        QBrush brush2(QColor(120, 120, 120, 255));
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
        recipientPageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(recipientPageClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        recipientPageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(recipientPageClass);
        mainToolBar->setObjectName("mainToolBar");
        recipientPageClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(recipientPageClass);
        statusBar->setObjectName("statusBar");
        recipientPageClass->setStatusBar(statusBar);

        retranslateUi(recipientPageClass);

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
    } // retranslateUi

};

namespace Ui {
    class recipientPageClass: public Ui_recipientPageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPIENTPAGE_H
