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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QDateEdit *dateEdit;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_3;
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
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-100, 0, 941, 71));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(170, 0, 0, 255));"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 150, 81, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 220, 63, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 300, 131, 41));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(130, 150, 391, 28));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(110, 230, 61, 28));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(580, 230, 131, 29));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(340, 230, 241, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 410, 171, 61));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(170, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(470, 410, 171, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(170, 0, 0, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(180, 310, 113, 28));
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
        label->setText(QCoreApplication::translate("DonorPage", "                                                 Donor", nullptr));
        label_2->setText(QCoreApplication::translate("DonorPage", "Name :", nullptr));
        label_3->setText(QCoreApplication::translate("DonorPage", "Age :", nullptr));
        label_4->setText(QCoreApplication::translate("DonorPage", "Blood Type :", nullptr));
        lineEdit->setText(QString());
        label_5->setText(QCoreApplication::translate("DonorPage", "last time blood  Donor :", nullptr));
        pushButton->setText(QCoreApplication::translate("DonorPage", "Donor", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DonorPage", "Cancel", nullptr));
        menuDonor->setTitle(QCoreApplication::translate("DonorPage", "Donor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DonorPage: public Ui_DonorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONORPAGE_H
