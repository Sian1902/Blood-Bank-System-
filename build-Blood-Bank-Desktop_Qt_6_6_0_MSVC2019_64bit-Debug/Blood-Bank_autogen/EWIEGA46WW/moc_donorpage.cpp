/****************************************************************************
** Meta object code from reading C++ file 'donorpage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Blood-Bank/donorpage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'donorpage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDonorPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDonorPageENDCLASS = QtMocHelpers::stringData(
    "DonorPage",
    "closeEvent",
    "",
    "QCloseEvent*",
    "event",
    "on_donateBtn_clicked",
    "on_log_out_clicked",
    "on_updateBtn_clicked",
    "on_cancelEditBtn_clicked",
    "on_deleteBtn_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDonorPageENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[10];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[6];
    char stringdata5[21];
    char stringdata6[19];
    char stringdata7[21];
    char stringdata8[25];
    char stringdata9[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDonorPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDonorPageENDCLASS_t qt_meta_stringdata_CLASSDonorPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "DonorPage"
        QT_MOC_LITERAL(10, 10),  // "closeEvent"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 12),  // "QCloseEvent*"
        QT_MOC_LITERAL(35, 5),  // "event"
        QT_MOC_LITERAL(41, 20),  // "on_donateBtn_clicked"
        QT_MOC_LITERAL(62, 18),  // "on_log_out_clicked"
        QT_MOC_LITERAL(81, 20),  // "on_updateBtn_clicked"
        QT_MOC_LITERAL(102, 24),  // "on_cancelEditBtn_clicked"
        QT_MOC_LITERAL(127, 20)   // "on_deleteBtn_clicked"
    },
    "DonorPage",
    "closeEvent",
    "",
    "QCloseEvent*",
    "event",
    "on_donateBtn_clicked",
    "on_log_out_clicked",
    "on_updateBtn_clicked",
    "on_cancelEditBtn_clicked",
    "on_deleteBtn_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDonorPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x08,    1 /* Private */,
       5,    0,   53,    2, 0x08,    3 /* Private */,
       6,    0,   54,    2, 0x08,    4 /* Private */,
       7,    0,   55,    2, 0x08,    5 /* Private */,
       8,    0,   56,    2, 0x08,    6 /* Private */,
       9,    0,   57,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DonorPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSDonorPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDonorPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDonorPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DonorPage, std::true_type>,
        // method 'closeEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCloseEvent *, std::false_type>,
        // method 'on_donateBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_log_out_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cancelEditBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deleteBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DonorPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DonorPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeEvent((*reinterpret_cast< std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 1: _t->on_donateBtn_clicked(); break;
        case 2: _t->on_log_out_clicked(); break;
        case 3: _t->on_updateBtn_clicked(); break;
        case 4: _t->on_cancelEditBtn_clicked(); break;
        case 5: _t->on_deleteBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *DonorPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DonorPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDonorPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int DonorPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
