/****************************************************************************
** Meta object code from reading C++ file 'gui.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gui.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGUIENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGUIENDCLASS = QtMocHelpers::stringData(
    "GUI",
    "newGeneratorParameters",
    "",
    "SignalType",
    "signalType",
    "amplitude",
    "period",
    "frequency",
    "signalFill",
    "constComponent",
    "newPIDParameters",
    "kP",
    "tI",
    "tD",
    "minValue",
    "maxValue",
    "antiWindupON",
    "altIntegralON",
    "newModelParameters",
    "std::vector<double>",
    "coefficientsA",
    "coefficientsB",
    "disturbance",
    "delay",
    "startStop",
    "setLoop",
    "interval",
    "resetIntegral",
    "resetDeriative",
    "resetGeneratorTime",
    "saveSimulation",
    "filePath",
    "loadSimulation",
    "setLocalLoop",
    "startServerRequest",
    "port",
    "testConnectionRequest",
    "clientSocketCreated",
    "serverSocketCreated",
    "QTcpSocket*",
    "socket",
    "resetConnection",
    "setTaktowanieObustronne",
    "czyObiektON",
    "intervalObiekt",
    "setTaktowanieJednostronne",
    "updateGeneratorSerie",
    "value",
    "updatePIDSeries",
    "uP",
    "uI",
    "uD",
    "output",
    "updateObjectSerie",
    "updateDeviationSerie",
    "updateGUIControls",
    "s",
    "a",
    "per",
    "f",
    "p",
    "i",
    "d",
    "win",
    "min",
    "max",
    "k",
    "ca",
    "cb",
    "z",
    "sf",
    "cc",
    "setGreenLight",
    "setRedLight",
    "networkDisconnected",
    "on_setGenerator_clicked",
    "on_setRegulator_clicked",
    "on_setModel_clicked",
    "on_startStop_clicked",
    "on_reset_clicked",
    "on_setLoop_clicked",
    "on_reset_Integral_clicked",
    "on_reset_Derative_clicked",
    "on_show_uP_clicked",
    "on_show_uI_clicked",
    "on_show_uD_clicked",
    "on_save_clicked",
    "on_load_clicked",
    "on_pushButton_clicked",
    "on_networkConfirm_clicked",
    "on_testConnect_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGUIENDCLASS_t {
    uint offsetsAndSizes[182];
    char stringdata0[4];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[11];
    char stringdata5[10];
    char stringdata6[7];
    char stringdata7[10];
    char stringdata8[11];
    char stringdata9[15];
    char stringdata10[17];
    char stringdata11[3];
    char stringdata12[3];
    char stringdata13[3];
    char stringdata14[9];
    char stringdata15[9];
    char stringdata16[13];
    char stringdata17[14];
    char stringdata18[19];
    char stringdata19[20];
    char stringdata20[14];
    char stringdata21[14];
    char stringdata22[12];
    char stringdata23[6];
    char stringdata24[10];
    char stringdata25[8];
    char stringdata26[9];
    char stringdata27[14];
    char stringdata28[15];
    char stringdata29[19];
    char stringdata30[15];
    char stringdata31[9];
    char stringdata32[15];
    char stringdata33[13];
    char stringdata34[19];
    char stringdata35[5];
    char stringdata36[22];
    char stringdata37[20];
    char stringdata38[20];
    char stringdata39[12];
    char stringdata40[7];
    char stringdata41[16];
    char stringdata42[24];
    char stringdata43[12];
    char stringdata44[15];
    char stringdata45[26];
    char stringdata46[21];
    char stringdata47[6];
    char stringdata48[16];
    char stringdata49[3];
    char stringdata50[3];
    char stringdata51[3];
    char stringdata52[7];
    char stringdata53[18];
    char stringdata54[21];
    char stringdata55[18];
    char stringdata56[2];
    char stringdata57[2];
    char stringdata58[4];
    char stringdata59[2];
    char stringdata60[2];
    char stringdata61[2];
    char stringdata62[2];
    char stringdata63[4];
    char stringdata64[4];
    char stringdata65[4];
    char stringdata66[2];
    char stringdata67[3];
    char stringdata68[3];
    char stringdata69[2];
    char stringdata70[3];
    char stringdata71[3];
    char stringdata72[14];
    char stringdata73[12];
    char stringdata74[20];
    char stringdata75[24];
    char stringdata76[24];
    char stringdata77[20];
    char stringdata78[21];
    char stringdata79[17];
    char stringdata80[19];
    char stringdata81[26];
    char stringdata82[26];
    char stringdata83[19];
    char stringdata84[19];
    char stringdata85[19];
    char stringdata86[16];
    char stringdata87[16];
    char stringdata88[22];
    char stringdata89[26];
    char stringdata90[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGUIENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGUIENDCLASS_t qt_meta_stringdata_CLASSGUIENDCLASS = {
    {
        QT_MOC_LITERAL(0, 3),  // "GUI"
        QT_MOC_LITERAL(4, 22),  // "newGeneratorParameters"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 10),  // "SignalType"
        QT_MOC_LITERAL(39, 10),  // "signalType"
        QT_MOC_LITERAL(50, 9),  // "amplitude"
        QT_MOC_LITERAL(60, 6),  // "period"
        QT_MOC_LITERAL(67, 9),  // "frequency"
        QT_MOC_LITERAL(77, 10),  // "signalFill"
        QT_MOC_LITERAL(88, 14),  // "constComponent"
        QT_MOC_LITERAL(103, 16),  // "newPIDParameters"
        QT_MOC_LITERAL(120, 2),  // "kP"
        QT_MOC_LITERAL(123, 2),  // "tI"
        QT_MOC_LITERAL(126, 2),  // "tD"
        QT_MOC_LITERAL(129, 8),  // "minValue"
        QT_MOC_LITERAL(138, 8),  // "maxValue"
        QT_MOC_LITERAL(147, 12),  // "antiWindupON"
        QT_MOC_LITERAL(160, 13),  // "altIntegralON"
        QT_MOC_LITERAL(174, 18),  // "newModelParameters"
        QT_MOC_LITERAL(193, 19),  // "std::vector<double>"
        QT_MOC_LITERAL(213, 13),  // "coefficientsA"
        QT_MOC_LITERAL(227, 13),  // "coefficientsB"
        QT_MOC_LITERAL(241, 11),  // "disturbance"
        QT_MOC_LITERAL(253, 5),  // "delay"
        QT_MOC_LITERAL(259, 9),  // "startStop"
        QT_MOC_LITERAL(269, 7),  // "setLoop"
        QT_MOC_LITERAL(277, 8),  // "interval"
        QT_MOC_LITERAL(286, 13),  // "resetIntegral"
        QT_MOC_LITERAL(300, 14),  // "resetDeriative"
        QT_MOC_LITERAL(315, 18),  // "resetGeneratorTime"
        QT_MOC_LITERAL(334, 14),  // "saveSimulation"
        QT_MOC_LITERAL(349, 8),  // "filePath"
        QT_MOC_LITERAL(358, 14),  // "loadSimulation"
        QT_MOC_LITERAL(373, 12),  // "setLocalLoop"
        QT_MOC_LITERAL(386, 18),  // "startServerRequest"
        QT_MOC_LITERAL(405, 4),  // "port"
        QT_MOC_LITERAL(410, 21),  // "testConnectionRequest"
        QT_MOC_LITERAL(432, 19),  // "clientSocketCreated"
        QT_MOC_LITERAL(452, 19),  // "serverSocketCreated"
        QT_MOC_LITERAL(472, 11),  // "QTcpSocket*"
        QT_MOC_LITERAL(484, 6),  // "socket"
        QT_MOC_LITERAL(491, 15),  // "resetConnection"
        QT_MOC_LITERAL(507, 23),  // "setTaktowanieObustronne"
        QT_MOC_LITERAL(531, 11),  // "czyObiektON"
        QT_MOC_LITERAL(543, 14),  // "intervalObiekt"
        QT_MOC_LITERAL(558, 25),  // "setTaktowanieJednostronne"
        QT_MOC_LITERAL(584, 20),  // "updateGeneratorSerie"
        QT_MOC_LITERAL(605, 5),  // "value"
        QT_MOC_LITERAL(611, 15),  // "updatePIDSeries"
        QT_MOC_LITERAL(627, 2),  // "uP"
        QT_MOC_LITERAL(630, 2),  // "uI"
        QT_MOC_LITERAL(633, 2),  // "uD"
        QT_MOC_LITERAL(636, 6),  // "output"
        QT_MOC_LITERAL(643, 17),  // "updateObjectSerie"
        QT_MOC_LITERAL(661, 20),  // "updateDeviationSerie"
        QT_MOC_LITERAL(682, 17),  // "updateGUIControls"
        QT_MOC_LITERAL(700, 1),  // "s"
        QT_MOC_LITERAL(702, 1),  // "a"
        QT_MOC_LITERAL(704, 3),  // "per"
        QT_MOC_LITERAL(708, 1),  // "f"
        QT_MOC_LITERAL(710, 1),  // "p"
        QT_MOC_LITERAL(712, 1),  // "i"
        QT_MOC_LITERAL(714, 1),  // "d"
        QT_MOC_LITERAL(716, 3),  // "win"
        QT_MOC_LITERAL(720, 3),  // "min"
        QT_MOC_LITERAL(724, 3),  // "max"
        QT_MOC_LITERAL(728, 1),  // "k"
        QT_MOC_LITERAL(730, 2),  // "ca"
        QT_MOC_LITERAL(733, 2),  // "cb"
        QT_MOC_LITERAL(736, 1),  // "z"
        QT_MOC_LITERAL(738, 2),  // "sf"
        QT_MOC_LITERAL(741, 2),  // "cc"
        QT_MOC_LITERAL(744, 13),  // "setGreenLight"
        QT_MOC_LITERAL(758, 11),  // "setRedLight"
        QT_MOC_LITERAL(770, 19),  // "networkDisconnected"
        QT_MOC_LITERAL(790, 23),  // "on_setGenerator_clicked"
        QT_MOC_LITERAL(814, 23),  // "on_setRegulator_clicked"
        QT_MOC_LITERAL(838, 19),  // "on_setModel_clicked"
        QT_MOC_LITERAL(858, 20),  // "on_startStop_clicked"
        QT_MOC_LITERAL(879, 16),  // "on_reset_clicked"
        QT_MOC_LITERAL(896, 18),  // "on_setLoop_clicked"
        QT_MOC_LITERAL(915, 25),  // "on_reset_Integral_clicked"
        QT_MOC_LITERAL(941, 25),  // "on_reset_Derative_clicked"
        QT_MOC_LITERAL(967, 18),  // "on_show_uP_clicked"
        QT_MOC_LITERAL(986, 18),  // "on_show_uI_clicked"
        QT_MOC_LITERAL(1005, 18),  // "on_show_uD_clicked"
        QT_MOC_LITERAL(1024, 15),  // "on_save_clicked"
        QT_MOC_LITERAL(1040, 15),  // "on_load_clicked"
        QT_MOC_LITERAL(1056, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(1078, 25),  // "on_networkConfirm_clicked"
        QT_MOC_LITERAL(1104, 22)   // "on_testConnect_clicked"
    },
    "GUI",
    "newGeneratorParameters",
    "",
    "SignalType",
    "signalType",
    "amplitude",
    "period",
    "frequency",
    "signalFill",
    "constComponent",
    "newPIDParameters",
    "kP",
    "tI",
    "tD",
    "minValue",
    "maxValue",
    "antiWindupON",
    "altIntegralON",
    "newModelParameters",
    "std::vector<double>",
    "coefficientsA",
    "coefficientsB",
    "disturbance",
    "delay",
    "startStop",
    "setLoop",
    "interval",
    "resetIntegral",
    "resetDeriative",
    "resetGeneratorTime",
    "saveSimulation",
    "filePath",
    "loadSimulation",
    "setLocalLoop",
    "startServerRequest",
    "port",
    "testConnectionRequest",
    "clientSocketCreated",
    "serverSocketCreated",
    "QTcpSocket*",
    "socket",
    "resetConnection",
    "setTaktowanieObustronne",
    "czyObiektON",
    "intervalObiekt",
    "setTaktowanieJednostronne",
    "updateGeneratorSerie",
    "value",
    "updatePIDSeries",
    "uP",
    "uI",
    "uD",
    "output",
    "updateObjectSerie",
    "updateDeviationSerie",
    "updateGUIControls",
    "s",
    "a",
    "per",
    "f",
    "p",
    "i",
    "d",
    "win",
    "min",
    "max",
    "k",
    "ca",
    "cb",
    "z",
    "sf",
    "cc",
    "setGreenLight",
    "setRedLight",
    "networkDisconnected",
    "on_setGenerator_clicked",
    "on_setRegulator_clicked",
    "on_setModel_clicked",
    "on_startStop_clicked",
    "on_reset_clicked",
    "on_setLoop_clicked",
    "on_reset_Integral_clicked",
    "on_reset_Derative_clicked",
    "on_show_uP_clicked",
    "on_show_uI_clicked",
    "on_show_uD_clicked",
    "on_save_clicked",
    "on_load_clicked",
    "on_pushButton_clicked",
    "on_networkConfirm_clicked",
    "on_testConnect_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGUIENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    6,  266,    2, 0x06,    1 /* Public */,
      10,    7,  279,    2, 0x06,    8 /* Public */,
      18,    4,  294,    2, 0x06,   16 /* Public */,
      24,    0,  303,    2, 0x06,   21 /* Public */,
      25,    1,  304,    2, 0x06,   22 /* Public */,
      27,    0,  307,    2, 0x06,   24 /* Public */,
      28,    0,  308,    2, 0x06,   25 /* Public */,
      29,    0,  309,    2, 0x06,   26 /* Public */,
      30,    1,  310,    2, 0x06,   27 /* Public */,
      32,    1,  313,    2, 0x06,   29 /* Public */,
      33,    0,  316,    2, 0x06,   31 /* Public */,
      34,    1,  317,    2, 0x06,   32 /* Public */,
      36,    0,  320,    2, 0x06,   34 /* Public */,
      37,    2,  321,    2, 0x06,   35 /* Public */,
      38,    1,  326,    2, 0x06,   38 /* Public */,
      41,    0,  329,    2, 0x06,   40 /* Public */,
      42,    2,  330,    2, 0x06,   41 /* Public */,
      45,    0,  335,    2, 0x06,   44 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      46,    1,  336,    2, 0x0a,   45 /* Public */,
      48,    4,  339,    2, 0x0a,   47 /* Public */,
      53,    1,  348,    2, 0x0a,   52 /* Public */,
      54,    1,  351,    2, 0x0a,   54 /* Public */,
      55,   16,  354,    2, 0x0a,   56 /* Public */,
      72,    0,  387,    2, 0x0a,   73 /* Public */,
      73,    0,  388,    2, 0x0a,   74 /* Public */,
      74,    0,  389,    2, 0x0a,   75 /* Public */,
      75,    0,  390,    2, 0x08,   76 /* Private */,
      76,    0,  391,    2, 0x08,   77 /* Private */,
      77,    0,  392,    2, 0x08,   78 /* Private */,
      78,    0,  393,    2, 0x08,   79 /* Private */,
      79,    0,  394,    2, 0x08,   80 /* Private */,
      80,    0,  395,    2, 0x08,   81 /* Private */,
      81,    0,  396,    2, 0x08,   82 /* Private */,
      82,    0,  397,    2, 0x08,   83 /* Private */,
      83,    0,  398,    2, 0x08,   84 /* Private */,
      84,    0,  399,    2, 0x08,   85 /* Private */,
      85,    0,  400,    2, 0x08,   86 /* Private */,
      86,    0,  401,    2, 0x08,   87 /* Private */,
      87,    0,  402,    2, 0x08,   88 /* Private */,
      88,    0,  403,    2, 0x08,   89 /* Private */,
      89,    0,  404,    2, 0x08,   90 /* Private */,
      90,    0,  405,    2, 0x08,   91 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Bool,   11,   12,   13,   14,   15,   16,   17,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 19, QMetaType::Double, QMetaType::Int,   20,   21,   22,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double,   43,   44,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,   47,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   49,   50,   51,   52,
    QMetaType::Void, QMetaType::Double,   47,
    QMetaType::Void, QMetaType::Double,   47,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Int, 0x80000000 | 19, 0x80000000 | 19, QMetaType::Double, QMetaType::Double, QMetaType::Double,   56,   57,   58,   59,   60,   61,   62,   63,   64,   65,   66,   67,   68,   69,   70,   71,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSGUIENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGUIENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGUIENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GUI, std::true_type>,
        // method 'newGeneratorParameters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SignalType, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'newPIDParameters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'newModelParameters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<double>, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<double>, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'startStop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setLoop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'resetIntegral'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetDeriative'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetGeneratorTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveSimulation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'loadSimulation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setLocalLoop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startServerRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'testConnectionRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clientSocketCreated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'serverSocketCreated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTcpSocket *, std::false_type>,
        // method 'resetConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTaktowanieObustronne'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setTaktowanieJednostronne'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateGeneratorSerie'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'updatePIDSeries'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'updateObjectSerie'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'updateDeviationSerie'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'updateGUIControls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SignalType, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<double>, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<double>, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setGreenLight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setRedLight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'networkDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_setGenerator_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_setRegulator_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_setModel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_startStop_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_reset_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_setLoop_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_reset_Integral_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_reset_Derative_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_show_uP_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_show_uI_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_show_uD_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_save_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_load_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_networkConfirm_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_testConnect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newGeneratorParameters((*reinterpret_cast< std::add_pointer_t<SignalType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[6]))); break;
        case 1: _t->newPIDParameters((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[7]))); break;
        case 2: _t->newModelParameters((*reinterpret_cast< std::add_pointer_t<std::vector<double>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::vector<double>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 3: _t->startStop(); break;
        case 4: _t->setLoop((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->resetIntegral(); break;
        case 6: _t->resetDeriative(); break;
        case 7: _t->resetGeneratorTime(); break;
        case 8: _t->saveSimulation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->loadSimulation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->setLocalLoop(); break;
        case 11: _t->startServerRequest((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->testConnectionRequest(); break;
        case 13: _t->clientSocketCreated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 14: _t->serverSocketCreated((*reinterpret_cast< std::add_pointer_t<QTcpSocket*>>(_a[1]))); break;
        case 15: _t->resetConnection(); break;
        case 16: _t->setTaktowanieObustronne((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 17: _t->setTaktowanieJednostronne(); break;
        case 18: _t->updateGeneratorSerie((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 19: _t->updatePIDSeries((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4]))); break;
        case 20: _t->updateObjectSerie((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 21: _t->updateDeviationSerie((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 22: _t->updateGUIControls((*reinterpret_cast< std::add_pointer_t<SignalType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[10])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[11])),(*reinterpret_cast< std::add_pointer_t<std::vector<double>>>(_a[12])),(*reinterpret_cast< std::add_pointer_t<std::vector<double>>>(_a[13])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[14])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[15])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[16]))); break;
        case 23: _t->setGreenLight(); break;
        case 24: _t->setRedLight(); break;
        case 25: _t->networkDisconnected(); break;
        case 26: _t->on_setGenerator_clicked(); break;
        case 27: _t->on_setRegulator_clicked(); break;
        case 28: _t->on_setModel_clicked(); break;
        case 29: _t->on_startStop_clicked(); break;
        case 30: _t->on_reset_clicked(); break;
        case 31: _t->on_setLoop_clicked(); break;
        case 32: _t->on_reset_Integral_clicked(); break;
        case 33: _t->on_reset_Derative_clicked(); break;
        case 34: _t->on_show_uP_clicked(); break;
        case 35: _t->on_show_uI_clicked(); break;
        case 36: _t->on_show_uD_clicked(); break;
        case 37: _t->on_save_clicked(); break;
        case 38: _t->on_load_clicked(); break;
        case 39: _t->on_pushButton_clicked(); break;
        case 40: _t->on_networkConfirm_clicked(); break;
        case 41: _t->on_testConnect_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GUI::*)(SignalType , double , double , double , double , double );
            if (_t _q_method = &GUI::newGeneratorParameters; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GUI::*)(double , double , double , double , double , bool , bool );
            if (_t _q_method = &GUI::newPIDParameters; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GUI::*)(std::vector<double> , std::vector<double> , double , int );
            if (_t _q_method = &GUI::newModelParameters; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GUI::*)();
            if (_t _q_method = &GUI::startStop; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GUI::*)(double );
            if (_t _q_method = &GUI::setLoop; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GUI::*)();
            if (_t _q_method = &GUI::resetIntegral; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GUI::*)();
            if (_t _q_method = &GUI::resetDeriative; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GUI::*)();
            if (_t _q_method = &GUI::resetGeneratorTime; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GUI::*)(QString );
            if (_t _q_method = &GUI::saveSimulation; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GUI::*)(QString );
            if (_t _q_method = &GUI::loadSimulation; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GUI::*)();
            if (_t _q_method = &GUI::setLocalLoop; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GUI::*)(int );
            if (_t _q_method = &GUI::startServerRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GUI::*)();
            if (_t _q_method = &GUI::testConnectionRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (GUI::*)(QString , int );
            if (_t _q_method = &GUI::clientSocketCreated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (GUI::*)(QTcpSocket * );
            if (_t _q_method = &GUI::serverSocketCreated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (GUI::*)();
            if (_t _q_method = &GUI::resetConnection; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (GUI::*)(bool , double );
            if (_t _q_method = &GUI::setTaktowanieObustronne; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (GUI::*)();
            if (_t _q_method = &GUI::setTaktowanieJednostronne; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
    }
}

const QMetaObject *GUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGUIENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void GUI::newGeneratorParameters(SignalType _t1, double _t2, double _t3, double _t4, double _t5, double _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::newPIDParameters(double _t1, double _t2, double _t3, double _t4, double _t5, bool _t6, bool _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GUI::newModelParameters(std::vector<double> _t1, std::vector<double> _t2, double _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GUI::startStop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GUI::setLoop(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GUI::resetIntegral()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void GUI::resetDeriative()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void GUI::resetGeneratorTime()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void GUI::saveSimulation(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GUI::loadSimulation(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GUI::setLocalLoop()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void GUI::startServerRequest(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GUI::testConnectionRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void GUI::clientSocketCreated(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GUI::serverSocketCreated(QTcpSocket * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void GUI::resetConnection()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void GUI::setTaktowanieObustronne(bool _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void GUI::setTaktowanieJednostronne()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
