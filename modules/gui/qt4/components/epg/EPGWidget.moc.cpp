/****************************************************************************
** Meta object code from reading C++ file 'EPGWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EPGWidget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EPGWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EPGWidget_t {
    QByteArrayData data[8];
    char stringdata[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EPGWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EPGWidget_t qt_meta_stringdata_EPGWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "EPGWidget"
QT_MOC_LITERAL(1, 10, 20), // "itemSelectionChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "EPGItem*"
QT_MOC_LITERAL(4, 41, 7), // "setZoom"
QT_MOC_LITERAL(5, 49, 5), // "level"
QT_MOC_LITERAL(6, 55, 9), // "updateEPG"
QT_MOC_LITERAL(7, 65, 13) // "input_item_t*"

    },
    "EPGWidget\0itemSelectionChanged\0\0"
    "EPGItem*\0setZoom\0level\0updateEPG\0"
    "input_item_t*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EPGWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void EPGWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EPGWidget *_t = static_cast<EPGWidget *>(_o);
        switch (_id) {
        case 0: _t->itemSelectionChanged((*reinterpret_cast< EPGItem*(*)>(_a[1]))); break;
        case 1: _t->setZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateEPG((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EPGWidget::*_t)(EPGItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EPGWidget::itemSelectionChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject EPGWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EPGWidget.data,
      qt_meta_data_EPGWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EPGWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EPGWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EPGWidget.stringdata))
        return static_cast<void*>(const_cast< EPGWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int EPGWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void EPGWidget::itemSelectionChanged(EPGItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
