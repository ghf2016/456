/****************************************************************************
** Meta object code from reading C++ file 'MeetingRoomWordWdg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MeetingListModel/MeetingRoomWordWdg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MeetingRoomWordWdg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeetingRoomWordWdg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   19,   19,   19, 0x0a,
      66,   19,   19,   19, 0x0a,
      77,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MeetingRoomWordWdg[] = {
    "MeetingRoomWordWdg\0\0roomId\0"
    "toEnterRoomWithRoomId(uint32_t)\0OnOK()\0"
    "OnCancel()\0OnClose()\0"
};

void MeetingRoomWordWdg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MeetingRoomWordWdg *_t = static_cast<MeetingRoomWordWdg *>(_o);
        switch (_id) {
        case 0: _t->toEnterRoomWithRoomId((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 1: _t->OnOK(); break;
        case 2: _t->OnCancel(); break;
        case 3: _t->OnClose(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MeetingRoomWordWdg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeetingRoomWordWdg::staticMetaObject = {
    { &CCommonWidget::staticMetaObject, qt_meta_stringdata_MeetingRoomWordWdg,
      qt_meta_data_MeetingRoomWordWdg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeetingRoomWordWdg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeetingRoomWordWdg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeetingRoomWordWdg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeetingRoomWordWdg))
        return static_cast<void*>(const_cast< MeetingRoomWordWdg*>(this));
    return CCommonWidget::qt_metacast(_clname);
}

int MeetingRoomWordWdg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CCommonWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MeetingRoomWordWdg::toEnterRoomWithRoomId(uint32_t _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
