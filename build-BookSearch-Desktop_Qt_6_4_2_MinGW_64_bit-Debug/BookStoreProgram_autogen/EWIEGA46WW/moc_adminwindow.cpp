/****************************************************************************
** Meta object code from reading C++ file 'adminwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../BookSearch/adminwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_adminwindow_t {
    uint offsetsAndSizes[14];
    char stringdata0[12];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[22];
    char stringdata5[24];
    char stringdata6[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_adminwindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_adminwindow_t qt_meta_stringdata_adminwindow = {
    {
        QT_MOC_LITERAL(0, 11),  // "adminwindow"
        QT_MOC_LITERAL(12, 27),  // "on_adminAddUserbttn_clicked"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 25),  // "on_changePassBttn_clicked"
        QT_MOC_LITERAL(67, 21),  // "on_importBttn_clicked"
        QT_MOC_LITERAL(89, 23),  // "on_addAdminbttn_clicked"
        QT_MOC_LITERAL(113, 19)   // "on_backbttn_clicked"
    },
    "adminwindow",
    "on_adminAddUserbttn_clicked",
    "",
    "on_changePassBttn_clicked",
    "on_importBttn_clicked",
    "on_addAdminbttn_clicked",
    "on_backbttn_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_adminwindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject adminwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_adminwindow.offsetsAndSizes,
    qt_meta_data_adminwindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_adminwindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<adminwindow, std::true_type>,
        // method 'on_adminAddUserbttn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_changePassBttn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_importBttn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addAdminbttn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backbttn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void adminwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<adminwindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_adminAddUserbttn_clicked(); break;
        case 1: _t->on_changePassBttn_clicked(); break;
        case 2: _t->on_importBttn_clicked(); break;
        case 3: _t->on_addAdminbttn_clicked(); break;
        case 4: _t->on_backbttn_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *adminwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adminwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_adminwindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int adminwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
