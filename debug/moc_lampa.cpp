/****************************************************************************
** Meta object code from reading C++ file 'lampa.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Lampav2/lampa.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lampa.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSLampaENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLampaENDCLASS = QtMocHelpers::stringData(
    "Lampa",
    "lampaConnected",
    "",
    "lampaDisconnected",
    "lampaStateChanged",
    "QAbstractSocket::SocketState",
    "lampaErrorOccurred",
    "QAbstractSocket::SocketError",
    "lampaDataReady",
    "data",
    "action"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLampaENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[6];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[18];
    char stringdata5[29];
    char stringdata6[19];
    char stringdata7[29];
    char stringdata8[15];
    char stringdata9[5];
    char stringdata10[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLampaENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLampaENDCLASS_t qt_meta_stringdata_CLASSLampaENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Lampa"
        QT_MOC_LITERAL(6, 14),  // "lampaConnected"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 17),  // "lampaDisconnected"
        QT_MOC_LITERAL(40, 17),  // "lampaStateChanged"
        QT_MOC_LITERAL(58, 28),  // "QAbstractSocket::SocketState"
        QT_MOC_LITERAL(87, 18),  // "lampaErrorOccurred"
        QT_MOC_LITERAL(106, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(135, 14),  // "lampaDataReady"
        QT_MOC_LITERAL(150, 4),  // "data"
        QT_MOC_LITERAL(155, 6)   // "action"
    },
    "Lampa",
    "lampaConnected",
    "",
    "lampaDisconnected",
    "lampaStateChanged",
    "QAbstractSocket::SocketState",
    "lampaErrorOccurred",
    "QAbstractSocket::SocketError",
    "lampaDataReady",
    "data",
    "action"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLampaENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    1,   52,    2, 0x08,    3 /* Private */,
       6,    1,   55,    2, 0x08,    5 /* Private */,
       8,    1,   58,    2, 0x08,    7 /* Private */,
      10,    1,   61,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, QMetaType::QByteArray,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject Lampa::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSLampaENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLampaENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLampaENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Lampa, std::true_type>,
        // method 'lampaConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lampaDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lampaStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::false_type>,
        // method 'lampaErrorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'lampaDataReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'action'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>
    >,
    nullptr
} };

void Lampa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Lampa *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->lampaConnected(); break;
        case 1: _t->lampaDisconnected(); break;
        case 2: _t->lampaStateChanged((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketState>>(_a[1]))); break;
        case 3: _t->lampaErrorOccurred((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 4: _t->lampaDataReady((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 5: _t->action((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Lampa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lampa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLampaENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Lampa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
