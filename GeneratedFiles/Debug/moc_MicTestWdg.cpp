/****************************************************************************
** Meta object code from reading C++ file 'MicTestWdg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../VoiceTestGuide/MicTestWdg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MicTestWdg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MicTestWdg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   41,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MicTestWdg[] = {
    "MicTestWdg\0\0value\0EventVolumeChange(int)\0"
    "device\0OnMicChange(int)\0"
};

void MicTestWdg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MicTestWdg *_t = static_cast<MicTestWdg *>(_o);
        switch (_id) {
        case 0: _t->EventVolumeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnMicChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MicTestWdg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MicTestWdg::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MicTestWdg,
      qt_meta_data_MicTestWdg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MicTestWdg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MicTestWdg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MicTestWdg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MicTestWdg))
        return static_cast<void*>(const_cast< MicTestWdg*>(this));
    if (!strcmp(_clname, "IZYAudioCaptureEvent"))
        return static_cast< IZYAudioCaptureEvent*>(const_cast< MicTestWdg*>(this));
    if (!strcmp(_clname, "IZYAudioPlayerEvent"))
        return static_cast< IZYAudioPlayerEvent*>(const_cast< MicTestWdg*>(this));
    return QWidget::qt_metacast(_clname);
}

int MicTestWdg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MicTestWdg::EventVolumeChange(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
