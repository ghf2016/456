/****************************************************************************
** Meta object code from reading C++ file 'eventcenter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../eventcenter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eventcenter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EventCenter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      24,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      33,   12,   12,   12, 0x05,
      62,   52,   12,   12, 0x05,
     103,   12,   12,   12, 0x05,
     118,   12,   12,   12, 0x05,
     139,  133,   12,   12, 0x05,
     161,   12,   12,   12, 0x05,
     182,  177,   12,   12, 0x05,
     209,  204,   12,   12, 0x05,
     235,  204,   12,   12, 0x05,
     260,   52,   12,   12, 0x05,
     327,  297,   12,   12, 0x05,
     361,   52,   12,   12, 0x05,
     407,  400,   12,   12, 0x05,
     444,  428,   12,   12, 0x05,
     474,   12,   12,   12, 0x05,
     490,   12,   12,   12, 0x05,
     519,  515,   12,   12, 0x05,
     554,   12,   12,   12, 0x05,
     581,   12,   12,   12, 0x05,
     622,  607,   12,   12, 0x05,
     670,  666,   12,   12, 0x05,
     700,  695,   12,   12, 0x05,
     769,  720,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     839,   52,   12,   12, 0x0a,
     877,   12,   12,   12, 0x0a,
     890,  177,   12,   12, 0x0a,
     909,  204,   12,   12, 0x0a,
     932,  204,   12,   12, 0x0a,
     954,   52,   12,   12, 0x0a,
     988,   52,   12,   12, 0x0a,
    1024,  400,   12,   12, 0x0a,
    1042,   12,   12,   12, 0x0a,
    1068,   12,   12,   12, 0x0a,
    1108, 1093,   12,   12, 0x0a,
    1153,  666,   12,   12, 0x0a,
    1179,  695,   12,   12, 0x0a,
    1200,   12,   12,   12, 0x0a,
    1221,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EventCenter[] = {
    "EventCenter\0\0EventLoginSuccess()\0"
    "EventLoginFailed()\0sessionID\0"
    "EventRecvRemoteVideo(unsigned long long)\0"
    "EventAddUser()\0EventDelUser()\0total\0"
    "EventGetRoomList(int)\0EventUpdateUI()\0"
    "bSet\0EventSetSpeaker(bool)\0mode\0"
    "EventSpeakModeChange(int)\0"
    "EventRoomModeChange(int)\0"
    "EventUserOffline(unsigned long long)\0"
    "delay,uploadLost,downloadLost\0"
    "EventOnStreamNetInfo(int,int,int)\0"
    "EventSetAsBigVideo(unsigned long long)\0"
    "result\0EventEnterRoom(uint)\0url,index,total\0"
    "EventOpenDoc(QString,int,int)\0"
    "EventCloseDoc()\0EventCloseRemoteCursor()\0"
    "x,y\0EventShowRemoteCursor(float,float)\0"
    "EventOnStartVideoMonitor()\0"
    "EventOnStopVideoMonitor()\0sessionId,ssrc\0"
    "EventRecvVideoSSRC(unsigned long long,uint)\0"
    "url\0EventUpdateSoft(QString)\0code\0"
    "EventNetEvent(uint)\0"
    "ulUserID,strMsg,font_size,fontFlat,color,familly\0"
    "getMessageEvent(unsigned long long,QString*,int,ulong,ulong,QString*)\0"
    "OnRecvRemoteVideo(unsigned long long)\0"
    "OnUpdateUI()\0OnSetSpeaker(bool)\0"
    "OnSpeakModeChange(int)\0OnRoomModeChange(int)\0"
    "OnUserOffline(unsigned long long)\0"
    "OnSetAsBigVideo(unsigned long long)\0"
    "OnEnterRoom(uint)\0On_UI_StartVideoMonitor()\0"
    "On_UI_StopVideoMonitor()\0sessionID,ssrc\0"
    "On_UI_RecvVideoSSRC(unsigned long long,uint)\0"
    "On_UI_UpdateSoft(QString)\0"
    "On_UI_NetEvent(uint)\0On_UI_LoginSuccess()\0"
    "OnReConnectTimer()\0"
};

void EventCenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EventCenter *_t = static_cast<EventCenter *>(_o);
        switch (_id) {
        case 0: _t->EventLoginSuccess(); break;
        case 1: _t->EventLoginFailed(); break;
        case 2: _t->EventRecvRemoteVideo((*reinterpret_cast< unsigned long long(*)>(_a[1]))); break;
        case 3: _t->EventAddUser(); break;
        case 4: _t->EventDelUser(); break;
        case 5: _t->EventGetRoomList((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->EventUpdateUI(); break;
        case 7: _t->EventSetSpeaker((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->EventSpeakModeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->EventRoomModeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->EventUserOffline((*reinterpret_cast< unsigned long long(*)>(_a[1]))); break;
        case 11: _t->EventOnStreamNetInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->EventSetAsBigVideo((*reinterpret_cast< unsigned long long(*)>(_a[1]))); break;
        case 13: _t->EventEnterRoom((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 14: _t->EventOpenDoc((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->EventCloseDoc(); break;
        case 16: _t->EventCloseRemoteCursor(); break;
        case 17: _t->EventShowRemoteCursor((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 18: _t->EventOnStartVideoMonitor(); break;
        case 19: _t->EventOnStopVideoMonitor(); break;
        case 20: _t->EventRecvVideoSSRC((*reinterpret_cast< unsigned long long(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 21: _t->EventUpdateSoft((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->EventNetEvent((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 23: _t->getMessageEvent((*reinterpret_cast< unsigned long long(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< ulong(*)>(_a[4])),(*reinterpret_cast< ulong(*)>(_a[5])),(*reinterpret_cast< QString*(*)>(_a[6]))); break;
        case 24: _t->OnRecvRemoteVideo((*reinterpret_cast< unsigned long long(*)>(_a[1]))); break;
        case 25: _t->OnUpdateUI(); break;
        case 26: _t->OnSetSpeaker((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->OnSpeakModeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->OnRoomModeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->OnUserOffline((*reinterpret_cast< unsigned long long(*)>(_a[1]))); break;
        case 30: _t->OnSetAsBigVideo((*reinterpret_cast< unsigned long long(*)>(_a[1]))); break;
        case 31: _t->OnEnterRoom((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 32: _t->On_UI_StartVideoMonitor(); break;
        case 33: _t->On_UI_StopVideoMonitor(); break;
        case 34: _t->On_UI_RecvVideoSSRC((*reinterpret_cast< unsigned long long(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 35: _t->On_UI_UpdateSoft((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: _t->On_UI_NetEvent((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 37: _t->On_UI_LoginSuccess(); break;
        case 38: _t->OnReConnectTimer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EventCenter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EventCenter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EventCenter,
      qt_meta_data_EventCenter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EventCenter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EventCenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EventCenter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EventCenter))
        return static_cast<void*>(const_cast< EventCenter*>(this));
    if (!strcmp(_clname, "IMeetingFrameEvent"))
        return static_cast< IMeetingFrameEvent*>(const_cast< EventCenter*>(this));
    if (!strcmp(_clname, "IMediaStreamEvent"))
        return static_cast< IMediaStreamEvent*>(const_cast< EventCenter*>(this));
    return QWidget::qt_metacast(_clname);
}

int EventCenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void EventCenter::EventLoginSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void EventCenter::EventLoginFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void EventCenter::EventRecvRemoteVideo(unsigned long long _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void EventCenter::EventAddUser()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void EventCenter::EventDelUser()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void EventCenter::EventGetRoomList(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void EventCenter::EventUpdateUI()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void EventCenter::EventSetSpeaker(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void EventCenter::EventSpeakModeChange(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void EventCenter::EventRoomModeChange(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void EventCenter::EventUserOffline(unsigned long long _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void EventCenter::EventOnStreamNetInfo(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void EventCenter::EventSetAsBigVideo(unsigned long long _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void EventCenter::EventEnterRoom(unsigned int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void EventCenter::EventOpenDoc(QString _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void EventCenter::EventCloseDoc()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}

// SIGNAL 16
void EventCenter::EventCloseRemoteCursor()
{
    QMetaObject::activate(this, &staticMetaObject, 16, 0);
}

// SIGNAL 17
void EventCenter::EventShowRemoteCursor(float _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void EventCenter::EventOnStartVideoMonitor()
{
    QMetaObject::activate(this, &staticMetaObject, 18, 0);
}

// SIGNAL 19
void EventCenter::EventOnStopVideoMonitor()
{
    QMetaObject::activate(this, &staticMetaObject, 19, 0);
}

// SIGNAL 20
void EventCenter::EventRecvVideoSSRC(unsigned long long _t1, unsigned int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void EventCenter::EventUpdateSoft(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void EventCenter::EventNetEvent(unsigned int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void EventCenter::getMessageEvent(unsigned long long _t1, QString * _t2, int _t3, unsigned long _t4, unsigned long _t5, QString * _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}
QT_END_MOC_NAMESPACE
