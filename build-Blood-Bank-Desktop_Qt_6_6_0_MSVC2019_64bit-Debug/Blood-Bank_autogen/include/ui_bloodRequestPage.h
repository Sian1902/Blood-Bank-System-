/********************************************************************************
** Form generated from reading UI file 'bloodRequestPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOODREQUESTPAGE_H
#define UI_BLOODREQUESTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bloodRequestPageClass
{
public:
    QWidget *centralWidget;
    QPushButton *requestBtn;
    QLabel *label;
    QLabel *stateTxt;
    QLineEdit *amount;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *bloodRequestPageClass)
    {
        if (bloodRequestPageClass->objectName().isEmpty())
            bloodRequestPageClass->setObjectName("bloodRequestPageClass");
        bloodRequestPageClass->resize(614, 316);
        centralWidget = new QWidget(bloodRequestPageClass);
        centralWidget->setObjectName("centralWidget");
        requestBtn = new QPushButton(centralWidget);
        requestBtn->setObjectName("requestBtn");
        requestBtn->setGeometry(QRect(240, 200, 141, 41));
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
        requestBtn->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(16);
        requestBtn->setFont(font);
        requestBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}"));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 120, 111, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(20);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8(" color: #FF5252 ;"));
        stateTxt = new QLabel(centralWidget);
        stateTxt->setObjectName("stateTxt");
        stateTxt->setGeometry(QRect(280, 60, 111, 51));
        stateTxt->setFont(font1);
        stateTxt->setStyleSheet(QString::fromUtf8(" color: #FF5252 ;"));
        amount = new QLineEdit(centralWidget);
        amount->setObjectName("amount");
        amount->setGeometry(QRect(260, 130, 131, 31));
        bloodRequestPageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(bloodRequestPageClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 614, 26));
        bloodRequestPageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(bloodRequestPageClass);
        mainToolBar->setObjectName("mainToolBar");
        bloodRequestPageClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(bloodRequestPageClass);
        statusBar->setObjectName("statusBar");
        bloodRequestPageClass->setStatusBar(statusBar);

        retranslateUi(bloodRequestPageClass);

        QMetaObject::connectSlotsByName(bloodRequestPageClass);
    } // setupUi

    void retranslateUi(QMainWindow *bloodRequestPageClass)
    {
        bloodRequestPageClass->setWindowTitle(QCoreApplication::translate("bloodRequestPageClass", "bloodRequestPage", nullptr));
        requestBtn->setText(QCoreApplication::translate("bloodRequestPageClass", "Request", nullptr));
        label->setText(QCoreApplication::translate("bloodRequestPageClass", "Amount", nullptr));
        stateTxt->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bloodRequestPageClass: public Ui_bloodRequestPageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOODREQUESTPAGE_H
