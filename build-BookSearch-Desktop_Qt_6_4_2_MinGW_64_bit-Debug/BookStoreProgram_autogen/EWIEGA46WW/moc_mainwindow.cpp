/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../BookSearch/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[8];
    char stringdata5[6];
    char stringdata6[17];
    char stringdata7[5];
    char stringdata8[6];
    char stringdata9[24];
    char stringdata10[23];
    char stringdata11[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 20),  // "on_btnSearch_clicked"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 14),  // "writeToLogFile"
        QT_MOC_LITERAL(48, 7),  // "message"
        QT_MOC_LITERAL(56, 5),  // "about"
        QT_MOC_LITERAL(62, 16),  // "getNumberOfBooks"
        QT_MOC_LITERAL(79, 4),  // "help"
        QT_MOC_LITERAL(84, 5),  // "notes"
        QT_MOC_LITERAL(90, 23),  // "on_btnAddtoCart_clicked"
        QT_MOC_LITERAL(114, 22),  // "on_btnCheckout_clicked"
        QT_MOC_LITERAL(137, 19)   // "on_btnClear_clicked"
    },
    "MainWindow",
    "on_btnSearch_clicked",
    "",
    "writeToLogFile",
    "message",
    "about",
    "getNumberOfBooks",
    "help",
    "notes",
    "on_btnAddtoCart_clicked",
    "on_btnCheckout_clicked",
    "on_btnClear_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    1,   69,    2, 0x08,    2 /* Private */,
       5,    0,   72,    2, 0x08,    4 /* Private */,
       6,    0,   73,    2, 0x08,    5 /* Private */,
       7,    0,   74,    2, 0x08,    6 /* Private */,
       8,    0,   75,    2, 0x08,    7 /* Private */,
       9,    0,   76,    2, 0x08,    8 /* Private */,
      10,    0,   77,    2, 0x08,    9 /* Private */,
      11,    0,   78,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_btnSearch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'writeToLogFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'about'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getNumberOfBooks'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'help'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'notes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAddtoCart_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnCheckout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnClear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnSearch_clicked(); break;
        case 1: _t->writeToLogFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->about(); break;
        case 3: { int _r = _t->getNumberOfBooks();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->help(); break;
        case 5: _t->notes(); break;
        case 6: _t->on_btnAddtoCart_clicked(); break;
        case 7: _t->on_btnCheckout_clicked(); break;
        case 8: _t->on_btnClear_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
