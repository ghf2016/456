/****************************************************************************
** Meta object code from reading C++ file 'videomonitormain.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../VideoMonitor/videomonitormain.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videomonitormain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VideoMonitorMain[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x0a,
      47,   17,   17,   17, 0x0a,
      65,   17,   17,   17, 0x0a,
      82,   17,   17,   17, 0x0a,
      99,   17,   17,   17, 0x0a,
     116,   17,   17,   17, 0x0a,
     132,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_VideoMonitorMain[] = {
    "VideoMonitorMain\0\0index\0OnVideoModeChange(int)\0"
    "OnBtnStartClick()\0OnBtnStopClick()\0"
    "OnBtnNextClick()\0OnBtnPrevClick()\0"
    "OnChkAutoPage()\0OnAutoPageTimer()\0"
};

void VideoMonitorMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VideoMonitorMain *_t = static_cast<VideoMonitorMain *>(_o);
        switch (_id) {
        case 0: _t->OnVideoModeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnBtnStartClick(); break;
        case 2: _t->OnBtnStopClick(); break;
        case 3: _t->OnBtnNextClick(); break;
        case 4: _t->OnBtnPrevClick(); break;
        case 5: _t->OnChkAutoPage(); break;
        case 6: _t->OnAutoPageTimer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VideoMonitorMain::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VideoMonitorMain::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VideoMonitorMain,
      qt_meta_data_VideoMonitorMain, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VideoMonitorMain::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VideoMonitorMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VideoMonitorMain::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VideoMonitorMain))
        return static_cast<void*>(const_cast< VideoMonitorMain*>(this));
    return QWidget::qt_metacast(_clname);
}

int VideoMonitorMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
