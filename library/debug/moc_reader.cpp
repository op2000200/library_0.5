/****************************************************************************
** Meta object code from reading C++ file 'reader.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../reader.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reader.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_reader_t {
    uint offsetsAndSizes[32];
    char stringdata0[7];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[3];
    char stringdata5[22];
    char stringdata6[24];
    char stringdata7[24];
    char stringdata8[24];
    char stringdata9[35];
    char stringdata10[4];
    char stringdata11[7];
    char stringdata12[22];
    char stringdata13[35];
    char stringdata14[24];
    char stringdata15[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_reader_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_reader_t qt_meta_stringdata_reader = {
    {
        QT_MOC_LITERAL(0, 6),  // "reader"
        QT_MOC_LITERAL(7, 7),  // "exiting"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 8),  // "sendbook"
        QT_MOC_LITERAL(25, 2),  // "ID"
        QT_MOC_LITERAL(28, 21),  // "on_toolButton_clicked"
        QT_MOC_LITERAL(50, 23),  // "on_toolButton_2_clicked"
        QT_MOC_LITERAL(74, 23),  // "on_toolButton_3_clicked"
        QT_MOC_LITERAL(98, 23),  // "on_pushButton_3_clicked"
        QT_MOC_LITERAL(122, 34),  // "on_tableWidget_4_cellDoubleCl..."
        QT_MOC_LITERAL(157, 3),  // "row"
        QT_MOC_LITERAL(161, 6),  // "column"
        QT_MOC_LITERAL(168, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(190, 34),  // "on_tableWidget_2_cellDoubleCl..."
        QT_MOC_LITERAL(225, 23),  // "on_pushButton_2_clicked"
        QT_MOC_LITERAL(249, 8)   // "readData"
    },
    "reader",
    "exiting",
    "",
    "sendbook",
    "ID",
    "on_toolButton_clicked",
    "on_toolButton_2_clicked",
    "on_toolButton_3_clicked",
    "on_pushButton_3_clicked",
    "on_tableWidget_4_cellDoubleClicked",
    "row",
    "column",
    "on_pushButton_clicked",
    "on_tableWidget_2_cellDoubleClicked",
    "on_pushButton_2_clicked",
    "readData"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_reader[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    1,   81,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   84,    2, 0x08,    4 /* Private */,
       6,    0,   85,    2, 0x08,    5 /* Private */,
       7,    0,   86,    2, 0x08,    6 /* Private */,
       8,    0,   87,    2, 0x08,    7 /* Private */,
       9,    2,   88,    2, 0x08,    8 /* Private */,
      12,    0,   93,    2, 0x08,   11 /* Private */,
      13,    2,   94,    2, 0x08,   12 /* Private */,
      14,    0,   99,    2, 0x08,   15 /* Private */,
      15,    1,  100,    2, 0x0a,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject reader::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_reader.offsetsAndSizes,
    qt_meta_data_reader,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_reader_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<reader, std::true_type>,
        // method 'exiting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendbook'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_toolButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableWidget_4_cellDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableWidget_2_cellDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void reader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<reader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->exiting(); break;
        case 1: _t->sendbook((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_toolButton_clicked(); break;
        case 3: _t->on_toolButton_2_clicked(); break;
        case 4: _t->on_toolButton_3_clicked(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_tableWidget_4_cellDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_tableWidget_2_cellDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        case 10: _t->readData((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (reader::*)();
            if (_t _q_method = &reader::exiting; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (reader::*)(int );
            if (_t _q_method = &reader::sendbook; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *reader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *reader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_reader.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int reader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void reader::exiting()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void reader::sendbook(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
