/****************************************************************************
** Meta object code from reading C++ file 'recipientPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Blood-Bank/recipientPage.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recipientPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSrecipientPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSrecipientPageENDCLASS = QtMocHelpers::stringData(
    "recipientPage",
    "on_requestBtn_clicked",
    "",
    "on_updateBtn_clicked",
    "closeEvent",
    "QCloseEvent*",
    "event",
    "on_cancelEditBtn_clicked",
    "on_deleteBtn_clicked",
    "on_log_out_clicked",
    "on_pushButton_clicked",
    "on_tableWidget_cellDoubleClicked",
    "row",
    "column"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSrecipientPageENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[14];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[11];
    char stringdata5[13];
    char stringdata6[6];
    char stringdata7[25];
    char stringdata8[21];
    char stringdata9[19];
    char stringdata10[22];
    char stringdata11[33];
    char stringdata12[4];
    char stringdata13[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSrecipientPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSrecipientPageENDCLASS_t qt_meta_stringdata_CLASSrecipientPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "recipientPage"
        QT_MOC_LITERAL(14, 21),  // "on_requestBtn_clicked"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 20),  // "on_updateBtn_clicked"
        QT_MOC_LITERAL(58, 10),  // "closeEvent"
        QT_MOC_LITERAL(69, 12),  // "QCloseEvent*"
        QT_MOC_LITERAL(82, 5),  // "event"
        QT_MOC_LITERAL(88, 24),  // "on_cancelEditBtn_clicked"
        QT_MOC_LITERAL(113, 20),  // "on_deleteBtn_clicked"
        QT_MOC_LITERAL(134, 18),  // "on_log_out_clicked"
        QT_MOC_LITERAL(153, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(175, 32),  // "on_tableWidget_cellDoubleClicked"
        QT_MOC_LITERAL(208, 3),  // "row"
        QT_MOC_LITERAL(212, 6)   // "column"
    },
    "recipientPage",
    "on_requestBtn_clicked",
    "",
    "on_updateBtn_clicked",
    "closeEvent",
    "QCloseEvent*",
    "event",
    "on_cancelEditBtn_clicked",
    "on_deleteBtn_clicked",
    "on_log_out_clicked",
    "on_pushButton_clicked",
    "on_tableWidget_cellDoubleClicked",
    "row",
    "column"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSrecipientPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    1,   64,    2, 0x08,    3 /* Private */,
       7,    0,   67,    2, 0x08,    5 /* Private */,
       8,    0,   68,    2, 0x08,    6 /* Private */,
       9,    0,   69,    2, 0x08,    7 /* Private */,
      10,    0,   70,    2, 0x08,    8 /* Private */,
      11,    2,   71,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject recipientPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSrecipientPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSrecipientPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSrecipientPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<recipientPage, std::true_type>,
        // method 'on_requestBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCloseEvent *, std::false_type>,
        // method 'on_cancelEditBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deleteBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_log_out_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableWidget_cellDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void recipientPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<recipientPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_requestBtn_clicked(); break;
        case 1: _t->on_updateBtn_clicked(); break;
        case 2: _t->closeEvent((*reinterpret_cast< std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 3: _t->on_cancelEditBtn_clicked(); break;
        case 4: _t->on_deleteBtn_clicked(); break;
        case 5: _t->on_log_out_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_tableWidget_cellDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *recipientPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *recipientPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSrecipientPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int recipientPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
