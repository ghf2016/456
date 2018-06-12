/****************************************************************************
** Meta object code from reading C++ file 'UserLoginWdg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../login/UserLoginWdg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserLoginWdg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UserLoginWdg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      39,   13,   13,   13, 0x05,
      69,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      91,   13,   13,   13, 0x09,
     101,   13,   13,   13, 0x0a,
     119,   13,   13,   13, 0x0a,
     139,   13,   13,   13, 0x0a,
     155,   13,   13,   13, 0x0a,
     180,  173,   13,   13, 0x0a,
     201,   13,   13,   13, 0x0a,
     231,   13,   13,   13, 0x0a,
     247,   13,   13,   13, 0x0a,
     270,  264,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UserLoginWdg[] = {
    "UserLoginWdg\0\0loginFromWebWithUserId()\0"
    "loginFromWebWithMeetingRoom()\0"
    "loginFromWebToLogin()\0OnClose()\0"
    "countBtnClicked()\0meetingBtnClicked()\0"
    "setBtnClicked()\0loginBtnClicked()\0"
    "status\0checkBoxClicked(int)\0"
    "getSignalToHiddenLoadWidget()\0"
    "OnLoginFailed()\0OnLoginSuccess()\0total\0"
    "OnGetRoomList(int)\0"
};

void UserLoginWdg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UserLoginWdg *_t = static_cast<UserLoginWdg *>(_o);
        switch (_id) {
        case 0: _t->loginFromWebWithUserId(); break;
        case 1: _t->loginFromWebWithMeetingRoom(); break;
        case 2: _t->loginFromWebToLogin(); break;
        case 3: _t->OnClose(); break;
        case 4: _t->countBtnClicked(); break;
        case 5: _t->meetingBtnClicked(); break;
        case 6: _t->setBtnClicked(); break;
        case 7: _t->loginBtnClicked(); break;
        case 8: _t->checkBoxClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->getSignalToHiddenLoadWidget(); break;
        case 10: _t->OnLoginFailed(); break;
        case 11: _t->OnLoginSuccess(); break;
        case 12: _t->OnGetRoomList((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UserLoginWdg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UserLoginWdg::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UserLoginWdg,
      qt_meta_data_UserLoginWdg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserLoginWdg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserLoginWdg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserLoginWdg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserLoginWdg))
        return static_cast<void*>(const_cast< UserLoginWdg*>(this));
    return QWidget::qt_metacast(_clname);
}

int UserLoginWdg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void UserLoginWdg::loginFromWebWithUserId()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UserLoginWdg::loginFromWebWithMeetingRoom()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UserLoginWdg::loginFromWebToLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
