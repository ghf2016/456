/****************************************************************************
** Meta object code from reading C++ file 'ModifyPassWord.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Setting/ModifyPassWord.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModifyPassWord.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ModifyPassWord[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      23,   15,   15,   15, 0x0a,
      34,   15,   15,   15, 0x0a,
      44,   15,   15,   15, 0x0a,
      70,   15,   15,   15, 0x0a,
     101,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ModifyPassWord[] = {
    "ModifyPassWord\0\0OnOK()\0OnCancel()\0"
    "OnClose()\0judeLastPasswordIsRight()\0"
    "judeNewPasswordFormatIsRight()\0"
    "judePasswordKeepSame()\0"
};

void ModifyPassWord::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModifyPassWord *_t = static_cast<ModifyPassWord *>(_o);
        switch (_id) {
        case 0: _t->OnOK(); break;
        case 1: _t->OnCancel(); break;
        case 2: _t->OnClose(); break;
        case 3: _t->judeLastPasswordIsRight(); break;
        case 4: _t->judeNewPasswordFormatIsRight(); break;
        case 5: _t->judePasswordKeepSame(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ModifyPassWord::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModifyPassWord::staticMetaObject = {
    { &CCommonWidget::staticMetaObject, qt_meta_stringdata_ModifyPassWord,
      qt_meta_data_ModifyPassWord, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModifyPassWord::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModifyPassWord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModifyPassWord::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyPassWord))
        return static_cast<void*>(const_cast< ModifyPassWord*>(this));
    if (!strcmp(_clname, "Ui::ModifyPassWord"))
        return static_cast< Ui::ModifyPassWord*>(const_cast< ModifyPassWord*>(this));
    return CCommonWidget::qt_metacast(_clname);
}

int ModifyPassWord::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CCommonWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
