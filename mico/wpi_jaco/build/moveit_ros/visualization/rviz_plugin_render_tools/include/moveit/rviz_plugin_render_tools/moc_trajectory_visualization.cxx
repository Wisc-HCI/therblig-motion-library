/****************************************************************************
** Meta object code from reading C++ file 'trajectory_visualization.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/moveit_ros/visualization/rviz_plugin_render_tools/include/moveit/rviz_plugin_render_tools/trajectory_visualization.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trajectory_visualization.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_rviz_plugin__TrajectoryVisualization[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      45,   44,   44,   44, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   44,   44,   44, 0x08,
     100,   44,   44,   44, 0x08,
     137,   44,   44,   44, 0x08,
     161,   44,   44,   44, 0x08,
     182,   44,   44,   44, 0x08,
     201,   44,   44,   44, 0x08,
     226,   44,   44,   44, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_moveit_rviz_plugin__TrajectoryVisualization[] = {
    "moveit_rviz_plugin::TrajectoryVisualization\0"
    "\0timeToShowNewTrail()\0"
    "changedDisplayPathVisualEnabled()\0"
    "changedDisplayPathCollisionEnabled()\0"
    "changedRobotPathAlpha()\0changedLoopDisplay()\0"
    "changedShowTrail()\0changedTrajectoryTopic()\0"
    "changedStateDisplayTime()\0"
};

void moveit_rviz_plugin::TrajectoryVisualization::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TrajectoryVisualization *_t = static_cast<TrajectoryVisualization *>(_o);
        switch (_id) {
        case 0: _t->timeToShowNewTrail(); break;
        case 1: _t->changedDisplayPathVisualEnabled(); break;
        case 2: _t->changedDisplayPathCollisionEnabled(); break;
        case 3: _t->changedRobotPathAlpha(); break;
        case 4: _t->changedLoopDisplay(); break;
        case 5: _t->changedShowTrail(); break;
        case 6: _t->changedTrajectoryTopic(); break;
        case 7: _t->changedStateDisplayTime(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData moveit_rviz_plugin::TrajectoryVisualization::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_rviz_plugin::TrajectoryVisualization::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_moveit_rviz_plugin__TrajectoryVisualization,
      qt_meta_data_moveit_rviz_plugin__TrajectoryVisualization, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_rviz_plugin::TrajectoryVisualization::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_rviz_plugin::TrajectoryVisualization::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_rviz_plugin::TrajectoryVisualization::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__TrajectoryVisualization))
        return static_cast<void*>(const_cast< TrajectoryVisualization*>(this));
    return QObject::qt_metacast(_clname);
}

int moveit_rviz_plugin::TrajectoryVisualization::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void moveit_rviz_plugin::TrajectoryVisualization::timeToShowNewTrail()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
