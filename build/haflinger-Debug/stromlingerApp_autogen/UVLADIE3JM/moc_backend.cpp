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
    "s_rpm",
    "",
    "s_displayRpm",
    "s_kph",
    "s_displayKph",
    "s_displayKpl",
    "s_liters",
    "s_displayLiters",
    "s_displayRange",
    "s_currentGear",
    "s_engineTemp",
    "s_fuelLevel",
    "s_tireangle",
    "demoSlot",
    "handleSerialData",
    "data",
    "updateSpeed",
    "updateRpm",
    "updateFuel",
    "updateMisc",
    "updateTireAngle",
    "angle",
    "writeSerialData",
    "rpm",
    "displayRpm",
    "kph",
    "displayKph",
    "displayKpl",
    "liters",
    "displayLiters",
    "displayRange",
    "currentGear",
    "engineTemp",
    "fuelLevel",
    "tireangle"
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
      20,   16, // methods
      12,  162, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,  136,    4, 0x06,   13 /* Public */,
       5,    0,  137,    4, 0x06,   14 /* Public */,
       6,    0,  138,    4, 0x06,   15 /* Public */,
       7,    0,  139,    4, 0x06,   16 /* Public */,
       8,    0,  140,    4, 0x06,   17 /* Public */,
       9,    0,  141,    4, 0x06,   18 /* Public */,
      10,    0,  142,    4, 0x06,   19 /* Public */,
      11,    0,  143,    4, 0x06,   20 /* Public */,
      12,    0,  144,    4, 0x06,   21 /* Public */,
      13,    0,  145,    4, 0x06,   22 /* Public */,
      14,    0,  146,    4, 0x06,   23 /* Public */,
      15,    0,  147,    4, 0x06,   24 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    0,  148,    4, 0x0a,   25 /* Public */,
      17,    1,  149,    4, 0x0a,   26 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      19,    0,  152,    4, 0x02,   28 /* Public */,
      20,    0,  153,    4, 0x02,   29 /* Public */,
      21,    0,  154,    4, 0x02,   30 /* Public */,
      22,    0,  155,    4, 0x02,   31 /* Public */,
      23,    1,  156,    4, 0x02,   32 /* Public */,
      25,    1,  159,    4, 0x02,   34 /* Public */,

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

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   18,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::QString,   18,

 // properties: name, type, flags
      26, QMetaType::Int, 0x00015003, uint(0), 0,
      27, QMetaType::Int, 0x00015003, uint(1), 0,
      28, QMetaType::Int, 0x00015003, uint(2), 0,
      29, QMetaType::Int, 0x00015003, uint(3), 0,
      30, QMetaType::Int, 0x00015003, uint(4), 0,
      31, QMetaType::Int, 0x00015003, uint(5), 0,
      32, QMetaType::Int, 0x00015003, uint(6), 0,
      33, QMetaType::Int, 0x00015003, uint(7), 0,
      34, QMetaType::Int, 0x00015003, uint(8), 0,
      35, QMetaType::Bool, 0x00015003, uint(9), 0,
      36, QMetaType::Bool, 0x00015003, uint(10), 0,
      37, QMetaType::Int, 0x00015003, uint(11), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Backend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSBackendENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBackendENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'rpm'
        int,
        // property 'displayRpm'
        int,
        // property 'kph'
        int,
        // property 'displayKph'
        int,
        // property 'displayKpl'
        int,
        // property 'liters'
        int,
        // property 'displayLiters'
        int,
        // property 'displayRange'
        int,
        // property 'currentGear'
        int,
        // property 'engineTemp'
        bool,
        // property 'fuelLevel'
        bool,
        // property 'tireangle'
        int,
        // Q_OBJECT / Q_GADGET
        Backend,
        // method 's_rpm'
        void,
        // method 's_displayRpm'
        void,
        // method 's_kph'
        void,
        // method 's_displayKph'
        void,
        // method 's_displayKpl'
        void,
        // method 's_liters'
        void,
        // method 's_displayLiters'
        void,
        // method 's_displayRange'
        void,
        // method 's_currentGear'
        void,
        // method 's_engineTemp'
        void,
        // method 's_fuelLevel'
        void,
        // method 's_tireangle'
        void,
        // method 'demoSlot'
        void,
        // method 'handleSerialData'
        void,
        const QByteArray &,
        // method 'updateSpeed'
        void,
        // method 'updateRpm'
        void,
        // method 'updateFuel'
        void,
        // method 'updateMisc'
        void,
        // method 'updateTireAngle'
        void,
        int,
        // method 'writeSerialData'
        void,
        const QString &
    >,
    nullptr
} };

