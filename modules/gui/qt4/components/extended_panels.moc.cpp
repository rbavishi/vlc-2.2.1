/****************************************************************************
** Meta object code from reading C++ file 'extended_panels.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "extended_panels.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extended_panels.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ExtVideo_t {
    QByteArrayData data[7];
    char stringdata[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtVideo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtVideo_t qt_meta_stringdata_ExtVideo = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ExtVideo"
QT_MOC_LITERAL(1, 9, 13), // "updateFilters"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 19), // "updateFilterOptions"
QT_MOC_LITERAL(4, 44, 10), // "cropChange"
QT_MOC_LITERAL(5, 55, 10), // "browseLogo"
QT_MOC_LITERAL(6, 66, 15) // "browseEraseFile"

    },
    "ExtVideo\0updateFilters\0\0updateFilterOptions\0"
    "cropChange\0browseLogo\0browseEraseFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtVideo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ExtVideo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExtVideo *_t = static_cast<ExtVideo *>(_o);
        switch (_id) {
        case 0: _t->updateFilters(); break;
        case 1: _t->updateFilterOptions(); break;
        case 2: _t->cropChange(); break;
        case 3: _t->browseLogo(); break;
        case 4: _t->browseEraseFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ExtVideo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ExtVideo.data,
      qt_meta_data_ExtVideo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExtVideo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtVideo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExtVideo.stringdata))
        return static_cast<void*>(const_cast< ExtVideo*>(this));
    return QObject::qt_metacast(_clname);
}

int ExtVideo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_ExtV4l2_t {
    QByteArrayData data[5];
    char stringdata[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtV4l2_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtV4l2_t qt_meta_stringdata_ExtV4l2 = {
    {
QT_MOC_LITERAL(0, 0, 7), // "ExtV4l2"
QT_MOC_LITERAL(1, 8, 7), // "Refresh"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 11), // "ValueChange"
QT_MOC_LITERAL(4, 29, 5) // "value"

    },
    "ExtV4l2\0Refresh\0\0ValueChange\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtV4l2[] = {

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
       3,    1,   30,    2, 0x08 /* Private */,
       3,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void ExtV4l2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExtV4l2 *_t = static_cast<ExtV4l2 *>(_o);
        switch (_id) {
        case 0: _t->Refresh(); break;
        case 1: _t->ValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ValueChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ExtV4l2::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ExtV4l2.data,
      qt_meta_data_ExtV4l2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExtV4l2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtV4l2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExtV4l2.stringdata))
        return static_cast<void*>(const_cast< ExtV4l2*>(this));
    return QWidget::qt_metacast(_clname);
}

