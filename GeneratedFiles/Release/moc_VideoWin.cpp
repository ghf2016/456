/****************************************************************************
** Meta object code from reading C++ file 'VideoWin.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Video/VideoWin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoWin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VideoWin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   10,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,    9,    9,    9, 0x08,
      53,    9,    9,    9, 0x08,
      70,    9,    9,    9, 0x08,
      85,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VideoWin[] = {
    "VideoWin\0\0,\0EventDBClick(qint64,bool)\0"
    "refreshVideo()\0onShowUserName()\0"
    "onKeepAspect()\0onFitWindow()\0"
};

void VideoWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VideoWin *_t = static_cast<VideoWin *>(_o);
        switch (_id) {
        case 0: _t->EventDBClick((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->refreshVideo(); break;
        case 2: _t->onShowUserName(); break;
        case 3: _t->onKeepAspect(); break;
        case 4: _t->onFitWindow(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VideoWin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VideoWin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VideoWin,
      qt_meta_data_VideoWin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VideoWin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VideoWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VideoWin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VideoWin))
        return static_cast<void*>(const_cast< VideoWin*>(this));
    if (!strcmp(_clname, "IVideoWin"))
        return static_cast< IVideoWin*>(const_cast< VideoWin*>(this));
    return QWidget::qt_metacast(_clname);
}

int VideoWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void VideoWin::EventDBClick(qint64 _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
