/****************************************************************************
** Meta object code from reading C++ file 'EPGView.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EPGView.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EPGView.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EPGGraphicsScene_t {
    QByteArrayData data[1];
    char stringdata[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EPGGraphicsScene_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EPGGraphicsScene_t qt_meta_stringdata_EPGGraphicsScene = {
    {
QT_MOC_LITERAL(0, 0, 16) // "EPGGraphicsScene"

    },
    "EPGGraphicsScene"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EPGGraphicsScene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void EPGGraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject EPGGraphicsScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_EPGGraphicsScene.data,
      qt_meta_data_EPGGraphicsScene,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EPGGraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EPGGraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EPGGraphicsScene.stringdata))
        return static_cast<void*>(const_cast< EPGGraphicsScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int EPGGraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_EPGView_t {
    QByteArrayData data[11];
    char stringdata[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EPGView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EPGView_t qt_meta_stringdata_EPGView = {
    {
QT_MOC_LITERAL(0, 0, 7), // "EPGView"
QT_MOC_LITERAL(1, 8, 16), // "startTimeChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "startTime"
QT_MOC_LITERAL(4, 36, 15), // "durationChanged"
QT_MOC_LITERAL(5, 52, 7), // "seconds"
QT_MOC_LITERAL(6, 60, 11), // "itemFocused"
QT_MOC_LITERAL(7, 72, 8), // "EPGItem*"
QT_MOC_LITERAL(8, 81, 12), // "channelAdded"
QT_MOC_LITERAL(9, 94, 14), // "channelRemoved"
QT_MOC_LITERAL(10, 109, 9) // "focusItem"

    },
    "EPGView\0startTimeChanged\0\0startTime\0"
    "durationChanged\0seconds\0itemFocused\0"
    "EPGItem*\0channelAdded\0channelRemoved\0"
    "focusItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EPGView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       8,    1,   53,    2, 0x06 /* Public */,
       9,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void EPGView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EPGView *_t = static_cast<EPGView *>(_o);
        switch (_id) {
        case 0: _t->startTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 1: _t->durationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->itemFocused((*reinterpret_cast< EPGItem*(*)>(_a[1]))); break;
        case 3: _t->channelAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->channelRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->focusItem((*reinterpret_cast< EPGItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EPGView::*_t)(const QDateTime & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EPGView::startTimeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (EPGView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EPGView::durationChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (EPGView::*_t)(EPGItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EPGView::itemFocused)) {
                *result = 2;
            }
        }
        {
            typedef void (EPGView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EPGView::channelAdded)) {
                *result = 3;
            }
        }
        {
            typedef void (EPGView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EPGView::channelRemoved)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject EPGView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_EPGView.data,
      qt_meta_data_EPGView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EPGView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EPGView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EPGView.stringdata))
        return static_cast<void*>(const_cast< EPGView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int EPGView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void EPGView::startTimeChanged(const QDateTime & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EPGView::durationChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EPGView::itemFocused(EPGItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void EPGView::channelAdded(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void EPGView::channelRemoved(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
