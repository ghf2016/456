/****************************************************************************
** Meta object code from reading C++ file 'LabelNetInfo.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Room/LabelNetInfo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LabelNetInfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LabelNetInfo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      27,   13,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_LabelNetInfo[] = {
    "LabelNetInfo\0\0EventEnter()\0EventLeave()\0"
};

void LabelNetInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LabelNetInfo *_t = static_cast<LabelNetInfo *>(_o);
        switch (_id) {
        case 0: _t->EventEnter(); break;
        case 1: _t->EventLeave(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LabelNetInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LabelNetInfo::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_LabelNetInfo,
      qt_meta_data_LabelNetInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LabelNetInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LabelNetInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LabelNetInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LabelNetInfo))
        return static_cast<void*>(const_cast< LabelNetInfo*>(this));
    return QLabel::qt_metacast(_clname);
}

int LabelNetInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void LabelNetInfo::EventEnter()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void LabelNetInfo::EventLeave()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
