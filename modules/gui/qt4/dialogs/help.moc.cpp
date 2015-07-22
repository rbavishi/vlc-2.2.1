/****************************************************************************
** Meta object code from reading C++ file 'help.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "help.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'help.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HelpDialog_t {
    QByteArrayData data[3];
    char stringdata[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HelpDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HelpDialog_t qt_meta_stringdata_HelpDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HelpDialog"
QT_MOC_LITERAL(1, 11, 5), // "close"
QT_MOC_LITERAL(2, 17, 0) // ""

    },
    "HelpDialog\0close\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HelpDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void HelpDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpDialog *_t = static_cast<HelpDialog *>(_o);
        switch (_id) {
        case 0: _t->close(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject HelpDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_HelpDialog.data,
      qt_meta_data_HelpDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HelpDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HelpDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HelpDialog.stringdata))
        return static_cast<void*>(const_cast< HelpDialog*>(this));
    if (!strcmp(_clname, "Singleton<HelpDialog>"))
        return static_cast< Singleton<HelpDialog>*>(const_cast< HelpDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int HelpDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_AboutDialog_t {
    QByteArrayData data[5];
    char stringdata[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AboutDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AboutDialog_t qt_meta_stringdata_AboutDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AboutDialog"
QT_MOC_LITERAL(1, 12, 11), // "showLicense"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "showAuthors"
QT_MOC_LITERAL(4, 37, 10) // "showCredit"

    },
    "AboutDialog\0showLicense\0\0showAuthors\0"
    "showCredit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AboutDialog[] = {

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

void AboutDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AboutDialog *_t = static_cast<AboutDialog *>(_o);
        switch (_id) {
        case 0: _t->showLicense(); break;
        case 1: _t->showAuthors(); break;
        case 2: _t->showCredit(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AboutDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_AboutDialog.data,
      qt_meta_data_AboutDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AboutDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AboutDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AboutDialog.stringdata))
        return static_cast<void*>(const_cast< AboutDialog*>(this));
    if (!strcmp(_clname, "Singleton<AboutDialog>"))
        return static_cast< Singleton<AboutDialog>*>(const_cast< AboutDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int AboutDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
