cmake_minimum_required(VERSION 3.5)

project(Blood-Bank VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
    main.cpp
            bloodbank.cpp
            bloodbank.h
            user.cpp
            user.h
            bloodbank.ui
            signup.cpp
            signup.h
            signup.ui
            forgotpassword.cpp
            forgotpassword.h
            forgotpassword.ui
            resources.qrc
            bloodBankClass.h
            bloodBankClass.cpp
            bloodClass.h
            bloodClass.cpp
            bloodRequestPage.cpp
            bloodRequestPage.h
            bloodRequestPage.ui
            donorClass.h
            donorClass.cpp
            emailClass.h
            emailClass.cpp
            recipientPage.h
            recipientPage.cpp
            recipientPage.ui
            userClass.h
            userClass.cpp
            RecipientClass.h
            RecipientClass.cpp
            bloodTypes.h

)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Blood-Bank
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Blood-Bank APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Blood-Bank SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Blood-Bank
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Blood-Bank PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(Blood-Bank PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS Blood-Bank
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Blood-Bank)
endif()
