/****************************************************************************
** Meta object code from reading C++ file 'backend.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/backend.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.1. It"
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
struct qt_meta_stringdata_CLASSBackendENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSBackendENDCLASS = QtMocHelpers::stringData(
    "Backend",
    "QML.Element",
    "auto",
    "s_rpmText",
    "",
    "s_rpmDial",
    "s_speedText",
    "s_speedDial",
    "s_kphText",
    "s_kphDial",
    "s_consumptionText",
    "s_voltageText",
    "s_ampDial",
    "s_ampText",
    "s_motorTemp",
    "s_escTemp",
    "s_tireAngle",
    "demoSlot",
    "processPacket",
    "uint8_t*",
    "packet",
    "uint8_t",
    "length",
    "writeSerialData",
    "data",
    "sendLeft",
    "sendRight",
    "sendCenter",
    "rpmText",
    "rpmDial",
    "speedText",
    "speedDial",
    "consumptionText",
    "voltageText",
    "ampDial",
    "ampText",
    "motorTemp",
    "escTemp",
    "tireAngle"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBackendENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
      19,   16, // methods
      11,  155, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,  130,    4, 0x06,   12 /* Public */,
       5,    0,  131,    4, 0x06,   13 /* Public */,
       6,    0,  132,    4, 0x06,   14 /* Public */,
       7,    0,  133,    4, 0x06,   15 /* Public */,
       8,    0,  134,    4, 0x06,   16 /* Public */,
       9,    0,  135,    4, 0x06,   17 /* Public */,
      10,    0,  136,    4, 0x06,   18 /* Public */,
      11,    0,  137,    4, 0x06,   19 /* Public */,
      12,    0,  138,    4, 0x06,   20 /* Public */,
      13,    0,  139,    4, 0x06,   21 /* Public */,
      14,    0,  140,    4, 0x06,   22 /* Public */,
      15,    0,  141,    4, 0x06,   23 /* Public */,
      16,    0,  142,    4, 0x06,   24 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      17,    0,  143,    4, 0x0a,   25 /* Public */,
      18,    2,  144,    4, 0x0a,   26 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      23,    1,  149,    4, 0x02,   29 /* Public */,
      25,    0,  152,    4, 0x02,   31 /* Public */,
      26,    0,  153,    4, 0x02,   32 /* Public */,
      27,    0,  154,    4, 0x02,   33 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21,   20,   22,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      28, QMetaType::QString, 0x00015003, uint(0), 0,
      29, QMetaType::Double, 0x00015003, uint(1), 0,
      30, QMetaType::QString, 0x00015003, uint(2), 0,
      31, QMetaType::Double, 0x00015003, uint(3), 0,
      32, QMetaType::QString, 0x00015003, uint(6), 0,
      33, QMetaType::QString, 0x00015003, uint(7), 0,
      34, QMetaType::Double, 0x00015003, uint(8), 0,
      35, QMetaType::QString, 0x00015003, uint(9), 0,
      36, QMetaType::Bool, 0x00015003, uint(10), 0,
      37, QMetaType::Bool, 0x00015003, uint(11), 0,
      38, QMetaType::Int, 0x00015003, uint(12), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Backend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSBackendENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBackendENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'rpmText'
        QString,
        // property 'rpmDial'
        double,
        // property 'speedText'
        QString,
        // property 'speedDial'
        double,
        // property 'consumptionText'
        QString,
        // property 'voltageText'
        QString,
        // property 'ampDial'
        double,
        // property 'ampText'
        QString,
        // property 'motorTemp'
        bool,
        // property 'escTemp'
        bool,
        // property 'tireAngle'
        int,
        // Q_OBJECT / Q_GADGET
        Backend,
        // method 's_rpmText'
        void,
        // method 's_rpmDial'
        void,
        // method 's_speedText'
        void,
        // method 's_speedDial'
        void,
        // method 's_kphText'
        void,
        // method 's_kphDial'
        void,
        // method 's_consumptionText'
        void,
        // method 's_voltageText'
        void,
        // method 's_ampDial'
        void,
        // method 's_ampText'
        void,
        // method 's_motorTemp'
        void,
        // method 's_escTemp'
        void,
        // method 's_tireAngle'
        void,
        // method 'demoSlot'
        void,
        // method 'processPacket'
        void,
        uint8_t *,
        uint8_t,
        // method 'writeSerialData'
        void,
        const QString &,
        // method 'sendLeft'
        void,
        // method 'sendRight'
        void,
        // method 'sendCenter'
        void
    >,
    nullptr
} };