void Backend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Backend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->s_rpm(); break;
        case 1: _t->s_displayRpm(); break;
        case 2: _t->s_kph(); break;
        case 3: _t->s_displayKph(); break;
        case 4: _t->s_displayKpl(); break;
        case 5: _t->s_liters(); break;
        case 6: _t->s_displayLiters(); break;
        case 7: _t->s_displayRange(); break;
        case 8: _t->s_currentGear(); break;
        case 9: _t->s_engineTemp(); break;
        case 10: _t->s_fuelLevel(); break;
        case 11: _t->s_tireangle(); break;
        case 12: _t->demoSlot(); break;
        case 13: _t->handleSerialData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 14: _t->updateSpeed(); break;
        case 15: _t->updateRpm(); break;
        case 16: _t->updateFuel(); break;
        case 17: _t->updateMisc(); break;
        case 18: _t->updateTireAngle((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->writeSerialData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_rpm; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_displayRpm; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_kph; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_displayKph; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_displayKpl; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_liters; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_displayLiters; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_displayRange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_currentGear; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_engineTemp; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_fuelLevel; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (_t _q_method = &Backend::s_tireangle; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Backend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->m_rpm; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->m_displayRpm; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->m_kph; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->m_displayKph; break;
        case 4: *reinterpret_cast< int*>(_v) = _t->m_displayKpl; break;
        case 5: *reinterpret_cast< int*>(_v) = _t->m_liters; break;
        case 6: *reinterpret_cast< int*>(_v) = _t->m_displayLiters; break;
        case 7: *reinterpret_cast< int*>(_v) = _t->m_displayRange; break;
        case 8: *reinterpret_cast< int*>(_v) = _t->m_currentGear; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->m_engineTemp; break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->m_fuelLevel; break;
        case 11: *reinterpret_cast< int*>(_v) = _t->m_tireangle; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Backend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_rpm != *reinterpret_cast< int*>(_v)) {
                _t->m_rpm = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->s_rpm();
            }
            break;
        case 1:
            if (_t->m_displayRpm != *reinterpret_cast< int*>(_v)) {
                _t->m_displayRpm = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->s_displayRpm();
            }
            break;
        case 2:
            if (_t->m_kph != *reinterpret_cast< int*>(_v)) {
                _t->m_kph = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->s_kph();
            }
            break;
        case 3:
            if (_t->m_displayKph != *reinterpret_cast< int*>(_v)) {
                _t->m_displayKph = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->s_displayKph();
            }
            break;
        case 4:
            if (_t->m_displayKpl != *reinterpret_cast< int*>(_v)) {
                _t->m_displayKpl = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->s_displayKpl();
            }
            break;
        case 5:
            if (_t->m_liters != *reinterpret_cast< int*>(_v)) {
                _t->m_liters = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->s_liters();
            }
            break;
        case 6:
            if (_t->m_displayLiters != *reinterpret_cast< int*>(_v)) {
                _t->m_displayLiters = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->s_displayLiters();
            }
            break;
        case 7:
            if (_t->m_displayRange != *reinterpret_cast< int*>(_v)) {
                _t->m_displayRange = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->s_displayRange();
            }
            break;
        case 8:
            if (_t->m_currentGear != *reinterpret_cast< int*>(_v)) {
                _t->m_currentGear = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->s_currentGear();
            }
            break;
        case 9:
            if (_t->m_engineTemp != *reinterpret_cast< bool*>(_v)) {
                _t->m_engineTemp = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->s_engineTemp();
            }
            break;
        case 10:
            if (_t->m_fuelLevel != *reinterpret_cast< bool*>(_v)) {
                _t->m_fuelLevel = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->s_fuelLevel();
            }
            break;
        case 11:
            if (_t->m_tireangle != *reinterpret_cast< int*>(_v)) {
                _t->m_tireangle = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->s_tireangle();
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
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Backend::s_rpm()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Backend::s_displayRpm()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Backend::s_kph()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Backend::s_displayKph()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Backend::s_displayKpl()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Backend::s_liters()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Backend::s_displayLiters()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Backend::s_displayRange()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Backend::s_currentGear()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Backend::s_engineTemp()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Backend::s_fuelLevel()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Backend::s_tireangle()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
