/****************************************************************************
** Meta object code from reading C++ file 'errors.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "errors.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'errors.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ErrorsDialog_t {
    QByteArrayData data[5];
    char stringdata[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ErrorsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ErrorsDialog_t qt_meta_stringdata_ErrorsDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ErrorsDialog"
QT_MOC_LITERAL(1, 13, 5), // "close"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "clear"
QT_MOC_LITERAL(4, 26, 8) // "dontShow"

    },
    "ErrorsDialog\0close\0\0clear\0dontShow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ErrorsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ErrorsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ErrorsDialog *_t = static_cast<ErrorsDialog *>(_o);
        switch (_id) {
        case 0: _t->close(); break;
        case 1: _t->clear(); break;
        case 2: _t->dontShow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ErrorsDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_ErrorsDialog.data,
      qt_meta_data_ErrorsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ErrorsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ErrorsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ErrorsDialog.stringdata))
        return static_cast<void*>(const_cast< ErrorsDialog*>(this));
    if (!strcmp(_clname, "Singleton<ErrorsDialog>"))
        return static_cast< Singleton<ErrorsDialog>*>(const_cast< ErrorsDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int ErrorsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
