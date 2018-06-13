/****************************************************************************
** Meta object code from reading C++ file 'RoomWdg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Room/RoomWdg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RoomWdg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RoomWdg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      19,    8,    8,    8, 0x0a,
      36,    8,    8,    8, 0x0a,
      55,    8,    8,    8, 0x0a,
      71,    8,    8,    8, 0x0a,
      91,    8,    8,    8, 0x0a,
     110,    8,    8,    8, 0x0a,
     125,    8,    8,    8, 0x0a,
     145,    8,    8,    8, 0x0a,
     169,    8,    8,    8, 0x0a,
     185,    8,    8,    8, 0x0a,
     198,    8,    8,    8, 0x0a,
     220,    8,    8,    8, 0x0a,
     272,  242,    8,    8, 0x0a,
     295,    8,    8,    8, 0x0a,
     314,    8,    8,    8, 0x0a,
     324,    8,    8,    8, 0x0a,
     343,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RoomWdg[] = {
    "RoomWdg\0\0OnClose()\0OnSysMenuClick()\0"
    "OnStartAVSetting()\0OnBtnMicClick()\0"
    "OnBtnSpeakerClick()\0OnVoiceTestGuide()\0"
    "OnApplyAdmin()\0OnMicVolumeChange()\0"
    "OnSpeakerVolumeChange()\0OnModeMeeting()\0"
    "OnModeLive()\0OnLabelNetInfoEnter()\0"
    "OnLabelNetInfoLeave()\0"
    "delay,uploadLost,downloadLost\0"
    "OnNetInfo(int,int,int)\0OnModifyPassWord()\0"
    "OnAbout()\0OnQuitFullScreen()\0"
    "OnFullScreen()\0"
};

void RoomWdg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RoomWdg *_t = static_cast<RoomWdg *>(_o);
        switch (_id) {
        case 0: _t->OnClose(); break;
        case 1: _t->OnSysMenuClick(); break;
        case 2: _t->OnStartAVSetting(); break;
        case 3: _t->OnBtnMicClick(); break;
        case 4: _t->OnBtnSpeakerClick(); break;
        case 5: _t->OnVoiceTestGuide(); break;
        case 6: _t->OnApplyAdmin(); break;
        case 7: _t->OnMicVolumeChange(); break;
        case 8: _t->OnSpeakerVolumeChange(); break;
        case 9: _t->OnModeMeeting(); break;
        case 10: _t->OnModeLive(); break;
        case 11: _t->OnLabelNetInfoEnter(); break;
        case 12: _t->OnLabelNetInfoLeave(); break;
        case 13: _t->OnNetInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->OnModifyPassWord(); break;
        case 15: _t->OnAbout(); break;
        case 16: _t->OnQuitFullScreen(); break;
        case 17: _t->OnFullScreen(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RoomWdg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RoomWdg::staticMetaObject = {
    { &CCommonWidget::staticMetaObject, qt_meta_stringdata_RoomWdg,
      qt_meta_data_RoomWdg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RoomWdg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RoomWdg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RoomWdg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RoomWdg))
        return static_cast<void*>(const_cast< RoomWdg*>(this));
    if (!strcmp(_clname, "IZYVideoCaptureEvent"))
        return static_cast< IZYVideoCaptureEvent*>(const_cast< RoomWdg*>(this));
    return CCommonWidget::qt_metacast(_clname);
}

int RoomWdg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CCommonWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
