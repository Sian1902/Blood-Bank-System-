/********************************************************************************
** Form generated from reading UI file 'bloodbank.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOODBANK_H
#define UI_BLOODBANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BloodBank
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *emailLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *passwordLineEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *loginBtn;
    QPushButton *forgotThePasswordBtn_2;
    QPushButton *forgotThePasswordBtn;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *BloodBank)
    {
        if (BloodBank->objectName().isEmpty())
            BloodBank->setObjectName("BloodBank");
        BloodBank->resize(1024, 680);
        BloodBank->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(BloodBank);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, -1, 10, 10);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/img/icons8-sphere-48.png);"));
        pushButton->setFlat(true);

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/img/icons8-sphere-48 (1).png);"));
        pushButton_2->setCheckable(false);
        pushButton_2->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/img/icons8-sphere-48 (2).png);"));
        pushButton_3->setCheckable(false);
        pushButton_3->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("image: url(:/img/icons8-sphere-48 (1).png);"));
        pushButton_4->setCheckable(false);
        pushButton_4->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("image: url(:/img/icons8-sphere-48 (3).png);"));
        pushButton_5->setCheckable(false);
        pushButton_5->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout_3);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(false);
        font.setStrikeOut(false);
        label->setFont(font);
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setAlignment(Qt::AlignCenter);
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setCursor(QCursor(Qt::ArrowCursor));
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label_2);

        emailLineEdit = new QLineEdit(centralwidget);
        emailLineEdit->setObjectName("emailLineEdit");

        horizontalLayout->addWidget(emailLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setCursor(QCursor(Qt::ArrowCursor));
        label_3->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(label_3);

        passwordLineEdit = new QLineEdit(centralwidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setMaximumSize(QSize(300, 75));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        radioButton = new QRadioButton(groupBox);
        buttonGroup = new QButtonGroup(BloodBank);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName("radioButton");
        radioButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(radioButton_2);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        loginBtn = new QPushButton(centralwidget);
        loginBtn->setObjectName("loginBtn");
        loginBtn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(loginBtn);

        forgotThePasswordBtn_2 = new QPushButton(centralwidget);
        forgotThePasswordBtn_2->setObjectName("forgotThePasswordBtn_2");
        forgotThePasswordBtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        forgotThePasswordBtn_2->setFlat(true);

        verticalLayout->addWidget(forgotThePasswordBtn_2);

        forgotThePasswordBtn = new QPushButton(centralwidget);
        forgotThePasswordBtn->setObjectName("forgotThePasswordBtn");
        forgotThePasswordBtn->setCursor(QCursor(Qt::PointingHandCursor));
        forgotThePasswordBtn->setFlat(true);

        verticalLayout->addWidget(forgotThePasswordBtn);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        BloodBank->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BloodBank);
        statusbar->setObjectName("statusbar");
        BloodBank->setStatusBar(statusbar);
        QWidget::setTabOrder(emailLineEdit, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, radioButton);
        QWidget::setTabOrder(radioButton, radioButton_2);
        QWidget::setTabOrder(radioButton_2, loginBtn);
        QWidget::setTabOrder(loginBtn, forgotThePasswordBtn_2);
        QWidget::setTabOrder(forgotThePasswordBtn_2, forgotThePasswordBtn);
        QWidget::setTabOrder(forgotThePasswordBtn, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);

        retranslateUi(BloodBank);

        QMetaObject::connectSlotsByName(BloodBank);
    } // setupUi

    void retranslateUi(QMainWindow *BloodBank)
    {
        BloodBank->setWindowTitle(QCoreApplication::translate("BloodBank", "BloodBank", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("BloodBank", "Red theme", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QCoreApplication::translate("BloodBank", "Dark mode", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_2->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("BloodBank", "Green theme", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_4->setToolTip(QCoreApplication::translate("BloodBank", "Dark orange mode", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_4->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_5->setToolTip(QCoreApplication::translate("BloodBank", "LightRR mode", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_5->setText(QString());
        label->setText(QCoreApplication::translate("BloodBank", "Blood Bank", nullptr));
        label_2->setText(QCoreApplication::translate("BloodBank", "Email", nullptr));
        emailLineEdit->setPlaceholderText(QCoreApplication::translate("BloodBank", "Acceptable format: ex@ex.com", nullptr));
        label_3->setText(QCoreApplication::translate("BloodBank", "Password", nullptr));
        passwordLineEdit->setPlaceholderText(QString());
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QCoreApplication::translate("BloodBank", "Specify account type", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("BloodBank", "Account Type", nullptr));
#if QT_CONFIG(whatsthis)
        radioButton->setWhatsThis(QCoreApplication::translate("BloodBank", "<html><head/><body><p>whats this</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        radioButton->setText(QCoreApplication::translate("BloodBank", "Donor", nullptr));
#if QT_CONFIG(whatsthis)
        radioButton_2->setWhatsThis(QCoreApplication::translate("BloodBank", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        radioButton_2->setText(QCoreApplication::translate("BloodBank", "Recipient", nullptr));
        loginBtn->setText(QCoreApplication::translate("BloodBank", "Login", nullptr));
#if QT_CONFIG(shortcut)
        loginBtn->setShortcut(QCoreApplication::translate("BloodBank", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        forgotThePasswordBtn_2->setText(QCoreApplication::translate("BloodBank", "Forgot the password?", nullptr));
        forgotThePasswordBtn->setText(QCoreApplication::translate("BloodBank", "Don't have an accout, Signup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BloodBank: public Ui_BloodBank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOODBANK_H