int ExtV4l2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_FilterSliderData_t {
    QByteArrayData data[7];
    char stringdata[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FilterSliderData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FilterSliderData_t qt_meta_stringdata_FilterSliderData = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FilterSliderData"
QT_MOC_LITERAL(1, 17, 14), // "onValueChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 1), // "i"
QT_MOC_LITERAL(4, 35, 10), // "updateText"
QT_MOC_LITERAL(5, 46, 13), // "writeToConfig"
QT_MOC_LITERAL(6, 60, 15) // "setSaveToConfig"

    },
    "FilterSliderData\0onValueChanged\0\0i\0"
    "updateText\0writeToConfig\0setSaveToConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilterSliderData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       5,    0,   40,    2, 0x0a /* Public */,
       6,    1,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void FilterSliderData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FilterSliderData *_t = static_cast<FilterSliderData *>(_o);
        switch (_id) {
        case 0: _t->onValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateText((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->writeToConfig(); break;
        case 3: _t->setSaveToConfig((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FilterSliderData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FilterSliderData.data,
      qt_meta_data_FilterSliderData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FilterSliderData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterSliderData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FilterSliderData.stringdata))
        return static_cast<void*>(const_cast< FilterSliderData*>(this));
    return QObject::qt_metacast(_clname);
}

int FilterSliderData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_AudioFilterControlWidget_t {
    QByteArrayData data[4];
    char stringdata[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioFilterControlWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioFilterControlWidget_t qt_meta_stringdata_AudioFilterControlWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "AudioFilterControlWidget"
QT_MOC_LITERAL(1, 25, 6), // "enable"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15) // "setSaveToConfig"

    },
    "AudioFilterControlWidget\0enable\0\0"
    "setSaveToConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioFilterControlWidget[] = {

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
       1,    1,   24,    2, 0x09 /* Protected */,
       3,    1,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void AudioFilterControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioFilterControlWidget *_t = static_cast<AudioFilterControlWidget *>(_o);
        switch (_id) {
        case 0: _t->enable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setSaveToConfig((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AudioFilterControlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AudioFilterControlWidget.data,
      qt_meta_data_AudioFilterControlWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AudioFilterControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioFilterControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AudioFilterControlWidget.stringdata))
        return static_cast<void*>(const_cast< AudioFilterControlWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int AudioFilterControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_EqualizerSliderData_t {
    QByteArrayData data[5];
    char stringdata[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EqualizerSliderData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EqualizerSliderData_t qt_meta_stringdata_EqualizerSliderData = {
    {
QT_MOC_LITERAL(0, 0, 19), // "EqualizerSliderData"
QT_MOC_LITERAL(1, 20, 14), // "onValueChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 1), // "i"
QT_MOC_LITERAL(4, 38, 13) // "writeToConfig"

    },
    "EqualizerSliderData\0onValueChanged\0\0"
    "i\0writeToConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EqualizerSliderData[] = {

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
       1,    1,   24,    2, 0x0a /* Public */,
       4,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void EqualizerSliderData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EqualizerSliderData *_t = static_cast<EqualizerSliderData *>(_o);
        switch (_id) {
        case 0: _t->onValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->writeToConfig(); break;
        default: ;
        }
    }
}

const QMetaObject EqualizerSliderData::staticMetaObject = {
    { &FilterSliderData::staticMetaObject, qt_meta_stringdata_EqualizerSliderData.data,
      qt_meta_data_EqualizerSliderData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EqualizerSliderData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EqualizerSliderData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EqualizerSliderData.stringdata))
        return static_cast<void*>(const_cast< EqualizerSliderData*>(this));
    return FilterSliderData::qt_metacast(_clname);
}

int EqualizerSliderData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FilterSliderData::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Equalizer_t {
    QByteArrayData data[5];
    char stringdata[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Equalizer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Equalizer_t qt_meta_stringdata_Equalizer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Equalizer"
QT_MOC_LITERAL(1, 10, 15), // "setSaveToConfig"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "setCorePreset"
QT_MOC_LITERAL(4, 41, 11) // "enable2Pass"

    },
    "Equalizer\0setSaveToConfig\0\0setCorePreset\0"
    "enable2Pass"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Equalizer[] = {

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
       1,    1,   29,    2, 0x09 /* Protected */,
       3,    1,   32,    2, 0x08 /* Private */,
       4,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void Equalizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Equalizer *_t = static_cast<Equalizer *>(_o);
        switch (_id) {
        case 0: _t->setSaveToConfig((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setCorePreset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->enable2Pass((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Equalizer::staticMetaObject = {
    { &AudioFilterControlWidget::staticMetaObject, qt_meta_stringdata_Equalizer.data,
      qt_meta_data_Equalizer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Equalizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Equalizer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Equalizer.stringdata))
        return static_cast<void*>(const_cast< Equalizer*>(this));
    return AudioFilterControlWidget::qt_metacast(_clname);
}

int Equalizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioFilterControlWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Compressor_t {
    QByteArrayData data[1];
    char stringdata[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Compressor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Compressor_t qt_meta_stringdata_Compressor = {
    {
QT_MOC_LITERAL(0, 0, 10) // "Compressor"

    },
    "Compressor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Compressor[] = {

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

void Compressor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Compressor::staticMetaObject = {
    { &AudioFilterControlWidget::staticMetaObject, qt_meta_stringdata_Compressor.data,
      qt_meta_data_Compressor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Compressor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Compressor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Compressor.stringdata))
        return static_cast<void*>(const_cast< Compressor*>(this));
    return AudioFilterControlWidget::qt_metacast(_clname);
}

int Compressor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioFilterControlWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_Spatializer_t {
    QByteArrayData data[1];
    char stringdata[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Spatializer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Spatializer_t qt_meta_stringdata_Spatializer = {
    {
QT_MOC_LITERAL(0, 0, 11) // "Spatializer"

    },
    "Spatializer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Spatializer[] = {

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

void Spatializer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Spatializer::staticMetaObject = {
    { &AudioFilterControlWidget::staticMetaObject, qt_meta_stringdata_Spatializer.data,
      qt_meta_data_Spatializer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Spatializer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Spatializer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Spatializer.stringdata))
        return static_cast<void*>(const_cast< Spatializer*>(this));
    return AudioFilterControlWidget::qt_metacast(_clname);
}

int Spatializer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioFilterControlWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_SyncWidget_t {
    QByteArrayData data[5];
    char stringdata[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SyncWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SyncWidget_t qt_meta_stringdata_SyncWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SyncWidget"
QT_MOC_LITERAL(1, 11, 12), // "valueChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 19), // "valueChangedHandler"
QT_MOC_LITERAL(4, 45, 1) // "d"

    },
    "SyncWidget\0valueChanged\0\0valueChangedHandler\0"
    "d"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SyncWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    4,

       0        // eod
};

void SyncWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SyncWidget *_t = static_cast<SyncWidget *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->valueChangedHandler((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SyncWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncWidget::valueChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SyncWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SyncWidget.data,
      qt_meta_data_SyncWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SyncWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SyncWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SyncWidget.stringdata))
        return static_cast<void*>(const_cast< SyncWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SyncWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SyncWidget::valueChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SyncControls_t {
    QByteArrayData data[7];
    char stringdata[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SyncControls_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SyncControls_t qt_meta_stringdata_SyncControls = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SyncControls"
QT_MOC_LITERAL(1, 13, 6), // "update"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "advanceAudio"
QT_MOC_LITERAL(4, 34, 11), // "advanceSubs"
QT_MOC_LITERAL(5, 46, 15), // "adjustSubsSpeed"
QT_MOC_LITERAL(6, 62, 18) // "adjustSubsDuration"

    },
    "SyncControls\0update\0\0advanceAudio\0"
    "advanceSubs\0adjustSubsSpeed\0"
    "adjustSubsDuration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SyncControls[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x08 /* Private */,
       4,    1,   43,    2, 0x08 /* Private */,
       5,    1,   46,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void SyncControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SyncControls *_t = static_cast<SyncControls *>(_o);
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->advanceAudio((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->advanceSubs((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->adjustSubsSpeed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->adjustSubsDuration((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SyncControls::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SyncControls.data,
      qt_meta_data_SyncControls,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SyncControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SyncControls::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SyncControls.stringdata))
        return static_cast<void*>(const_cast< SyncControls*>(this));
    return QWidget::qt_metacast(_clname);
}

int SyncControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
