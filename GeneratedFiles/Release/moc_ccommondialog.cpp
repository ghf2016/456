/****************************************************************************
** Meta object code from reading C++ file 'ccommondialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../common/ccommondialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccommondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CCommonDialog[] = {

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
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,   14,   14,   14, 0x09,
      38,   14,   14,   14, 0x09,
      55,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CCommonDialog[] = {
    "CCommonDialog\0\0OnClose()\0OnMaxClick()\0"
    "OnRestoreClick()\0OnMinClick()\0"
};

void CCommonDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CCommonDialog *_t = static_cast<CCommonDialog *>(_o);
        switch (_id) {
        case 0: _t->OnClose(); break;
        case 1: _t->OnMaxClick(); break;
        case 2: _t->OnRestoreClick(); break;
        case 3: _t->OnMinClick(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CCommonDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CCommonDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CCommonDialog,
      qt_meta_data_CCommonDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CCommonDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CCommonDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CCommonDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CCommonDialog))
        return static_cast<void*>(const_cast< CCommonDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CCommonDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void CCommonDialog::OnClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
