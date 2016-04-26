/****************************************************************************
** Meta object code from reading C++ file 'robot_state_display.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/moveit_ros/visualization/robot_state_rviz_plugin/include/moveit/robot_state_rviz_plugin/robot_state_display.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'robot_state_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_rviz_plugin__RobotStateDisplay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      39,   38,   38,   38, 0x08,
      65,   38,   38,   38, 0x08,
      87,   38,   38,   38, 0x08,
     112,   38,   38,   38, 0x08,
     139,   38,   38,   38, 0x08,
     164,   38,   38,   38, 0x08,
     193,   38,   38,   38, 0x08,
     222,   38,   38,   38, 0x08,
     254,   38,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_moveit_rviz_plugin__RobotStateDisplay[] = {
    "moveit_rviz_plugin::RobotStateDisplay\0"
    "\0changedRobotDescription()\0"
    "changedRootLinkName()\0changedRobotSceneAlpha()\0"
    "changedAttachedBodyColor()\0"
    "changedRobotStateTopic()\0"
    "changedEnableLinkHighlight()\0"
    "changedEnableVisualVisible()\0"
    "changedEnableCollisionVisible()\0"
    "changedAllLinks()\0"
};

void moveit_rviz_plugin::RobotStateDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobotStateDisplay *_t = static_cast<RobotStateDisplay *>(_o);
        switch (_id) {
        case 0: _t->changedRobotDescription(); break;
        case 1: _t->changedRootLinkName(); break;
        case 2: _t->changedRobotSceneAlpha(); break;
        case 3: _t->changedAttachedBodyColor(); break;
        case 4: _t->changedRobotStateTopic(); break;
        case 5: _t->changedEnableLinkHighlight(); break;
        case 6: _t->changedEnableVisualVisible(); break;
        case 7: _t->changedEnableCollisionVisible(); break;
        case 8: _t->changedAllLinks(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData moveit_rviz_plugin::RobotStateDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_rviz_plugin::RobotStateDisplay::staticMetaObject = {
    { &rviz::Display::staticMetaObject, qt_meta_stringdata_moveit_rviz_plugin__RobotStateDisplay,
      qt_meta_data_moveit_rviz_plugin__RobotStateDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_rviz_plugin::RobotStateDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_rviz_plugin::RobotStateDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_rviz_plugin::RobotStateDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__RobotStateDisplay))
        return static_cast<void*>(const_cast< RobotStateDisplay*>(this));
    typedef rviz::Display QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int moveit_rviz_plugin::RobotStateDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef rviz::Display QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
