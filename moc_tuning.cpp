/****************************************************************************
** Meta object code from reading C++ file 'tuning.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "tuning.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tuning.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tuning_t {
    QByteArrayData data[19];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tuning_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tuning_t qt_meta_stringdata_tuning = {
    {
QT_MOC_LITERAL(0, 0, 6), // "tuning"
QT_MOC_LITERAL(1, 7, 18), // "sendvisibleisgnale"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "status"
QT_MOC_LITERAL(4, 34, 8), // "sendfreq"
QT_MOC_LITERAL(5, 43, 5), // "count"
QT_MOC_LITERAL(6, 49, 12), // "activatemain"
QT_MOC_LITERAL(7, 62, 7), // "tx_mode"
QT_MOC_LITERAL(8, 70, 4), // "mode"
QT_MOC_LITERAL(9, 75, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 97, 14), // "rx_surgeonName"
QT_MOC_LITERAL(11, 112, 4), // "text"
QT_MOC_LITERAL(12, 117, 8), // "rx_modes"
QT_MOC_LITERAL(13, 126, 19), // "on_But_Next_clicked"
QT_MOC_LITERAL(14, 146, 24), // "on_But_Handpiece_clicked"
QT_MOC_LITERAL(15, 171, 20), // "on_But_value_clicked"
QT_MOC_LITERAL(16, 192, 19), // "on_ButRTune_clicked"
QT_MOC_LITERAL(17, 212, 19), // "on_butTuned_clicked"
QT_MOC_LITERAL(18, 232, 11) // "alreadyTune"

    },
    "tuning\0sendvisibleisgnale\0\0status\0"
    "sendfreq\0count\0activatemain\0tx_mode\0"
    "mode\0on_pushButton_clicked\0rx_surgeonName\0"
    "text\0rx_modes\0on_But_Next_clicked\0"
    "on_But_Handpiece_clicked\0on_But_value_clicked\0"
    "on_ButRTune_clicked\0on_butTuned_clicked\0"
    "alreadyTune"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tuning[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       6,    0,   85,    2, 0x06 /* Public */,
       7,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   89,    2, 0x0a /* Public */,
      10,    1,   90,    2, 0x0a /* Public */,
      12,    1,   93,    2, 0x0a /* Public */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,
      17,    0,  100,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tuning::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<tuning *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendvisibleisgnale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->sendfreq((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->activatemain(); break;
        case 3: _t->tx_mode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->rx_surgeonName((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->rx_modes((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_But_Next_clicked(); break;
        case 8: _t->on_But_Handpiece_clicked(); break;
        case 9: _t->on_But_value_clicked(); break;
        case 10: _t->on_ButRTune_clicked(); break;
        case 11: _t->on_butTuned_clicked(); break;
        case 12: _t->alreadyTune(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (tuning::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tuning::sendvisibleisgnale)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (tuning::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tuning::sendfreq)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (tuning::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tuning::activatemain)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (tuning::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tuning::tx_mode)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tuning::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_tuning.data,
    qt_meta_data_tuning,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tuning::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tuning::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tuning.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int tuning::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void tuning::sendvisibleisgnale(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tuning::sendfreq(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tuning::activatemain()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void tuning::tx_mode(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
