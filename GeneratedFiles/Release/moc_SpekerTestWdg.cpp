/****************************************************************************
** Meta object code from reading C++ file 'SpekerTestWdg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../VoiceTestGuide/SpekerTestWdg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpekerTestWdg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpekerTestWdg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   44,   14,   14, 0x0a,
      72,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SpekerTestWdg[] = {
    "SpekerTestWdg\0\0value\0EventVolumeChange(int)\0"
    "device\0OnSpeakerChange(int)\0OnStartTest()\0"
};

void SpekerTestWdg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpekerTestWdg *_t = static_cast<SpekerTestWdg *>(_o);
        switch (_id) {
        case 0: _t->EventVolumeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnSpeakerChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnStartTest(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SpekerTestWdg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpekerTestWdg::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SpekerTestWdg,
      qt_meta_data_SpekerTestWdg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpekerTestWdg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpekerTestWdg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpekerTestWdg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpekerTestWdg))
        return static_cast<void*>(const_cast< SpekerTestWdg*>(this));
    if (!strcmp(_clname, "IZYAudioPlayerEvent"))
        return static_cast< IZYAudioPlayerEvent*>(const_cast< SpekerTestWdg*>(this));
    return QWidget::qt_metacast(_clname);
}

int SpekerTestWdg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SpekerTestWdg::EventVolumeChange(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
