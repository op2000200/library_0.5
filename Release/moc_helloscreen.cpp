/****************************************************************************
** Meta object code from reading C++ file 'helloscreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../helloscreen.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helloscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
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
struct qt_meta_stringdata_HelloScreen_t {
    uint offsetsAndSizes[24];
    char stringdata0[12];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[6];
    char stringdata5[6];
    char stringdata6[22];
    char stringdata7[24];
    char stringdata8[22];
    char stringdata9[26];
    char stringdata10[28];
    char stringdata11[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_HelloScreen_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_HelloScreen_t qt_meta_stringdata_HelloScreen = {
    {
        QT_MOC_LITERAL(0, 11),  // "HelloScreen"
        QT_MOC_LITERAL(12, 5),  // "send1"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 2),  // "ID"
        QT_MOC_LITERAL(22, 5),  // "send2"
        QT_MOC_LITERAL(28, 5),  // "send3"
        QT_MOC_LITERAL(34, 21),  // "on_toolButton_clicked"
        QT_MOC_LITERAL(56, 23),  // "on_toolButton_2_clicked"
        QT_MOC_LITERAL(80, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(102, 25),  // "on_lineEdit_returnPressed"
        QT_MOC_LITERAL(128, 27),  // "on_lineEdit_2_returnPressed"
        QT_MOC_LITERAL(156, 4)   // "BTHS"
    },
    "HelloScreen",
    "send1",
    "",
    "ID",
    "send2",
    "send3",
    "on_toolButton_clicked",
    "on_toolButton_2_clicked",
    "on_pushButton_clicked",
    "on_lineEdit_returnPressed",
    "on_lineEdit_2_returnPressed",
    "BTHS"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_HelloScreen[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       4,    1,   71,    2, 0x06,    3 /* Public */,
       5,    1,   74,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   77,    2, 0x08,    7 /* Private */,
       7,    0,   78,    2, 0x08,    8 /* Private */,
       8,    0,   79,    2, 0x08,    9 /* Private */,
       9,    0,   80,    2, 0x08,   10 /* Private */,
      10,    0,   81,    2, 0x08,   11 /* Private */,
      11,    0,   82,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject HelloScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_HelloScreen.offsetsAndSizes,
    qt_meta_data_HelloScreen,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_HelloScreen_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HelloScreen, std::true_type>,
        // method 'send1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'send2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'send3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_toolButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_2_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'BTHS'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void HelloScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HelloScreen *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->send1((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->send2((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->send3((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_toolButton_clicked(); break;
        case 4: _t->on_toolButton_2_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_lineEdit_returnPressed(); break;
        case 7: _t->on_lineEdit_2_returnPressed(); break;
        case 8: _t->BTHS(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HelloScreen::*)(int );
            if (_t _q_method = &HelloScreen::send1; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HelloScreen::*)(int );
            if (_t _q_method = &HelloScreen::send2; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HelloScreen::*)(int );
            if (_t _q_method = &HelloScreen::send3; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *HelloScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HelloScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HelloScreen.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int HelloScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void HelloScreen::send1(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HelloScreen::send2(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HelloScreen::send3(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
