/****************************************************************************
** Meta object code from reading C++ file 'fingerprintdialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fingerprintdialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fingerprintdialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FingerprintDialog_t {
    QByteArrayData data[6];
    char stringdata[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FingerprintDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FingerprintDialog_t qt_meta_stringdata_FingerprintDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FingerprintDialog"
QT_MOC_LITERAL(1, 18, 11), // "metaApplied"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "input_item_t*"
QT_MOC_LITERAL(4, 45, 13), // "handleResults"
QT_MOC_LITERAL(5, 59, 13) // "applyIdentity"

    },
    "FingerprintDialog\0metaApplied\0\0"
    "input_item_t*\0handleResults\0applyIdentity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FingerprintDialog[] = {

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
       4,    0,   32,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FingerprintDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FingerprintDialog *_t = static_cast<FingerprintDialog *>(_o);
        switch (_id) {
        case 0: _t->metaApplied((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 1: _t->handleResults(); break;
        case 2: _t->applyIdentity(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FingerprintDialog::*_t)(input_item_t * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FingerprintDialog::metaApplied)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FingerprintDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FingerprintDialog.data,
      qt_meta_data_FingerprintDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FingerprintDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FingerprintDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FingerprintDialog.stringdata))
        return static_cast<void*>(const_cast< FingerprintDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int FingerprintDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void FingerprintDialog::metaApplied(input_item_t * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
