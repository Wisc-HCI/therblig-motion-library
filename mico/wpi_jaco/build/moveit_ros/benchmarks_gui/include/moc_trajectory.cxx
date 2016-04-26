/****************************************************************************
** Meta object code from reading C++ file 'trajectory.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_ros/benchmarks_gui/include/trajectory.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trajectory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_benchmark_tool__Trajectory[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   28,   27,   27, 0x0a,
     110,   28,   27,   27, 0x0a,
     177,   28,   27,   27, 0x0a,
     245,   28,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_benchmark_tool__Trajectory[] = {
    "benchmark_tool::Trajectory\0\0feedback\0"
    "trajectoryMarkerFeedback(visualization_msgs::InteractiveMarkerFeedback"
    "&)\0"
    "handMarkerFeedback(visualization_msgs::InteractiveMarkerFeedback&)\0"
    "startMarkerFeedback(visualization_msgs::InteractiveMarkerFeedback&)\0"
    "endMarkerFeedback(visualization_msgs::InteractiveMarkerFeedback&)\0"
};

void benchmark_tool::Trajectory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Trajectory *_t = static_cast<Trajectory *>(_o);
        switch (_id) {
        case 0: _t->trajectoryMarkerFeedback((*reinterpret_cast< visualization_msgs::InteractiveMarkerFeedback(*)>(_a[1]))); break;
        case 1: _t->handMarkerFeedback((*reinterpret_cast< visualization_msgs::InteractiveMarkerFeedback(*)>(_a[1]))); break;
        case 2: _t->startMarkerFeedback((*reinterpret_cast< visualization_msgs::InteractiveMarkerFeedback(*)>(_a[1]))); break;
        case 3: _t->endMarkerFeedback((*reinterpret_cast< visualization_msgs::InteractiveMarkerFeedback(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData benchmark_tool::Trajectory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject benchmark_tool::Trajectory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_benchmark_tool__Trajectory,
      qt_meta_data_benchmark_tool__Trajectory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &benchmark_tool::Trajectory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *benchmark_tool::Trajectory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *benchmark_tool::Trajectory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_benchmark_tool__Trajectory))
        return static_cast<void*>(const_cast< Trajectory*>(this));
    return QObject::qt_metacast(_clname);
}

int benchmark_tool::Trajectory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
