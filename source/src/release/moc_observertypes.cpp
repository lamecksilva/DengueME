/****************************************************************************
** Meta object code from reading C++ file 'observertypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../editor/observertypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'observertypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ObserverTypes_t {
    QByteArrayData data[13];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObserverTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObserverTypes_t qt_meta_stringdata_ObserverTypes = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ObserverTypes"
QT_MOC_LITERAL(1, 14, 13), // "heightChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "onRemove"
QT_MOC_LITERAL(4, 38, 11), // "removeField"
QT_MOC_LITERAL(5, 50, 14), // "askRemoveGroup"
QT_MOC_LITERAL(6, 65, 10), // "cloneField"
QT_MOC_LITERAL(7, 76, 10), // "changeType"
QT_MOC_LITERAL(8, 87, 10), // "morphField"
QT_MOC_LITERAL(9, 98, 4), // "type"
QT_MOC_LITERAL(10, 103, 12), // "addComponent"
QT_MOC_LITERAL(11, 116, 10), // "Component*"
QT_MOC_LITERAL(12, 127, 4) // "comp"

    },
    "ObserverTypes\0heightChanged\0\0onRemove\0"
    "removeField\0askRemoveGroup\0cloneField\0"
    "changeType\0morphField\0type\0addComponent\0"
    "Component*\0comp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObserverTypes[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   57,    2, 0x08 /* Private */,
       4,    0,   58,    2, 0x08 /* Private */,
       5,    0,   59,    2, 0x08 /* Private */,
       6,    0,   60,    2, 0x08 /* Private */,
       7,    1,   61,    2, 0x08 /* Private */,
       8,    1,   64,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    9,
    0x80000000 | 11, 0x80000000 | 11,   12,

       0        // eod
};

void ObserverTypes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObserverTypes *_t = static_cast<ObserverTypes *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->heightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onRemove(); break;
        case 2: _t->removeField(); break;
        case 3: _t->askRemoveGroup(); break;
        case 4: _t->cloneField(); break;
        case 5: _t->changeType((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->morphField((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: { Component* _r = _t->addComponent((*reinterpret_cast< Component*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Component**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Component* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ObserverTypes::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObserverTypes::heightChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ObserverTypes::staticMetaObject = {
    { &Component::staticMetaObject, qt_meta_stringdata_ObserverTypes.data,
      qt_meta_data_ObserverTypes,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ObserverTypes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObserverTypes::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ObserverTypes.stringdata0))
        return static_cast<void*>(const_cast< ObserverTypes*>(this));
    return Component::qt_metacast(_clname);
}

int ObserverTypes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Component::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ObserverTypes::heightChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
