/****************************************************************************
** Meta object code from reading C++ file 'main_interface.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "main_interface.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_interface.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainInterface_t {
    QByteArrayData data[68];
    char stringdata[942];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainInterface_t qt_meta_stringdata_MainInterface = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MainInterface"
QT_MOC_LITERAL(1, 14, 11), // "askGetVideo"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "WId*"
QT_MOC_LITERAL(4, 32, 4), // "p_id"
QT_MOC_LITERAL(5, 37, 4), // "int*"
QT_MOC_LITERAL(6, 42, 4), // "pi_x"
QT_MOC_LITERAL(7, 47, 4), // "pi_y"
QT_MOC_LITERAL(8, 52, 5), // "uint*"
QT_MOC_LITERAL(9, 58, 8), // "pi_width"
QT_MOC_LITERAL(10, 67, 9), // "pi_height"
QT_MOC_LITERAL(11, 77, 15), // "askReleaseVideo"
QT_MOC_LITERAL(12, 93, 16), // "askVideoToResize"
QT_MOC_LITERAL(13, 110, 21), // "askVideoSetFullScreen"
QT_MOC_LITERAL(14, 132, 13), // "askVideoOnTop"
QT_MOC_LITERAL(15, 146, 18), // "minimalViewToggled"
QT_MOC_LITERAL(16, 165, 26), // "fullscreenInterfaceToggled"
QT_MOC_LITERAL(17, 192, 9), // "askToQuit"
QT_MOC_LITERAL(18, 202, 7), // "askBoss"
QT_MOC_LITERAL(19, 210, 8), // "askRaise"
QT_MOC_LITERAL(20, 219, 10), // "kc_pressed"
QT_MOC_LITERAL(21, 230, 12), // "dockPlaylist"
QT_MOC_LITERAL(22, 243, 8), // "b_docked"
QT_MOC_LITERAL(23, 252, 17), // "toggleMinimalView"
QT_MOC_LITERAL(24, 270, 14), // "togglePlaylist"
QT_MOC_LITERAL(25, 285, 23), // "toggleUpdateSystrayMenu"
QT_MOC_LITERAL(26, 309, 21), // "showUpdateSystrayMenu"
QT_MOC_LITERAL(27, 331, 21), // "hideUpdateSystrayMenu"
QT_MOC_LITERAL(28, 353, 21), // "toggleAdvancedButtons"
QT_MOC_LITERAL(29, 375, 25), // "toggleInterfaceFullScreen"
QT_MOC_LITERAL(30, 401, 9), // "toggleFSC"
QT_MOC_LITERAL(31, 411, 22), // "setStatusBarVisibility"
QT_MOC_LITERAL(32, 434, 9), // "b_visible"
QT_MOC_LITERAL(33, 444, 21), // "setPlaylistVisibility"
QT_MOC_LITERAL(34, 466, 9), // "popupMenu"
QT_MOC_LITERAL(35, 476, 12), // "getVideoSlot"
QT_MOC_LITERAL(36, 489, 16), // "releaseVideoSlot"
QT_MOC_LITERAL(37, 506, 8), // "emitBoss"
QT_MOC_LITERAL(38, 515, 9), // "emitRaise"
QT_MOC_LITERAL(39, 525, 11), // "reloadPrefs"
QT_MOC_LITERAL(40, 537, 18), // "toolBarConfUpdated"
QT_MOC_LITERAL(41, 556, 5), // "debug"
QT_MOC_LITERAL(42, 562, 16), // "destroyPopupMenu"
QT_MOC_LITERAL(43, 579, 16), // "recreateToolbars"
QT_MOC_LITERAL(44, 596, 7), // "setName"
QT_MOC_LITERAL(45, 604, 18), // "setVLCWindowsTitle"
QT_MOC_LITERAL(46, 623, 5), // "title"
QT_MOC_LITERAL(47, 629, 18), // "handleSystrayClick"
QT_MOC_LITERAL(48, 648, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(49, 682, 24), // "updateSystrayTooltipName"
QT_MOC_LITERAL(50, 707, 26), // "updateSystrayTooltipStatus"
QT_MOC_LITERAL(51, 734, 16), // "showCryptedLabel"
QT_MOC_LITERAL(52, 751, 14), // "handleKeyPress"
QT_MOC_LITERAL(53, 766, 10), // "QKeyEvent*"
QT_MOC_LITERAL(54, 777, 13), // "showBuffering"
QT_MOC_LITERAL(55, 791, 11), // "resizeStack"
QT_MOC_LITERAL(56, 803, 1), // "w"
QT_MOC_LITERAL(57, 805, 1), // "h"
QT_MOC_LITERAL(58, 807, 12), // "setVideoSize"
QT_MOC_LITERAL(59, 820, 16), // "videoSizeChanged"
QT_MOC_LITERAL(60, 837, 18), // "setVideoFullScreen"
QT_MOC_LITERAL(61, 856, 13), // "setVideoOnTop"
QT_MOC_LITERAL(62, 870, 7), // "setBoss"
QT_MOC_LITERAL(63, 878, 8), // "setRaise"
QT_MOC_LITERAL(64, 887, 15), // "showResumePanel"
QT_MOC_LITERAL(65, 903, 7), // "int64_t"
QT_MOC_LITERAL(66, 911, 15), // "hideResumePanel"
QT_MOC_LITERAL(67, 927, 14) // "resumePlayback"

    },
    "MainInterface\0askGetVideo\0\0WId*\0p_id\0"
    "int*\0pi_x\0pi_y\0uint*\0pi_width\0pi_height\0"
    "askReleaseVideo\0askVideoToResize\0"
    "askVideoSetFullScreen\0askVideoOnTop\0"
    "minimalViewToggled\0fullscreenInterfaceToggled\0"
    "askToQuit\0askBoss\0askRaise\0kc_pressed\0"
    "dockPlaylist\0b_docked\0toggleMinimalView\0"
    "togglePlaylist\0toggleUpdateSystrayMenu\0"
    "showUpdateSystrayMenu\0hideUpdateSystrayMenu\0"
    "toggleAdvancedButtons\0toggleInterfaceFullScreen\0"
    "toggleFSC\0setStatusBarVisibility\0"
    "b_visible\0setPlaylistVisibility\0"
    "popupMenu\0getVideoSlot\0releaseVideoSlot\0"
    "emitBoss\0emitRaise\0reloadPrefs\0"
    "toolBarConfUpdated\0debug\0destroyPopupMenu\0"
    "recreateToolbars\0setName\0setVLCWindowsTitle\0"
    "title\0handleSystrayClick\0"
    "QSystemTrayIcon::ActivationReason\0"
    "updateSystrayTooltipName\0"
    "updateSystrayTooltipStatus\0showCryptedLabel\0"
    "handleKeyPress\0QKeyEvent*\0showBuffering\0"
    "resizeStack\0w\0h\0setVideoSize\0"
    "videoSizeChanged\0setVideoFullScreen\0"
    "setVideoOnTop\0setBoss\0setRaise\0"
    "showResumePanel\0int64_t\0hideResumePanel\0"
    "resumePlayback"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,  274,    2, 0x06 /* Public */,
      11,    0,  285,    2, 0x06 /* Public */,
      12,    2,  286,    2, 0x06 /* Public */,
      13,    1,  291,    2, 0x06 /* Public */,
      14,    1,  294,    2, 0x06 /* Public */,
      15,    1,  297,    2, 0x06 /* Public */,
      16,    1,  300,    2, 0x06 /* Public */,
      17,    0,  303,    2, 0x06 /* Public */,
      18,    0,  304,    2, 0x06 /* Public */,
      19,    0,  305,    2, 0x06 /* Public */,
      20,    0,  306,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    1,  307,    2, 0x0a /* Public */,
      21,    0,  310,    2, 0x2a /* Public | MethodCloned */,
      23,    1,  311,    2, 0x0a /* Public */,
      24,    0,  314,    2, 0x0a /* Public */,
      25,    0,  315,    2, 0x0a /* Public */,
      26,    0,  316,    2, 0x0a /* Public */,
      27,    0,  317,    2, 0x0a /* Public */,
      28,    0,  318,    2, 0x0a /* Public */,
      29,    0,  319,    2, 0x0a /* Public */,
      30,    0,  320,    2, 0x0a /* Public */,
      31,    1,  321,    2, 0x0a /* Public */,
      33,    1,  324,    2, 0x0a /* Public */,
      34,    1,  327,    2, 0x0a /* Public */,
      35,    5,  330,    2, 0x0a /* Public */,
      36,    0,  341,    2, 0x0a /* Public */,
      37,    0,  342,    2, 0x0a /* Public */,
      38,    0,  343,    2, 0x0a /* Public */,
      39,    0,  344,    2, 0x0a /* Public */,
      40,    0,  345,    2, 0x0a /* Public */,
      41,    0,  346,    2, 0x08 /* Private */,
      42,    0,  347,    2, 0x08 /* Private */,
      43,    0,  348,    2, 0x08 /* Private */,
      44,    1,  349,    2, 0x08 /* Private */,
      45,    1,  352,    2, 0x08 /* Private */,
      45,    0,  355,    2, 0x28 /* Private | MethodCloned */,
      47,    1,  356,    2, 0x08 /* Private */,
      49,    1,  359,    2, 0x08 /* Private */,
      50,    1,  362,    2, 0x08 /* Private */,
      51,    1,  365,    2, 0x08 /* Private */,
      52,    1,  368,    2, 0x08 /* Private */,
      54,    1,  371,    2, 0x08 /* Private */,
      55,    2,  374,    2, 0x08 /* Private */,
      58,    2,  379,    2, 0x08 /* Private */,
      59,    2,  384,    2, 0x08 /* Private */,
      60,    1,  389,    2, 0x08 /* Private */,
      61,    1,  392,    2, 0x08 /* Private */,
      62,    0,  395,    2, 0x08 /* Private */,
      63,    0,  396,    2, 0x08 /* Private */,
      64,    1,  397,    2, 0x08 /* Private */,
      66,    0,  400,    2, 0x08 /* Private */,
      67,    0,  401,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 8, 0x80000000 | 8,    4,    6,    7,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 8, 0x80000000 | 8,    4,    6,    7,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,   46,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 48,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 53,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   56,   57,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 65,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainInterface *_t = static_cast<MainInterface *>(_o);
        switch (_id) {
        case 0: _t->askGetVideo((*reinterpret_cast< WId*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< uint*(*)>(_a[4])),(*reinterpret_cast< uint*(*)>(_a[5]))); break;
        case 1: _t->askReleaseVideo(); break;
        case 2: _t->askVideoToResize((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 3: _t->askVideoSetFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->askVideoOnTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->minimalViewToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->fullscreenInterfaceToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->askToQuit(); break;
        case 8: _t->askBoss(); break;
        case 9: _t->askRaise(); break;
        case 10: _t->kc_pressed(); break;
        case 11: _t->dockPlaylist((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->dockPlaylist(); break;
        case 13: _t->toggleMinimalView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->togglePlaylist(); break;
        case 15: _t->toggleUpdateSystrayMenu(); break;
        case 16: _t->showUpdateSystrayMenu(); break;
        case 17: _t->hideUpdateSystrayMenu(); break;
        case 18: _t->toggleAdvancedButtons(); break;
        case 19: _t->toggleInterfaceFullScreen(); break;
        case 20: _t->toggleFSC(); break;
        case 21: _t->setStatusBarVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->setPlaylistVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->popupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 24: _t->getVideoSlot((*reinterpret_cast< WId*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< uint*(*)>(_a[4])),(*reinterpret_cast< uint*(*)>(_a[5]))); break;
        case 25: _t->releaseVideoSlot(); break;
        case 26: _t->emitBoss(); break;
        case 27: _t->emitRaise(); break;
        case 28: _t->reloadPrefs(); break;
        case 29: _t->toolBarConfUpdated(); break;
        case 30: _t->debug(); break;
        case 31: _t->destroyPopupMenu(); break;
        case 32: _t->recreateToolbars(); break;
        case 33: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->setVLCWindowsTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->setVLCWindowsTitle(); break;
        case 36: _t->handleSystrayClick((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 37: _t->updateSystrayTooltipName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->updateSystrayTooltipStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->showCryptedLabel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->handleKeyPress((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 41: _t->showBuffering((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->resizeStack((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->setVideoSize((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 44: _t->videoSizeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->setVideoFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->setVideoOnTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->setBoss(); break;
        case 48: _t->setRaise(); break;
        case 49: _t->showResumePanel((*reinterpret_cast< int64_t(*)>(_a[1]))); break;
        case 50: _t->hideResumePanel(); break;
        case 51: _t->resumePlayback(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainInterface::*_t)(WId * , int * , int * , unsigned  * , unsigned  * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askGetVideo)) {
                *result = 0;
            }
        }
        {
            typedef void (MainInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askReleaseVideo)) {
                *result = 1;
            }
        }
        {
            typedef void (MainInterface::*_t)(unsigned int , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askVideoToResize)) {
                *result = 2;
            }
        }
        {
            typedef void (MainInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askVideoSetFullScreen)) {
                *result = 3;
            }
        }
        {
            typedef void (MainInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askVideoOnTop)) {
                *result = 4;
            }
        }
        {
            typedef void (MainInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::minimalViewToggled)) {
                *result = 5;
            }
        }
        {
            typedef void (MainInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::fullscreenInterfaceToggled)) {
                *result = 6;
            }
        }
        {
            typedef void (MainInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askToQuit)) {
                *result = 7;
            }
        }
        {
            typedef void (MainInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askBoss)) {
                *result = 8;
            }
        }
        {
            typedef void (MainInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askRaise)) {
                *result = 9;
            }
        }
        {
            typedef void (MainInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::kc_pressed)) {
                *result = 10;
            }
        }
    }
}

const QMetaObject MainInterface::staticMetaObject = {
    { &QVLCMW::staticMetaObject, qt_meta_stringdata_MainInterface.data,
      qt_meta_data_MainInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainInterface.stringdata))
        return static_cast<void*>(const_cast< MainInterface*>(this));
    return QVLCMW::qt_metacast(_clname);
}

int MainInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCMW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 52;
    }
    return _id;
}

// SIGNAL 0
void MainInterface::askGetVideo(WId * _t1, int * _t2, int * _t3, unsigned  * _t4, unsigned  * _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainInterface::askReleaseVideo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MainInterface::askVideoToResize(unsigned int _t1, unsigned int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainInterface::askVideoSetFullScreen(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainInterface::askVideoOnTop(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainInterface::minimalViewToggled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainInterface::fullscreenInterfaceToggled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainInterface::askToQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void MainInterface::askBoss()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void MainInterface::askRaise()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void MainInterface::kc_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
