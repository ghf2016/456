/****************************************************************************
** Meta object code from reading C++ file 'LeftWdg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Room/LeftWdg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LeftWdg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LeftWdg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   33,    8,    8, 0x09,
      65,    8,    8,    8, 0x09,
      92,    8,    8,    8, 0x09,
     104,    8,    8,    8, 0x09,
     116,    8,    8,    8, 0x09,
     133,    8,    8,    8, 0x09,
     149,    8,    8,    8, 0x09,
     214,  165,    8,    8, 0x09,
     289,    8,    8,    8, 0x09,
     310,    8,    8,    8, 0x0a,
     338,  330,    8,    8, 0x0a,
     373,  365,    8,    8, 0x0a,
     400,    8,    8,    8, 0x0a,
     422,    8,    8,    8, 0x0a,
     448,  444,    8,    8, 0x0a,
     487,    8,    8,    8, 0x0a,
     511,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LeftWdg[] = {
    "LeftWdg\0\0EventUpdateUserListUI()\0pos\0"
    "OnUserListMenuPopup(QPoint)\0"
    "OnSpeakModeChange(QString)\0OnAddUser()\0"
    "OnDelUser()\0OnStartSpeaker()\0"
    "OnStopSpeaker()\0OnSetBigVideo()\0"
    "ulUserID,strMsg,font_size,fontFlat,color,familly\0"
    "getMessageFromOthers(unsigned long long,QString*,int,ulong,ulong,QStri"
    "ng*)\0"
    "OnUpdateUserListUI()\0btnSendMsgClicked()\0"
    "getFont\0slotOfFontChanged(QString)\0"
    "getSize\0slotOfSizeChanged(QString)\0"
    "slotOfColorChangetd()\0slotOfGifBtnClicked()\0"
    "num\0slotOfGifNumberGet(unsigned long long)\0"
    "slotOfQtetEditChanged()\0slotOfLeaveGifwdg()\0"
};

void LeftWdg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LeftWdg *_t = static_cast<LeftWdg *>(_o);
        switch (_id) {
        case 0: _t->EventUpdateUserListUI(); break;
        case 1: _t->OnUserListMenuPopup((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->OnSpeakModeChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->OnAddUser(); break;
        case 4: _t->OnDelUser(); break;
        case 5: _t->OnStartSpeaker(); break;
        case 6: _t->OnStopSpeaker(); break;
        case 7: _t->OnSetBigVideo(); break;
        case 8: _t->getMessageFromOthers((*reinterpret_cast< unsigned long long(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< ulong(*)>(_a[4])),(*reinterpret_cast< ulong(*)>(_a[5])),(*reinterpret_cast< QString*(*)>(_a[6]))); break;
        case 9: _t->OnUpdateUserListUI(); break;
        case 10: _t->btnSendMsgClicked(); break;
        case 11: _t->slotOfFontChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->slotOfSizeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->slotOfColorChangetd(); break;
        case 14: _t->slotOfGifBtnClicked(); break;
        case 15: _t->slotOfGifNumberGet((*reinterpret_cast< unsigned long long(*)>(_a[1]))); break;
        case 16: _t->slotOfQtetEditChanged(); break;
        case 17: _t->slotOfLeaveGifwdg(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LeftWdg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LeftWdg::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LeftWdg,
      qt_meta_data_LeftWdg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LeftWdg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LeftWdg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LeftWdg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LeftWdg))
        return static_cast<void*>(const_cast< LeftWdg*>(this));
    if (!strcmp(_clname, "Ui::LeftWdg"))
        return static_cast< Ui::LeftWdg*>(const_cast< LeftWdg*>(this));
    return QWidget::qt_metacast(_clname);
}

int LeftWdg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void LeftWdg::EventUpdateUserListUI()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
