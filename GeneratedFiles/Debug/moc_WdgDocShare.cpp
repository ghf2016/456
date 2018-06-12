/****************************************************************************
** Meta object code from reading C++ file 'WdgDocShare.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DocShare/WdgDocShare.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WdgDocShare.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WdgDocShare[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   12,   12,   12, 0x08,
      59,   12,   12,   12, 0x08,
      71,   12,   12,   12, 0x08,
      91,   12,   12,   12, 0x0a,
     112,   12,   12,   12, 0x0a,
     133,   12,   12,   12, 0x0a,
     152,   12,   12,   12, 0x0a,
     179,   12,   12,   12, 0x0a,
     217,  202,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WdgDocShare[] = {
    "WdgDocShare\0\0fileName\0EventConvertDoc(QString)\0"
    "OnBtnPrev()\0OnBtnNext()\0CaptureMouseTimer()\0"
    "slotOfEnterTestWdg()\0slotOfLeaveTestWdg()\0"
    "slotOfHiddenTool()\0slotOfGetToHiddenToolBar()\0"
    "slotOfGetShowToolBar()\0fileName,total\0"
    "slotConvertFinish(QString,int)\0"
};

void WdgDocShare::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WdgDocShare *_t = static_cast<WdgDocShare *>(_o);
        switch (_id) {
        case 0: _t->EventConvertDoc((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->OnBtnPrev(); break;
        case 2: _t->OnBtnNext(); break;
        case 3: _t->CaptureMouseTimer(); break;
        case 4: _t->slotOfEnterTestWdg(); break;
        case 5: _t->slotOfLeaveTestWdg(); break;
        case 6: _t->slotOfHiddenTool(); break;
        case 7: _t->slotOfGetToHiddenToolBar(); break;
        case 8: _t->slotOfGetShowToolBar(); break;
        case 9: _t->slotConvertFinish((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WdgDocShare::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WdgDocShare::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WdgDocShare,
      qt_meta_data_WdgDocShare, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WdgDocShare::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WdgDocShare::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WdgDocShare::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WdgDocShare))
        return static_cast<void*>(const_cast< WdgDocShare*>(this));
    return QWidget::qt_metacast(_clname);
}

int WdgDocShare::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void WdgDocShare::EventConvertDoc(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
