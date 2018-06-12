/****************************************************************************
** Meta object code from reading C++ file 'SeanTestWdg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DocShare/SeanTestWdg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeanTestWdg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SeanTestWdg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      36,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   12,   12,   12, 0x0a,
      76,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SeanTestWdg[] = {
    "SeanTestWdg\0\0signalOfEnterTestWdg()\0"
    "signalOfLeaveTestWdg()\0setPenBntStats()\0"
    "timeoutToHiddenToolWdg()\0"
};

void SeanTestWdg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SeanTestWdg *_t = static_cast<SeanTestWdg *>(_o);
        switch (_id) {
        case 0: _t->signalOfEnterTestWdg(); break;
        case 1: _t->signalOfLeaveTestWdg(); break;
        case 2: _t->setPenBntStats(); break;
        case 3: _t->timeoutToHiddenToolWdg(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SeanTestWdg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SeanTestWdg::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SeanTestWdg,
      qt_meta_data_SeanTestWdg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SeanTestWdg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SeanTestWdg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SeanTestWdg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SeanTestWdg))
        return static_cast<void*>(const_cast< SeanTestWdg*>(this));
    return QWidget::qt_metacast(_clname);
}

int SeanTestWdg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void SeanTestWdg::signalOfEnterTestWdg()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SeanTestWdg::signalOfLeaveTestWdg()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
