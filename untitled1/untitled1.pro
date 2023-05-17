QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../GitHub/Blood-Bank-System-/Blood-Bank/RecipientClass.cpp \
    ../GitHub/Blood-Bank-System-/Blood-Bank/bloodBankClass.cpp \
    ../GitHub/Blood-Bank-System-/Blood-Bank/bloodClass.cpp \
    ../GitHub/Blood-Bank-System-/Blood-Bank/bloodbank.cpp \
    ../GitHub/Blood-Bank-System-/Blood-Bank/donorClass.cpp \
    ../GitHub/Blood-Bank-System-/Blood-Bank/donorpage.cpp \
    ../GitHub/Blood-Bank-System-/Blood-Bank/emailClass.cpp \
    ../GitHub/Blood-Bank-System-/Blood-Bank/forgotpassword.cpp \
    ../GitHub/Blood-Bank-System-/Blood-Bank/main.cpp \
    ../GitHub/Blood-Bank-System-/Blood-Bank/mainwindow.cpp \
    ../GitHub/Blood-Bank-System-/Blood-Bank/recipientPage.cpp \
    ../GitHub/Blood-Bank-System-/Blood-Bank/signup.cpp \
    ../GitHub/Blood-Bank-System-/Blood-Bank/user.cpp \
    ../GitHub/Blood-Bank-System-/Blood-Bank/userClass.cpp

HEADERS += \
    ../GitHub/Blood-Bank-System-/Blood-Bank/RecipientClass.h \
    ../GitHub/Blood-Bank-System-/Blood-Bank/bloodBankClass.h \
    ../GitHub/Blood-Bank-System-/Blood-Bank/bloodClass.h \
    ../GitHub/Blood-Bank-System-/Blood-Bank/bloodTypes.h \
    ../GitHub/Blood-Bank-System-/Blood-Bank/bloodbank.h \
    ../GitHub/Blood-Bank-System-/Blood-Bank/donorClass.h \
    ../GitHub/Blood-Bank-System-/Blood-Bank/donorpage.h \
    ../GitHub/Blood-Bank-System-/Blood-Bank/emailClass.h \
    ../GitHub/Blood-Bank-System-/Blood-Bank/forgotpassword.h \
    ../GitHub/Blood-Bank-System-/Blood-Bank/mainwindow.h \
    ../GitHub/Blood-Bank-System-/Blood-Bank/recipientPage.h \
    ../GitHub/Blood-Bank-System-/Blood-Bank/signup.h \
    ../GitHub/Blood-Bank-System-/Blood-Bank/user.h \
    ../GitHub/Blood-Bank-System-/Blood-Bank/userClass.h

FORMS += \
    ../GitHub/Blood-Bank-System-/Blood-Bank/bloodbank.ui \
    ../GitHub/Blood-Bank-System-/Blood-Bank/donorpage.ui \
    ../GitHub/Blood-Bank-System-/Blood-Bank/forgotpassword.ui \
    ../GitHub/Blood-Bank-System-/Blood-Bank/mainwindow.ui \
    ../GitHub/Blood-Bank-System-/Blood-Bank/recipientPage.ui \
    ../GitHub/Blood-Bank-System-/Blood-Bank/sign_up.ui \
    ../GitHub/Blood-Bank-System-/Blood-Bank/signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ../GitHub/Blood-Bank-System-/Blood-Bank/resources.qrc

DISTFILES += \
    ../GitHub/Blood-Bank-System-/Blood-Bank/CMakeLists.txt \
    ../GitHub/Blood-Bank-System-/Blood-Bank/CMakeLists.txt.user \
    ../GitHub/Blood-Bank-System-/Blood-Bank/icons8-sphere-48 (1).png \
    ../GitHub/Blood-Bank-System-/Blood-Bank/icons8-sphere-48 (1).png \
    ../GitHub/Blood-Bank-System-/Blood-Bank/icons8-sphere-48 (1).png \
    ../GitHub/Blood-Bank-System-/Blood-Bank/icons8-sphere-48 (1).png \
    ../GitHub/Blood-Bank-System-/Blood-Bank/icons8-sphere-48 (1).png \
    ../GitHub/Blood-Bank-System-/Blood-Bank/icons8-sphere-48 (1).png \
    ../GitHub/Blood-Bank-System-/Blood-Bank/icons8-sphere-48 (2).png \
    ../GitHub/Blood-Bank-System-/Blood-Bank/icons8-sphere-48 (2).png \
    ../GitHub/Blood-Bank-System-/Blood-Bank/icons8-sphere-48 (2).png \
    ../GitHub/Blood-Bank-System-/Blood-Bank/icons8-sphere-48 (3).png \
    ../GitHub/Blood-Bank-System-/Blood-Bank/icons8-sphere-48 (3).png \
    ../GitHub/Blood-Bank-System-/Blood-Bank/icons8-sphere-48 (3).png \
    ../GitHub/Blood-Bank-System-/Blood-Bank/icons8-sphere-48.png