void Backend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Backend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->s_rpmText(); break;
        case 1: _t->s_rpmDial(); break;
        case 2: _t->s_speedText(); break;
        case 3: _t->s_speedDial(); break;
        case 4: _t->s_kphText(); break;
        case 5: _t->s_kphDial(); break;
        case 6: _t->s_consumptionText(); break;
        case 7: _t->s_voltageText(); break;
        case 8: _t->s_ampDial(); break;
        case 9: _t->s_ampText(); break;
        case 10: _t->s_motorTemp(); break;
        case 11: _t->s_escTemp(); break;
        case 12: _t->s_tireAngle(); break;
        case 13: _t->demoSlot(); break;
        case 14: _t->processPacket((*reinterpret_cast< std::add_pointer_t<uint8_t*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2]))); break;
        case 15: _t->writeSerialData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->sendLeft(); break;
        case 17: _t->sendRight(); break;
        case 18: _t->sendCenter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_rpmText; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_rpmDial; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_speedText; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_speedDial; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_kphText; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_kphDial; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_consumptionText; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_voltageText; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_ampDial; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_ampText; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_motorTemp; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_escTemp; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_tireAngle; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Backend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_rpmText; break;
        case 1: *reinterpret_cast< double*>(_v) = _t->m_rpmDial; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->m_speedText; break;
        case 3: *reinterpret_cast< double*>(_v) = _t->m_speedDial; break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->m_consumptionText; break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->m_voltageText; break;
        case 6: *reinterpret_cast< double*>(_v) = _t->m_ampDial; break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->m_ampText; break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->m_motorTemp; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->m_escTemp; break;
        case 10: *reinterpret_cast< int*>(_v) = _t->m_tireAngle; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Backend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_rpmText != *reinterpret_cast< QString*>(_v)) {
                _t->m_rpmText = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->s_rpmText();
            }
            break;
        case 1:
            if (_t->m_rpmDial != *reinterpret_cast< double*>(_v)) {
                _t->m_rpmDial = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->s_rpmDial();
            }
            break;
        case 2:
            if (_t->m_speedText != *reinterpret_cast< QString*>(_v)) {
                _t->m_speedText = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->s_speedText();
            }
            break;
        case 3:
            if (_t->m_speedDial != *reinterpret_cast< double*>(_v)) {
                _t->m_speedDial = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->s_speedDial();
            }
            break;
        case 4:
            if (_t->m_consumptionText != *reinterpret_cast< QString*>(_v)) {
                _t->m_consumptionText = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->s_consumptionText();
            }
            break;
        case 5:
            if (_t->m_voltageText != *reinterpret_cast< QString*>(_v)) {
                _t->m_voltageText = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->s_voltageText();
            }
            break;
        case 6:
            if (_t->m_ampDial != *reinterpret_cast< double*>(_v)) {
                _t->m_ampDial = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->s_ampDial();
            }
            break;
        case 7:
            if (_t->m_ampText != *reinterpret_cast< QString*>(_v)) {
                _t->m_ampText = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->s_ampText();
            }
            break;
        case 8:
            if (_t->m_motorTemp != *reinterpret_cast< bool*>(_v)) {
                _t->m_motorTemp = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->s_motorTemp();
            }
            break;
        case 9:
            if (_t->m_escTemp != *reinterpret_cast< bool*>(_v)) {
                _t->m_escTemp = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->s_escTemp();
            }
            break;
        case 10:
            if (_t->m_tireAngle != *reinterpret_cast< int*>(_v)) {
                _t->m_tireAngle = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->s_tireAngle();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Backend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Backend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBackendENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Backend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Backend::s_rpmText()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Backend::s_rpmDial()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Backend::s_speedText()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Backend::s_speedDial()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Backend::s_kphText()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Backend::s_kphDial()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Backend::s_consumptionText()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Backend::s_voltageText()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Backend::s_ampDial()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Backend::s_ampText()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Backend::s_motorTemp()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Backend::s_escTemp()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Backend::s_tireAngle()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
