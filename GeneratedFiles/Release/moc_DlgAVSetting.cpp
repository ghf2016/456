/****************************************************************************
** Meta object code from reading C++ file 'DlgAVSetting.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Setting/DlgAVSetting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgAVSetting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DlgAVSetting[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   13,   13,   13, 0x0a,
      41,   13,   13,   13, 0x0a,
      58,   52,   13,   13, 0x0a,
      75,   52,   13,   13, 0x0a,
      96,   52,   13,   13, 0x0a,
     116,   52,   13,   13, 0x0a,
     133,   13,   13,   13, 0x0a,
     150,   13,   13,   13, 0x0a,
     160,   13,   13,   13, 0x0a,
     180,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DlgAVSetting[] = {
    "DlgAVSetting\0\0EventRestartAudio()\0"
    "OnOK()\0OnCancel()\0index\0OnMicChange(int)\0"
    "OnSpeakerChange(int)\0OnCameraChange(int)\0"
    "OnTabChange(int)\0OnRestartAudio()\0"
    "OnClose()\0OnMicVolumeChange()\0"
    "OnSpeakerVolumeChange()\0"
};

void DlgAVSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgAVSetting *_t = static_cast<DlgAVSetting *>(_o);
        switch (_id) {
        case 0: _t->EventRestartAudio(); break;
        case 1: _t->OnOK(); break;
        case 2: _t->OnCancel(); break;
        case 3: _t->OnMicChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->OnSpeakerChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->OnCameraChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->OnTabChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->OnRestartAudio(); break;
        case 8: _t->OnClose(); break;
        case 9: _t->OnMicVolumeChange(); break;
        case 10: _t->OnSpeakerVolumeChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DlgAVSetting::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DlgAVSetting::staticMetaObject = {
    { &CCommonWidget::staticMetaObject, qt_meta_stringdata_DlgAVSetting,
      qt_meta_data_DlgAVSetting, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DlgAVSetting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DlgAVSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DlgAVSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DlgAVSetting))
        return static_cast<void*>(const_cast< DlgAVSetting*>(this));
    if (!strcmp(_clname, "IZYVideoCaptureEvent"))
        return static_cast< IZYVideoCaptureEvent*>(const_cast< DlgAVSetting*>(this));
    if (!strcmp(_clname, "IZYAudioCaptureEvent"))
        return static_cast< IZYAudioCaptureEvent*>(const_cast< DlgAVSetting*>(this));
    if (!strcmp(_clname, "IZYAudioPlayerEvent"))
        return static_cast< IZYAudioPlayerEvent*>(const_cast< DlgAVSetting*>(this));
    return CCommonWidget::qt_metacast(_clname);
}

int DlgAVSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CCommonWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void DlgAVSetting::EventRestartAudio()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
