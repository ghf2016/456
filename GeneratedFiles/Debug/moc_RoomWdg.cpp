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
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,    9,    8,    8, 0x0a,
      52,    8,    8,    8, 0x0a,
      65,    8,    8,    8, 0x0a,
      75,    8,    8,    8, 0x0a,
      92,    8,    8,    8, 0x0a,
     105,    8,    8,    8, 0x0a,
     124,    8,    8,    8, 0x0a,
     140,    8,    8,    8, 0x0a,
     160,    8,    8,    8, 0x0a,
     174,    8,    8,    8, 0x0a,
     189,    8,    8,    8, 0x0a,
     208,    8,    8,    8, 0x0a,
     223,    8,    8,    8, 0x0a,
     243,    8,    8,    8, 0x0a,
     267,    8,    8,    8, 0x0a,
     283,    8,    8,    8, 0x0a,
     296,    8,    8,    8, 0x0a,
     318,    8,    8,    8, 0x0a,
     370,  340,    8,    8, 0x0a,
     393,    8,    8,    8, 0x0a,
     412,    8,    8,    8, 0x0a,
     422,    8,    8,    8, 0x0a,
     434,    8,    8,    8, 0x0a,
     453,    8,    8,    8, 0x0a,
     477,  473,    8,    8, 0x0a,
     509,    8,    8,    8, 0x0a,
     531,    8,    8,    8, 0x0a,
     553,    8,    8,    8, 0x0a,
     572,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RoomWdg[] = {
    "RoomWdg\0\0url,index,total\0"
    "OnOpenDoc(QString,int,int)\0OnCloseDoc()\0"
    "OnClose()\0OnSysMenuClick()\0OnTrunLeft()\0"
    "OnStartAVSetting()\0OnBtnMicClick()\0"
    "OnBtnSpeakerClick()\0OnShowVideo()\0"
    "OnCloseVideo()\0OnVoiceTestGuide()\0"
    "OnApplyAdmin()\0OnMicVolumeChange()\0"
    "OnSpeakerVolumeChange()\0OnModeMeeting()\0"
    "OnModeLive()\0OnLabelNetInfoEnter()\0"
    "OnLabelNetInfoLeave()\0"
    "delay,uploadLost,downloadLost\0"
    "OnNetInfo(int,int,int)\0OnModifyPassWord()\0"
    "OnAbout()\0OnShowPPT()\0OnBtnShareCursor()\0"
    "OnBtnQuitShareDoc()\0x,y\0"
    "OnShowRemoteCursor(float,float)\0"
    "OnCloseRemoteCursor()\0OnVideoMonitorClick()\0"
    "OnQuitFullScreen()\0OnFullScreen()\0"
};

void RoomWdg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RoomWdg *_t = static_cast<RoomWdg *>(_o);
        switch (_id) {
        case 0: _t->OnOpenDoc((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->OnCloseDoc(); break;
        case 2: _t->OnClose(); break;
        case 3: _t->OnSysMenuClick(); break;
        case 4: _t->OnTrunLeft(); break;
        case 5: _t->OnStartAVSetting(); break;
        case 6: _t->OnBtnMicClick(); break;
        case 7: _t->OnBtnSpeakerClick(); break;
        case 8: _t->OnShowVideo(); break;
        case 9: _t->OnCloseVideo(); break;
        case 10: _t->OnVoiceTestGuide(); break;
        case 11: _t->OnApplyAdmin(); break;
        case 12: _t->OnMicVolumeChange(); break;
        case 13: _t->OnSpeakerVolumeChange(); break;
        case 14: _t->OnModeMeeting(); break;
        case 15: _t->OnModeLive(); break;
        case 16: _t->OnLabelNetInfoEnter(); break;
        case 17: _t->OnLabelNetInfoLeave(); break;
        case 18: _t->OnNetInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->OnModifyPassWord(); break;
        case 20: _t->OnAbout(); break;
        case 21: _t->OnShowPPT(); break;
        case 22: _t->OnBtnShareCursor(); break;
        case 23: _t->OnBtnQuitShareDoc(); break;
        case 24: _t->OnShowRemoteCursor((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 25: _t->OnCloseRemoteCursor(); break;
        case 26: _t->OnVideoMonitorClick(); break;
        case 27: _t->OnQuitFullScreen(); break;
        case 28: _t->OnFullScreen(); break;
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
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
