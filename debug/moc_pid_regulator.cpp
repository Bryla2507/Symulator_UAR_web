/****************************************************************************
** Meta object code from reading C++ file 'pid_regulator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pid_regulator.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pid_regulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSPID_RegulatorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPID_RegulatorENDCLASS = QtMocHelpers::stringData(
    "PID_Regulator",
    "sendPIDValues",
    "",
    "uP",
    "uI",
    "uD",
    "output",
    "sendDevationValue",
    "value",
    "setPIDParameters",
    "kP",
    "tI",
    "tD",
    "minValue",
    "maxValue",
    "antiWindupON",
    "altIntegralON"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPID_RegulatorENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[14];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[3];
    char stringdata5[3];
    char stringdata6[7];
    char stringdata7[18];
    char stringdata8[6];
    char stringdata9[17];
    char stringdata10[3];
    char stringdata11[3];
    char stringdata12[3];
    char stringdata13[9];
    char stringdata14[9];
    char stringdata15[13];
    char stringdata16[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPID_RegulatorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPID_RegulatorENDCLASS_t qt_meta_stringdata_CLASSPID_RegulatorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "PID_Regulator"
        QT_MOC_LITERAL(14, 13),  // "sendPIDValues"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 2),  // "uP"
        QT_MOC_LITERAL(32, 2),  // "uI"
        QT_MOC_LITERAL(35, 2),  // "uD"
        QT_MOC_LITERAL(38, 6),  // "output"
        QT_MOC_LITERAL(45, 17),  // "sendDevationValue"
        QT_MOC_LITERAL(63, 5),  // "value"
        QT_MOC_LITERAL(69, 16),  // "setPIDParameters"
        QT_MOC_LITERAL(86, 2),  // "kP"
        QT_MOC_LITERAL(89, 2),  // "tI"
        QT_MOC_LITERAL(92, 2),  // "tD"
        QT_MOC_LITERAL(95, 8),  // "minValue"
        QT_MOC_LITERAL(104, 8),  // "maxValue"
        QT_MOC_LITERAL(113, 12),  // "antiWindupON"
        QT_MOC_LITERAL(126, 13)   // "altIntegralON"
    },
    "PID_Regulator",
    "sendPIDValues",
    "",
    "uP",
    "uI",
    "uD",
    "output",
    "sendDevationValue",
    "value",
    "setPIDParameters",
    "kP",
    "tI",
    "tD",
    "minValue",
    "maxValue",
    "antiWindupON",
    "altIntegralON"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPID_RegulatorENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   32,    2, 0x06,    1 /* Public */,
       7,    1,   41,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    7,   44,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Double,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Bool,   10,   11,   12,   13,   14,   15,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject PID_Regulator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPID_RegulatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPID_RegulatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPID_RegulatorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PID_Regulator, std::true_type>,
        // method 'sendPIDValues'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'sendDevationValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setPIDParameters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void PID_Regulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PID_Regulator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendPIDValues((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4]))); break;
        case 1: _t->sendDevationValue((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->setPIDParameters((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[7]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PID_Regulator::*)(double , double , double , double );
            if (_t _q_method = &PID_Regulator::sendPIDValues; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PID_Regulator::*)(double );
            if (_t _q_method = &PID_Regulator::sendDevationValue; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *PID_Regulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PID_Regulator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPID_RegulatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IO"))
        return static_cast< IO*>(this);
    return QObject::qt_metacast(_clname);
}

int PID_Regulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PID_Regulator::sendPIDValues(double _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PID_Regulator::sendDevationValue(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
