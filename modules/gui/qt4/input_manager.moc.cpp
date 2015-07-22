/****************************************************************************
** Meta object code from reading C++ file 'input_manager.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "input_manager.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'input_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InputManager_t {
    QByteArrayData data[54];
    char stringdata[713];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputManager_t qt_meta_stringdata_InputManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "InputManager"
QT_MOC_LITERAL(1, 13, 15), // "positionUpdated"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "int64_t"
QT_MOC_LITERAL(4, 38, 13), // "seekRequested"
QT_MOC_LITERAL(5, 52, 3), // "pos"
QT_MOC_LITERAL(6, 56, 11), // "rateChanged"
QT_MOC_LITERAL(7, 68, 11), // "nameChanged"
QT_MOC_LITERAL(8, 80, 12), // "titleChanged"
QT_MOC_LITERAL(9, 93, 14), // "chapterChanged"
QT_MOC_LITERAL(10, 108, 12), // "inputCanSeek"
QT_MOC_LITERAL(11, 121, 14), // "resumePlayback"
QT_MOC_LITERAL(12, 136, 17), // "statisticsUpdated"
QT_MOC_LITERAL(13, 154, 13), // "input_item_t*"
QT_MOC_LITERAL(14, 168, 11), // "infoChanged"
QT_MOC_LITERAL(15, 180, 18), // "currentMetaChanged"
QT_MOC_LITERAL(16, 199, 11), // "metaChanged"
QT_MOC_LITERAL(17, 211, 10), // "artChanged"
QT_MOC_LITERAL(18, 222, 20), // "playingStatusChanged"
QT_MOC_LITERAL(19, 243, 21), // "recordingStateChanged"
QT_MOC_LITERAL(20, 265, 16), // "teletextPossible"
QT_MOC_LITERAL(21, 282, 17), // "teletextActivated"
QT_MOC_LITERAL(22, 300, 29), // "teletextTransparencyActivated"
QT_MOC_LITERAL(23, 330, 15), // "newTelexPageSet"
QT_MOC_LITERAL(24, 346, 11), // "AtoBchanged"
QT_MOC_LITERAL(25, 358, 11), // "voutChanged"
QT_MOC_LITERAL(26, 370, 15), // "voutListChanged"
QT_MOC_LITERAL(27, 386, 15), // "vout_thread_t**"
QT_MOC_LITERAL(28, 402, 7), // "pp_vout"
QT_MOC_LITERAL(29, 410, 6), // "i_vout"
QT_MOC_LITERAL(30, 417, 14), // "synchroChanged"
QT_MOC_LITERAL(31, 432, 16), // "bookmarksChanged"
QT_MOC_LITERAL(32, 449, 14), // "cachingChanged"
QT_MOC_LITERAL(33, 464, 17), // "encryptionChanged"
QT_MOC_LITERAL(34, 482, 10), // "epgChanged"
QT_MOC_LITERAL(35, 493, 19), // "inputChangedHandler"
QT_MOC_LITERAL(36, 513, 12), // "sliderUpdate"
QT_MOC_LITERAL(37, 526, 7), // "reverse"
QT_MOC_LITERAL(38, 534, 6), // "slower"
QT_MOC_LITERAL(39, 541, 6), // "faster"
QT_MOC_LITERAL(40, 548, 12), // "littlefaster"
QT_MOC_LITERAL(41, 561, 12), // "littleslower"
QT_MOC_LITERAL(42, 574, 10), // "normalRate"
QT_MOC_LITERAL(43, 585, 7), // "setRate"
QT_MOC_LITERAL(44, 593, 7), // "jumpFwd"
QT_MOC_LITERAL(45, 601, 7), // "jumpBwd"
QT_MOC_LITERAL(46, 609, 11), // "sectionNext"
QT_MOC_LITERAL(47, 621, 11), // "sectionPrev"
QT_MOC_LITERAL(48, 633, 11), // "sectionMenu"
QT_MOC_LITERAL(49, 645, 12), // "telexSetPage"
QT_MOC_LITERAL(50, 658, 20), // "telexSetTransparency"
QT_MOC_LITERAL(51, 679, 16), // "activateTeletext"
QT_MOC_LITERAL(52, 696, 7), // "setAtoB"
QT_MOC_LITERAL(53, 704, 8) // "AtoBLoop"

    },
    "InputManager\0positionUpdated\0\0int64_t\0"
    "seekRequested\0pos\0rateChanged\0nameChanged\0"
    "titleChanged\0chapterChanged\0inputCanSeek\0"
    "resumePlayback\0statisticsUpdated\0"
    "input_item_t*\0infoChanged\0currentMetaChanged\0"
    "metaChanged\0artChanged\0playingStatusChanged\0"
    "recordingStateChanged\0teletextPossible\0"
    "teletextActivated\0teletextTransparencyActivated\0"
    "newTelexPageSet\0AtoBchanged\0voutChanged\0"
    "voutListChanged\0vout_thread_t**\0pp_vout\0"
    "i_vout\0synchroChanged\0bookmarksChanged\0"
    "cachingChanged\0encryptionChanged\0"
    "epgChanged\0inputChangedHandler\0"
    "sliderUpdate\0reverse\0slower\0faster\0"
    "littlefaster\0littleslower\0normalRate\0"
    "setRate\0jumpFwd\0jumpBwd\0sectionNext\0"
    "sectionPrev\0sectionMenu\0telexSetPage\0"
    "telexSetTransparency\0activateTeletext\0"
    "setAtoB\0AtoBLoop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      28,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  249,    2, 0x06 /* Public */,
       4,    1,  256,    2, 0x06 /* Public */,
       6,    1,  259,    2, 0x06 /* Public */,
       7,    1,  262,    2, 0x06 /* Public */,
       8,    1,  265,    2, 0x06 /* Public */,
       9,    1,  268,    2, 0x06 /* Public */,
      10,    1,  271,    2, 0x06 /* Public */,
      11,    1,  274,    2, 0x06 /* Public */,
      12,    1,  277,    2, 0x06 /* Public */,
      14,    1,  280,    2, 0x06 /* Public */,
      15,    1,  283,    2, 0x06 /* Public */,
      16,    1,  286,    2, 0x06 /* Public */,
      17,    1,  289,    2, 0x06 /* Public */,
      17,    1,  292,    2, 0x06 /* Public */,
      18,    1,  295,    2, 0x06 /* Public */,
      19,    1,  298,    2, 0x06 /* Public */,
      20,    1,  301,    2, 0x06 /* Public */,
      21,    1,  304,    2, 0x06 /* Public */,
      22,    1,  307,    2, 0x06 /* Public */,
      23,    1,  310,    2, 0x06 /* Public */,
      24,    2,  313,    2, 0x06 /* Public */,
      25,    1,  318,    2, 0x06 /* Public */,
      26,    2,  321,    2, 0x06 /* Public */,
      30,    0,  326,    2, 0x06 /* Public */,
      31,    0,  327,    2, 0x06 /* Public */,
      32,    1,  328,    2, 0x06 /* Public */,
      33,    1,  331,    2, 0x06 /* Public */,
      34,    0,  334,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      35,    0,  335,    2, 0x0a /* Public */,
      36,    1,  336,    2, 0x0a /* Public */,
      37,    0,  339,    2, 0x0a /* Public */,
      38,    0,  340,    2, 0x0a /* Public */,
      39,    0,  341,    2, 0x0a /* Public */,
      40,    0,  342,    2, 0x0a /* Public */,
      41,    0,  343,    2, 0x0a /* Public */,
      42,    0,  344,    2, 0x0a /* Public */,
      43,    1,  345,    2, 0x0a /* Public */,
      44,    0,  348,    2, 0x0a /* Public */,
      45,    0,  349,    2, 0x0a /* Public */,
      46,    0,  350,    2, 0x0a /* Public */,
      47,    0,  351,    2, 0x0a /* Public */,
      48,    0,  352,    2, 0x0a /* Public */,
      49,    1,  353,    2, 0x0a /* Public */,
      50,    1,  356,    2, 0x0a /* Public */,
      51,    1,  359,    2, 0x0a /* Public */,
      52,    0,  362,    2, 0x0a /* Public */,
      53,    3,  363,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, 0x80000000 | 3, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 27, QMetaType::Int,   28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, 0x80000000 | 3, QMetaType::Int,    2,    2,    2,

       0        // eod
};

void InputManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputManager *_t = static_cast<InputManager *>(_o);
        switch (_id) {
        case 0: _t->positionUpdated((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->seekRequested((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->rateChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->titleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->chapterChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->inputCanSeek((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->resumePlayback((*reinterpret_cast< int64_t(*)>(_a[1]))); break;
        case 8: _t->statisticsUpdated((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 9: _t->infoChanged((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 10: _t->currentMetaChanged((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 11: _t->metaChanged((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 12: _t->artChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->artChanged((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 14: _t->playingStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->recordingStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->teletextPossible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->teletextActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->teletextTransparencyActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->newTelexPageSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->AtoBchanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->voutChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->voutListChanged((*reinterpret_cast< vout_thread_t**(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->synchroChanged(); break;
        case 24: _t->bookmarksChanged(); break;
        case 25: _t->cachingChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->encryptionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->epgChanged(); break;
        case 28: _t->inputChangedHandler(); break;
        case 29: _t->sliderUpdate((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->reverse(); break;
        case 31: _t->slower(); break;
        case 32: _t->faster(); break;
        case 33: _t->littlefaster(); break;
        case 34: _t->littleslower(); break;
        case 35: _t->normalRate(); break;
        case 36: _t->setRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->jumpFwd(); break;
        case 38: _t->jumpBwd(); break;
        case 39: _t->sectionNext(); break;
        case 40: _t->sectionPrev(); break;
        case 41: _t->sectionMenu(); break;
        case 42: _t->telexSetPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->telexSetTransparency((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->activateTeletext((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->setAtoB(); break;
        case 46: _t->AtoBLoop((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InputManager::*_t)(float , int64_t , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::positionUpdated)) {
                *result = 0;
            }
        }
        {
            typedef void (InputManager::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::seekRequested)) {
                *result = 1;
            }
        }
        {
            typedef void (InputManager::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::rateChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (InputManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::nameChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (InputManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::titleChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (InputManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::chapterChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (InputManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::inputCanSeek)) {
                *result = 6;
            }
        }
        {
            typedef void (InputManager::*_t)(int64_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::resumePlayback)) {
                *result = 7;
            }
        }
        {
            typedef void (InputManager::*_t)(input_item_t * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::statisticsUpdated)) {
                *result = 8;
            }
        }
        {
            typedef void (InputManager::*_t)(input_item_t * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::infoChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (InputManager::*_t)(input_item_t * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::currentMetaChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (InputManager::*_t)(input_item_t * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::metaChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (InputManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::artChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (InputManager::*_t)(input_item_t * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::artChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (InputManager::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::playingStatusChanged)) {
                *result = 14;
            }
        }
        {
            typedef void (InputManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::recordingStateChanged)) {
                *result = 15;
            }
        }
        {
            typedef void (InputManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::teletextPossible)) {
                *result = 16;
            }
        }
        {
            typedef void (InputManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::teletextActivated)) {
                *result = 17;
            }
        }
        {
            typedef void (InputManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::teletextTransparencyActivated)) {
                *result = 18;
            }
        }
        {
            typedef void (InputManager::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::newTelexPageSet)) {
                *result = 19;
            }
        }
        {
            typedef void (InputManager::*_t)(bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::AtoBchanged)) {
                *result = 20;
            }
        }
        {
            typedef void (InputManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::voutChanged)) {
                *result = 21;
            }
        }
        {
            typedef void (InputManager::*_t)(vout_thread_t * * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::voutListChanged)) {
                *result = 22;
            }
        }
        {
            typedef void (InputManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::synchroChanged)) {
                *result = 23;
            }
        }
        {
            typedef void (InputManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::bookmarksChanged)) {
                *result = 24;
            }
        }
        {
            typedef void (InputManager::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::cachingChanged)) {
                *result = 25;
            }
        }
        {
            typedef void (InputManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::encryptionChanged)) {
                *result = 26;
            }
        }
        {
            typedef void (InputManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputManager::epgChanged)) {
                *result = 27;
            }
        }
    }
}

const QMetaObject InputManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InputManager.data,
      qt_meta_data_InputManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InputManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InputManager.stringdata))
        return static_cast<void*>(const_cast< InputManager*>(this));
    return QObject::qt_metacast(_clname);
}

int InputManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 47;
    }
    return _id;
}

// SIGNAL 0
void InputManager::positionUpdated(float _t1, int64_t _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InputManager::seekRequested(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InputManager::rateChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InputManager::nameChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void InputManager::titleChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void InputManager::chapterChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void InputManager::inputCanSeek(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void InputManager::resumePlayback(int64_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void InputManager::statisticsUpdated(input_item_t * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void InputManager::infoChanged(input_item_t * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void InputManager::currentMetaChanged(input_item_t * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void InputManager::metaChanged(input_item_t * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void InputManager::artChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void InputManager::artChanged(input_item_t * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void InputManager::playingStatusChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void InputManager::recordingStateChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void InputManager::teletextPossible(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void InputManager::teletextActivated(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void InputManager::teletextTransparencyActivated(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void InputManager::newTelexPageSet(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void InputManager::AtoBchanged(bool _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void InputManager::voutChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void InputManager::voutListChanged(vout_thread_t * * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void InputManager::synchroChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, Q_NULLPTR);
}

// SIGNAL 24
void InputManager::bookmarksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, Q_NULLPTR);
}

// SIGNAL 25
void InputManager::cachingChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void InputManager::encryptionChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void InputManager::epgChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, Q_NULLPTR);
}
struct qt_meta_stringdata_MainInputManager_t {
    QByteArrayData data[28];
    char stringdata[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainInputManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainInputManager_t qt_meta_stringdata_MainInputManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MainInputManager"
QT_MOC_LITERAL(1, 17, 12), // "inputChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "volumeChanged"
QT_MOC_LITERAL(4, 45, 16), // "soundMuteChanged"
QT_MOC_LITERAL(5, 62, 20), // "playlistItemAppended"
QT_MOC_LITERAL(6, 83, 6), // "itemId"
QT_MOC_LITERAL(7, 90, 8), // "parentId"
QT_MOC_LITERAL(8, 99, 19), // "playlistItemRemoved"
QT_MOC_LITERAL(9, 119, 16), // "playlistNotEmpty"
QT_MOC_LITERAL(10, 136, 13), // "randomChanged"
QT_MOC_LITERAL(11, 150, 17), // "repeatLoopChanged"
QT_MOC_LITERAL(12, 168, 16), // "leafBecameParent"
QT_MOC_LITERAL(13, 185, 15), // "togglePlayPause"
QT_MOC_LITERAL(14, 201, 4), // "play"
QT_MOC_LITERAL(15, 206, 5), // "pause"
QT_MOC_LITERAL(16, 212, 12), // "toggleRandom"
QT_MOC_LITERAL(17, 225, 4), // "stop"
QT_MOC_LITERAL(18, 230, 4), // "next"
QT_MOC_LITERAL(19, 235, 4), // "prev"
QT_MOC_LITERAL(20, 240, 11), // "prevOrReset"
QT_MOC_LITERAL(21, 252, 16), // "activatePlayQuit"
QT_MOC_LITERAL(22, 269, 20), // "loopRepeatLoopStatus"
QT_MOC_LITERAL(23, 290, 12), // "notifyRandom"
QT_MOC_LITERAL(24, 303, 16), // "notifyRepeatLoop"
QT_MOC_LITERAL(25, 320, 12), // "notifyVolume"
QT_MOC_LITERAL(26, 333, 10), // "notifyMute"
QT_MOC_LITERAL(27, 344, 16) // "menusUpdateAudio"

    },
    "MainInputManager\0inputChanged\0\0"
    "volumeChanged\0soundMuteChanged\0"
    "playlistItemAppended\0itemId\0parentId\0"
    "playlistItemRemoved\0playlistNotEmpty\0"
    "randomChanged\0repeatLoopChanged\0"
    "leafBecameParent\0togglePlayPause\0play\0"
    "pause\0toggleRandom\0stop\0next\0prev\0"
    "prevOrReset\0activatePlayQuit\0"
    "loopRepeatLoopStatus\0notifyRandom\0"
    "notifyRepeatLoop\0notifyVolume\0notifyMute\0"
    "menusUpdateAudio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainInputManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  134,    2, 0x06 /* Public */,
       3,    1,  135,    2, 0x06 /* Public */,
       4,    1,  138,    2, 0x06 /* Public */,
       5,    2,  141,    2, 0x06 /* Public */,
       8,    1,  146,    2, 0x06 /* Public */,
       9,    1,  149,    2, 0x06 /* Public */,
      10,    1,  152,    2, 0x06 /* Public */,
      11,    1,  155,    2, 0x06 /* Public */,
      12,    1,  158,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  161,    2, 0x0a /* Public */,
      14,    0,  162,    2, 0x0a /* Public */,
      15,    0,  163,    2, 0x0a /* Public */,
      16,    0,  164,    2, 0x0a /* Public */,
      17,    0,  165,    2, 0x0a /* Public */,
      18,    0,  166,    2, 0x0a /* Public */,
      19,    0,  167,    2, 0x0a /* Public */,
      20,    0,  168,    2, 0x0a /* Public */,
      21,    1,  169,    2, 0x0a /* Public */,
      22,    0,  172,    2, 0x0a /* Public */,
      23,    1,  173,    2, 0x08 /* Private */,
      24,    1,  176,    2, 0x08 /* Private */,
      25,    1,  179,    2, 0x08 /* Private */,
      26,    1,  182,    2, 0x08 /* Private */,
      27,    1,  185,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void MainInputManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainInputManager *_t = static_cast<MainInputManager *>(_o);
        switch (_id) {
        case 0: _t->inputChanged(); break;
        case 1: _t->volumeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->soundMuteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->playlistItemAppended((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->playlistItemRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->playlistNotEmpty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->randomChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->repeatLoopChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->leafBecameParent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->togglePlayPause(); break;
        case 10: _t->play(); break;
        case 11: _t->pause(); break;
        case 12: _t->toggleRandom(); break;
        case 13: _t->stop(); break;
        case 14: _t->next(); break;
        case 15: _t->prev(); break;
        case 16: _t->prevOrReset(); break;
        case 17: _t->activatePlayQuit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->loopRepeatLoopStatus(); break;
        case 19: _t->notifyRandom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->notifyRepeatLoop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->notifyVolume((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->notifyMute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->menusUpdateAudio((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainInputManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInputManager::inputChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (MainInputManager::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInputManager::volumeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (MainInputManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInputManager::soundMuteChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (MainInputManager::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInputManager::playlistItemAppended)) {
                *result = 3;
            }
        }
        {
            typedef void (MainInputManager::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInputManager::playlistItemRemoved)) {
                *result = 4;
            }
        }
        {
            typedef void (MainInputManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInputManager::playlistNotEmpty)) {
                *result = 5;
            }
        }
        {
            typedef void (MainInputManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInputManager::randomChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (MainInputManager::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInputManager::repeatLoopChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (MainInputManager::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInputManager::leafBecameParent)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject MainInputManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MainInputManager.data,
      qt_meta_data_MainInputManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainInputManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainInputManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainInputManager.stringdata))
        return static_cast<void*>(const_cast< MainInputManager*>(this));
    if (!strcmp(_clname, "Singleton<MainInputManager>"))
        return static_cast< Singleton<MainInputManager>*>(const_cast< MainInputManager*>(this));
    return QObject::qt_metacast(_clname);
}

int MainInputManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void MainInputManager::inputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MainInputManager::volumeChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainInputManager::soundMuteChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainInputManager::playlistItemAppended(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainInputManager::playlistItemRemoved(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainInputManager::playlistNotEmpty(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainInputManager::randomChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainInputManager::repeatLoopChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainInputManager::leafBecameParent(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
