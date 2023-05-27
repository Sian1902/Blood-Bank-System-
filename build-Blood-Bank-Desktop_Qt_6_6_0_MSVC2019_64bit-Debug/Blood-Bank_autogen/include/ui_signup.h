/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_6;
    QDateEdit *dateEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QHBoxLayout *horizontalLayout_15;
    QWidget *widget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QComboBox *comboBox;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QDateEdit *dateEdit_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_12;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_7;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_9;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_3;
    QButtonGroup *buttonGroup_2;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->setWindowModality(Qt::NonModal);
        SignUp->resize(800, 600);
        gridLayout_6 = new QGridLayout(SignUp);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label = new QLabel(SignUp);
        label->setObjectName("label");
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_7->addWidget(label);

        lineEdit = new QLineEdit(SignUp);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_7->addWidget(lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_2 = new QLabel(SignUp);
        label_2->setObjectName("label_2");
        label_2->setCursor(QCursor(Qt::ArrowCursor));
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_8->addWidget(label_2);

        lineEdit_2 = new QLineEdit(SignUp);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_8->addWidget(lineEdit_2);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_8 = new QLabel(SignUp);
        label_8->setObjectName("label_8");
        label_8->setCursor(QCursor(Qt::ArrowCursor));
        label_8->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_9->addWidget(label_8);

        lineEdit_6 = new QLineEdit(SignUp);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setMaxLength(4);

        horizontalLayout_9->addWidget(lineEdit_6);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_3 = new QLabel(SignUp);
        label_3->setObjectName("label_3");
        label_3->setCursor(QCursor(Qt::ArrowCursor));
        label_3->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_10->addWidget(label_3);

        lineEdit_3 = new QLineEdit(SignUp);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setEchoMode(QLineEdit::Password);

        horizontalLayout_10->addWidget(lineEdit_3);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_4 = new QLabel(SignUp);
        label_4->setObjectName("label_4");
        label_4->setCursor(QCursor(Qt::ArrowCursor));
        label_4->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_11->addWidget(label_4);

        lineEdit_4 = new QLineEdit(SignUp);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setEchoMode(QLineEdit::Password);

        horizontalLayout_11->addWidget(lineEdit_4);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_6 = new QLabel(SignUp);
        label_6->setObjectName("label_6");
        label_6->setCursor(QCursor(Qt::ArrowCursor));
        label_6->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_12->addWidget(label_6);

        dateEdit = new QDateEdit(SignUp);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout_12->addWidget(dateEdit);


        verticalLayout_3->addLayout(horizontalLayout_12);

        groupBox = new QGroupBox(SignUp);
        groupBox->setObjectName("groupBox");
        groupBox->setMaximumSize(QSize(300, 75));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        radioButton = new QRadioButton(groupBox);
        buttonGroup_3 = new QButtonGroup(SignUp);
        buttonGroup_3->setObjectName("buttonGroup_3");
        buttonGroup_3->addButton(radioButton);
        radioButton->setObjectName("radioButton");
        radioButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_13->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        buttonGroup_3->addButton(radioButton_2);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_13->addWidget(radioButton_2);


        gridLayout_3->addLayout(horizontalLayout_13, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        groupBox_3 = new QGroupBox(SignUp);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setMaximumSize(QSize(300, 75));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        radioButton_5 = new QRadioButton(groupBox_3);
        buttonGroup_2 = new QButtonGroup(SignUp);
        buttonGroup_2->setObjectName("buttonGroup_2");
        buttonGroup_2->addButton(radioButton_5);
        radioButton_5->setObjectName("radioButton_5");
        radioButton_5->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_14->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(groupBox_3);
        buttonGroup_2->addButton(radioButton_6);
        radioButton_6->setObjectName("radioButton_6");
        radioButton_6->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_14->addWidget(radioButton_6);


        gridLayout_4->addLayout(horizontalLayout_14, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_3);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        widget = new QWidget(SignUp);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setCursor(QCursor(Qt::ArrowCursor));
        label_9->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_6->addWidget(label_9);

        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName("lineEdit_7");

        horizontalLayout_6->addWidget(lineEdit_7);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");

        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setCursor(QCursor(Qt::ArrowCursor));
        label_7->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_5->addWidget(label_7);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(comboBox);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        horizontalLayout_15->addWidget(widget);

        widget_2 = new QWidget(SignUp);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_10 = new QLabel(widget_2);
        label_10->setObjectName("label_10");
        label_10->setCursor(QCursor(Qt::ArrowCursor));
        label_10->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label_10);

        dateEdit_2 = new QDateEdit(widget_2);
        dateEdit_2->setObjectName("dateEdit_2");

        horizontalLayout->addWidget(dateEdit_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_12 = new QLabel(widget_2);
        label_12->setObjectName("label_12");
        label_12->setCursor(QCursor(Qt::ArrowCursor));
        label_12->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(label_12);

        comboBox_2 = new QComboBox(widget_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_11 = new QLabel(widget_2);
        label_11->setObjectName("label_11");
        label_11->setCursor(QCursor(Qt::ArrowCursor));
        label_11->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(label_11);

        lineEdit_8 = new QLineEdit(widget_2);
        lineEdit_8->setObjectName("lineEdit_8");

        horizontalLayout_3->addWidget(lineEdit_8);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        horizontalLayout_15->addWidget(widget_2);


        verticalLayout_3->addLayout(horizontalLayout_15);

        pushButton = new QPushButton(SignUp);
        pushButton->setObjectName("pushButton");
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setAutoDefault(false);

        verticalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(SignUp);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(pushButton_2);


        gridLayout_5->addLayout(verticalLayout_3, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(SignUp);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMinimumSize(QSize(100, 0));
        groupBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox_2->setFlat(false);
        gridLayout_7 = new QGridLayout(groupBox_2);
        gridLayout_7->setObjectName("gridLayout_7");
        radioButton_14 = new QRadioButton(groupBox_2);
        buttonGroup = new QButtonGroup(SignUp);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(radioButton_14);
        radioButton_14->setObjectName("radioButton_14");
        radioButton_14->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_7->addWidget(radioButton_14, 0, 0, 1, 1);

        radioButton_4 = new QRadioButton(groupBox_2);
        buttonGroup->addButton(radioButton_4);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_7->addWidget(radioButton_4, 4, 0, 1, 1);

        radioButton_3 = new QRadioButton(groupBox_2);
        buttonGroup->addButton(radioButton_3);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_7->addWidget(radioButton_3, 3, 0, 1, 1);

        radioButton_8 = new QRadioButton(groupBox_2);
        buttonGroup->addButton(radioButton_8);
        radioButton_8->setObjectName("radioButton_8");
        radioButton_8->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_7->addWidget(radioButton_8, 5, 0, 1, 1);

        radioButton_12 = new QRadioButton(groupBox_2);
        buttonGroup->addButton(radioButton_12);
        radioButton_12->setObjectName("radioButton_12");
        radioButton_12->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_7->addWidget(radioButton_12, 6, 0, 1, 1);

        radioButton_13 = new QRadioButton(groupBox_2);
        buttonGroup->addButton(radioButton_13);
        radioButton_13->setObjectName("radioButton_13");
        radioButton_13->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_7->addWidget(radioButton_13, 2, 0, 1, 1);

        radioButton_10 = new QRadioButton(groupBox_2);
        buttonGroup->addButton(radioButton_10);
        radioButton_10->setObjectName("radioButton_10");
        radioButton_10->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_7->addWidget(radioButton_10, 7, 0, 1, 1);

        radioButton_9 = new QRadioButton(groupBox_2);
        buttonGroup->addButton(radioButton_9);
        radioButton_9->setObjectName("radioButton_9");
        radioButton_9->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_7->addWidget(radioButton_9, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);

        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, dateEdit);
        QWidget::setTabOrder(dateEdit, radioButton);
        QWidget::setTabOrder(radioButton, radioButton_2);
        QWidget::setTabOrder(radioButton_2, radioButton_5);
        QWidget::setTabOrder(radioButton_5, radioButton_6);
        QWidget::setTabOrder(radioButton_6, lineEdit_7);
        QWidget::setTabOrder(lineEdit_7, comboBox);
        QWidget::setTabOrder(comboBox, dateEdit_2);
        QWidget::setTabOrder(dateEdit_2, comboBox_2);
        QWidget::setTabOrder(comboBox_2, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, radioButton_14);
        QWidget::setTabOrder(radioButton_14, radioButton_9);
        QWidget::setTabOrder(radioButton_9, radioButton_13);
        QWidget::setTabOrder(radioButton_13, radioButton_3);
        QWidget::setTabOrder(radioButton_3, radioButton_4);
        QWidget::setTabOrder(radioButton_4, radioButton_8);
        QWidget::setTabOrder(radioButton_8, radioButton_12);
        QWidget::setTabOrder(radioButton_12, radioButton_10);
        QWidget::setTabOrder(radioButton_10, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(SignUp);
        QObject::connect(radioButton, &QRadioButton::clicked, widget, qOverload<>(&QWidget::hide));
        QObject::connect(radioButton, &QRadioButton::clicked, widget_2, qOverload<>(&QWidget::show));
        QObject::connect(radioButton_2, &QRadioButton::clicked, widget, qOverload<>(&QWidget::show));
        QObject::connect(radioButton_2, &QRadioButton::clicked, widget_2, qOverload<>(&QWidget::hide));

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "Name", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("SignUp", "First name only", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "Email", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("SignUp", "Acceptable format: ex@ex.com", nullptr));
        label_8->setText(QCoreApplication::translate("SignUp", " ID", nullptr));
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("SignUp", "No spaces", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "Password", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("SignUp", "No spaces", nullptr));
        label_4->setText(QCoreApplication::translate("SignUp", "Confirm Password", nullptr));
        label_6->setText(QCoreApplication::translate("SignUp", "Date of birth", nullptr));
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QCoreApplication::translate("SignUp", "Specify wanted account type", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("SignUp", "Account Type", nullptr));
        radioButton->setText(QCoreApplication::translate("SignUp", "Donor", nullptr));
        radioButton_2->setText(QCoreApplication::translate("SignUp", "Recipient", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_3->setToolTip(QCoreApplication::translate("SignUp", "Specify your gender", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_3->setTitle(QCoreApplication::translate("SignUp", "Gender", nullptr));
        radioButton_5->setText(QCoreApplication::translate("SignUp", "Male", nullptr));
        radioButton_6->setText(QCoreApplication::translate("SignUp", "Female", nullptr));
        label_9->setText(QCoreApplication::translate("SignUp", "Doctor of case", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_7->setToolTip(QCoreApplication::translate("SignUp", "The first name of the responsible doctor of the case", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_7->setPlaceholderText(QCoreApplication::translate("SignUp", "First name only", nullptr));
        label_7->setText(QCoreApplication::translate("SignUp", "Hospital", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("SignUp", "hopital_1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("SignUp", "hopital_2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("SignUp", "hopital_3", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("SignUp", "hopital_4", nullptr));

        label_10->setText(QCoreApplication::translate("SignUp", "Date of last donation", nullptr));
        label_12->setText(QCoreApplication::translate("SignUp", "Disease", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("SignUp", "Blood pressure disorder", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("SignUp", "Thyroid disease", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("SignUp", "Diabetes", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("SignUp", "Cancer", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("SignUp", "Heart disorders", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("SignUp", "Hepatitis", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("SignUp", "None", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_2->setToolTip(QCoreApplication::translate("SignUp", "Select the disease you suffer from", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("SignUp", "Other diseases or medicines", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        lineEdit_8->setPlaceholderText(QCoreApplication::translate("SignUp", "If none type: \"NA\"", nullptr));
        pushButton->setText(QCoreApplication::translate("SignUp", "Back to login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SignUp", "Signup", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_2->setShortcut(QCoreApplication::translate("SignUp", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        groupBox_2->setToolTip(QCoreApplication::translate("SignUp", "Specify your blood type", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("SignUp", "Blood Type", nullptr));
        radioButton_14->setText(QCoreApplication::translate("SignUp", "A+", nullptr));
        radioButton_4->setText(QCoreApplication::translate("SignUp", "AB+", nullptr));
        radioButton_3->setText(QCoreApplication::translate("SignUp", "B-", nullptr));
        radioButton_8->setText(QCoreApplication::translate("SignUp", "AB-", nullptr));
        radioButton_12->setText(QCoreApplication::translate("SignUp", "O+", nullptr));
        radioButton_13->setText(QCoreApplication::translate("SignUp", "B+", nullptr));
        radioButton_10->setText(QCoreApplication::translate("SignUp", "O-", nullptr));
        radioButton_9->setText(QCoreApplication::translate("SignUp", "A-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
