/****************************************************************************
** Meta object code from reading C++ file 'actions_manager.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "actions_manager.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actions_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ActionsManager_t {
    QByteArrayData data[16];
    char stringdata[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActionsManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActionsManager_t qt_meta_stringdata_ActionsManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ActionsManager"
QT_MOC_LITERAL(1, 15, 15), // "toggleMuteAudio"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "AudioUp"
QT_MOC_LITERAL(4, 40, 9), // "AudioDown"
QT_MOC_LITERAL(5, 50, 4), // "play"
QT_MOC_LITERAL(6, 55, 6), // "record"
QT_MOC_LITERAL(7, 62, 11), // "skipForward"
QT_MOC_LITERAL(8, 74, 12), // "skipBackward"
QT_MOC_LITERAL(9, 87, 8), // "PPaction"
QT_MOC_LITERAL(10, 96, 8), // "QAction*"
QT_MOC_LITERAL(11, 105, 10), // "fullscreen"
QT_MOC_LITERAL(12, 116, 8), // "snapshot"
QT_MOC_LITERAL(13, 125, 8), // "playlist"
QT_MOC_LITERAL(14, 134, 5), // "frame"
QT_MOC_LITERAL(15, 140, 8) // "doAction"

    },
    "ActionsManager\0toggleMuteAudio\0\0AudioUp\0"
    "AudioDown\0play\0record\0skipForward\0"
    "skipBackward\0PPaction\0QAction*\0"
    "fullscreen\0snapshot\0playlist\0frame\0"
    "doAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActionsManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    1,   86,    2, 0x0a /* Public */,
      11,    0,   89,    2, 0x09 /* Protected */,
      12,    0,   90,    2, 0x09 /* Protected */,
      13,    0,   91,    2, 0x09 /* Protected */,
      14,    0,   92,    2, 0x09 /* Protected */,
      15,    1,   93,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void ActionsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActionsManager *_t = static_cast<ActionsManager *>(_o);
        switch (_id) {
        case 0: _t->toggleMuteAudio(); break;
        case 1: _t->AudioUp(); break;
        case 2: _t->AudioDown(); break;
        case 3: _t->play(); break;
        case 4: _t->record(); break;
        case 5: _t->skipForward(); break;
        case 6: _t->skipBackward(); break;
        case 7: _t->PPaction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: _t->fullscreen(); break;
        case 9: _t->snapshot(); break;
        case 10: _t->playlist(); break;
        case 11: _t->frame(); break;
        case 12: _t->doAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ActionsManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ActionsManager.data,
      qt_meta_data_ActionsManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ActionsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActionsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ActionsManager.stringdata))
        return static_cast<void*>(const_cast< ActionsManager*>(this));
    if (!strcmp(_clname, "Singleton<ActionsManager>"))
        return static_cast< Singleton<ActionsManager>*>(const_cast< ActionsManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ActionsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
