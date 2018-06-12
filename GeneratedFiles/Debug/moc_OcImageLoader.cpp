/****************************************************************************
** Meta object code from reading C++ file 'OcImageLoader.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DocShare/OcImageLoader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OcImageLoader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OcImageLoader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      39,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   61,   14,   14, 0x0a,
     120,  107,   14,   14, 0x0a,
     161,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OcImageLoader[] = {
    "OcImageLoader\0\0signalOfHiddenToolBar()\0"
    "signalOfShowToolBar()\0hasRead,total\0"
    "downloadProgress(qint64,qint64)\0"
    "networkError\0OnHttpError(QNetworkReply::NetworkError)\0"
    "OnDownloadReady()\0"
};

void OcImageLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OcImageLoader *_t = static_cast<OcImageLoader *>(_o);
        switch (_id) {
        case 0: _t->signalOfHiddenToolBar(); break;
        case 1: _t->signalOfShowToolBar(); break;
        case 2: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->OnHttpError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 4: _t->OnDownloadReady(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OcImageLoader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OcImageLoader::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OcImageLoader,
      qt_meta_data_OcImageLoader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OcImageLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OcImageLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OcImageLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OcImageLoader))
        return static_cast<void*>(const_cast< OcImageLoader*>(this));
    return QWidget::qt_metacast(_clname);
}

int OcImageLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OcImageLoader::signalOfHiddenToolBar()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void OcImageLoader::signalOfShowToolBar()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
