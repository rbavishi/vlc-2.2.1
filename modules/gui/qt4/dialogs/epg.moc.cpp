/****************************************************************************
** Meta object code from reading C++ file 'epg.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "epg.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'epg.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EpgDialog_t {
    QByteArrayData data[5];
    char stringdata[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EpgDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EpgDialog_t qt_meta_stringdata_EpgDialog = {
    {
QT_MOC_LITERAL(0, 0, 9), // "EpgDialog"
QT_MOC_LITERAL(1, 10, 12), // "displayEvent"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "EPGItem*"
QT_MOC_LITERAL(4, 33, 11) // "updateInfos"

    },
    "EpgDialog\0displayEvent\0\0EPGItem*\0"
    "updateInfos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EpgDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

       0        // eod
};

void EpgDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EpgDialog *_t = static_cast<EpgDialog *>(_o);
        switch (_id) {
        case 0: _t->displayEvent((*reinterpret_cast< EPGItem*(*)>(_a[1]))); break;
        case 1: _t->updateInfos(); break;
        default: ;
        }
    }
}

const QMetaObject EpgDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_EpgDialog.data,
      qt_meta_data_EpgDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EpgDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EpgDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EpgDialog.stringdata))
        return static_cast<void*>(const_cast< EpgDialog*>(this));
    if (!strcmp(_clname, "Singleton<EpgDialog>"))
        return static_cast< Singleton<EpgDialog>*>(const_cast< EpgDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int EpgDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
