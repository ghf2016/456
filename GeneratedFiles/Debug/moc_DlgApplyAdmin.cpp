/****************************************************************************
** Meta object code from reading C++ file 'DlgApplyAdmin.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Room/DlgApplyAdmin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgApplyAdmin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DlgApplyAdmin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      22,   14,   14,   14, 0x0a,
      33,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DlgApplyAdmin[] = {
    "DlgApplyAdmin\0\0OnOK()\0OnCancel()\0"
    "OnClose()\0"
};

void DlgApplyAdmin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgApplyAdmin *_t = static_cast<DlgApplyAdmin *>(_o);
        switch (_id) {
        case 0: _t->OnOK(); break;
        case 1: _t->OnCancel(); break;
        case 2: _t->OnClose(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DlgApplyAdmin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DlgApplyAdmin::staticMetaObject = {
    { &CCommonWidget::staticMetaObject, qt_meta_stringdata_DlgApplyAdmin,
      qt_meta_data_DlgApplyAdmin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DlgApplyAdmin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DlgApplyAdmin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DlgApplyAdmin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DlgApplyAdmin))
        return static_cast<void*>(const_cast< DlgApplyAdmin*>(this));
    if (!strcmp(_clname, "Ui::DlgApplyAdmin"))
        return static_cast< Ui::DlgApplyAdmin*>(const_cast< DlgApplyAdmin*>(this));
    return CCommonWidget::qt_metacast(_clname);
}

int DlgApplyAdmin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CCommonWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
