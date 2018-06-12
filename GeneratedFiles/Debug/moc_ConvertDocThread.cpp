/****************************************************************************
** Meta object code from reading C++ file 'ConvertDocThread.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DocShare/ConvertDocThread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConvertDocThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConvertDocThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   65,   17,   17, 0x0a,
      96,   17,   17,   17, 0x08,
     113,   17,   17,   17, 0x08,
     140,  127,   17,   17, 0x08,
     196,  181,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ConvertDocThread[] = {
    "ConvertDocThread\0\0fileName,total\0"
    "EventConvertFinish(QString,int)\0"
    "fileName\0StartConvert(QString)\0"
    "OnUploadFinish()\0OnHttpReady()\0"
    "networkError\0OnHttpError(QNetworkReply::NetworkError)\0"
    "hasWrite,total\0uploadProgress(qint64,qint64)\0"
};

void ConvertDocThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConvertDocThread *_t = static_cast<ConvertDocThread *>(_o);
        switch (_id) {
        case 0: _t->EventConvertFinish((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->StartConvert((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->OnUploadFinish(); break;
        case 3: _t->OnHttpReady(); break;
        case 4: _t->OnHttpError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 5: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ConvertDocThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConvertDocThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ConvertDocThread,
      qt_meta_data_ConvertDocThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConvertDocThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConvertDocThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConvertDocThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConvertDocThread))
        return static_cast<void*>(const_cast< ConvertDocThread*>(this));
    return QObject::qt_metacast(_clname);
}

int ConvertDocThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ConvertDocThread::EventConvertFinish(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
