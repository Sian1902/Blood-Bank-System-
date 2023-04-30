/********************************************************************************
** Form generated from reading UI file 'forgotpassword.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASSWORD_H
#define UI_FORGOTPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ForgotPassword
{
public:
    QWidget *widget;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *ForgotPassword)
    {
        if (ForgotPassword->objectName().isEmpty())
            ForgotPassword->setObjectName("ForgotPassword");
        ForgotPassword->resize(1024, 680);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ForgotPassword->sizePolicy().hasHeightForWidth());
        ForgotPassword->setSizePolicy(sizePolicy);
        widget = new QWidget(ForgotPassword);
        widget->setObjectName("widget");
        widget->setEnabled(true);
        widget->setGeometry(QRect(350, 410, 300, 119));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMaximumSize(QSize(16777215, 16777215));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(11, 79, 112, 29));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(116, 12, 149, 25));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(12, 12, 97, 20));
        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(139, 46, 149, 25));
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(12, 46, 120, 20));
        pushButton = new QPushButton(ForgotPassword);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 218, 119, 29));
        comboBox = new QComboBox(ForgotPassword);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(307, 151, 472, 25));
        label = new QLabel(ForgotPassword);
        label->setObjectName("label");
        label->setGeometry(QRect(241, 151, 59, 20));
        label_2 = new QLabel(ForgotPassword);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(241, 185, 48, 20));
        lineEdit = new QLineEdit(ForgotPassword);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(296, 185, 149, 25));

        retranslateUi(ForgotPassword);
        QObject::connect(pushButton, &QPushButton::clicked, widget, qOverload<>(&QWidget::show));

        QMetaObject::connectSlotsByName(ForgotPassword);
    } // setupUi

    void retranslateUi(QDialog *ForgotPassword)
    {
        ForgotPassword->setWindowTitle(QCoreApplication::translate("ForgotPassword", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ForgotPassword", "Reset password", nullptr));
        label_3->setText(QCoreApplication::translate("ForgotPassword", "New password", nullptr));
        label_4->setText(QCoreApplication::translate("ForgotPassword", "Confirm password", nullptr));
        pushButton->setText(QCoreApplication::translate("ForgotPassword", "Go back to login", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ForgotPassword", "What is your mother's maiden name?", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ForgotPassword", "What is the name of your first pet?", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("ForgotPassword", "What was your first car?", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("ForgotPassword", "What elementary school did you attend?", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("ForgotPassword", "What is the name of the town where you were born?", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("ForgotPassword", "When you were young, what did you want to be when you grew up?", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("ForgotPassword", "Who was your childhood hero?", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("ForgotPassword", "Where was your best family vacation as a kid?", nullptr));

        label->setText(QCoreApplication::translate("ForgotPassword", "Question", nullptr));
        label_2->setText(QCoreApplication::translate("ForgotPassword", "Answer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ForgotPassword: public Ui_ForgotPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
