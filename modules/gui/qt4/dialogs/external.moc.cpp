/****************************************************************************
** Meta object code from reading C++ file 'external.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "external.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'external.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogHandler_t {
    QByteArrayData data[10];
    char stringdata[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogHandler_t qt_meta_stringdata_DialogHandler = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DialogHandler"
QT_MOC_LITERAL(1, 14, 5), // "error"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "displayError"
QT_MOC_LITERAL(4, 34, 15), // "displayCritical"
QT_MOC_LITERAL(5, 50, 12), // "requestLogin"
QT_MOC_LITERAL(6, 63, 13), // "requestAnswer"
QT_MOC_LITERAL(7, 77, 16), // "startProgressBar"
QT_MOC_LITERAL(8, 94, 15), // "stopProgressBar"
QT_MOC_LITERAL(9, 110, 8) // "QWidget*"

    },
    "DialogHandler\0error\0\0displayError\0"
    "displayCritical\0requestLogin\0requestAnswer\0"
    "startProgressBar\0stopProgressBar\0"
    "QWidget*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   54,    2, 0x08 /* Private */,
       4,    1,   59,    2, 0x08 /* Private */,
       5,    1,   62,    2, 0x08 /* Private */,
       6,    1,   65,    2, 0x08 /* Private */,
       7,    1,   68,    2, 0x08 /* Private */,
       8,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::VoidStar,    2,
    QMetaType::Void, QMetaType::VoidStar,    2,
    QMetaType::Void, QMetaType::VoidStar,    2,
    QMetaType::Void, QMetaType::VoidStar,    2,
    QMetaType::Void, 0x80000000 | 9,    2,

       0        // eod
};

void DialogHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogHandler *_t = static_cast<DialogHandler *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->displayError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->displayCritical((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 3: _t->requestLogin((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 4: _t->requestAnswer((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 5: _t->startProgressBar((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 6: _t->stopProgressBar((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DialogHandler::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DialogHandler::error)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject DialogHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DialogHandler.data,
      qt_meta_data_DialogHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DialogHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DialogHandler.stringdata))
        return static_cast<void*>(const_cast< DialogHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int DialogHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DialogHandler::error(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QVLCProgressDialog_t {
    QByteArrayData data[6];
    char stringdata[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVLCProgressDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVLCProgressDialog_t qt_meta_stringdata_QVLCProgressDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QVLCProgressDialog"
QT_MOC_LITERAL(1, 19, 10), // "progressed"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9), // "described"
QT_MOC_LITERAL(4, 41, 8), // "released"
QT_MOC_LITERAL(5, 50, 10) // "saveCancel"

    },
    "QVLCProgressDialog\0progressed\0\0described\0"
    "released\0saveCancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVLCProgressDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,
       4,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QVLCProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QVLCProgressDialog *_t = static_cast<QVLCProgressDialog *>(_o);
        switch (_id) {
        case 0: _t->progressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->described((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->released(); break;
        case 3: _t->saveCancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QVLCProgressDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QVLCProgressDialog::progressed)) {
                *result = 0;
            }
        }
        {
            typedef void (QVLCProgressDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QVLCProgressDialog::described)) {
                *result = 1;
            }
        }
        {
            typedef void (QVLCProgressDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QVLCProgressDialog::released)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QVLCProgressDialog::staticMetaObject = {
    { &QProgressDialog::staticMetaObject, qt_meta_stringdata_QVLCProgressDialog.data,
      qt_meta_data_QVLCProgressDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QVLCProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVLCProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCProgressDialog.stringdata))
        return static_cast<void*>(const_cast< QVLCProgressDialog*>(this));
    return QProgressDialog::qt_metacast(_clname);
}

int QVLCProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QVLCProgressDialog::progressed(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QVLCProgressDialog::described(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QVLCProgressDialog::released()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
