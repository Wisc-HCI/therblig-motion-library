/****************************************************************************
** Meta object code from reading C++ file 'motion_planning_frame.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/moveit_ros/visualization/motion_planning_rviz_plugin/include/moveit/motion_planning_rviz_plugin/motion_planning_frame.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'motion_planning_frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_rviz_plugin__MotionPlanningFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   40,   40,   40, 0x08,
      72,   40,   40,   40, 0x08,
     106,  100,   40,   40, 0x08,
     141,   40,   40,   40, 0x08,
     170,  164,   40,   40, 0x08,
     196,   40,   40,   40, 0x08,
     216,   40,   40,   40, 0x08,
     239,   40,   40,   40, 0x08,
     277,  269,   40,   40, 0x08,
     306,  269,   40,   40, 0x08,
     339,  332,   40,   40, 0x08,
     379,  100,   40,   40, 0x08,
     412,   40,   40,   40, 0x08,
     441,   40,   40,   40, 0x08,
     469,   40,   40,   40, 0x08,
     493,   40,   40,   40, 0x08,
     519,   40,   40,   40, 0x08,
     544,   40,   40,   40, 0x08,
     576,  570,   40,   40, 0x08,
     599,   40,   40,   40, 0x08,
     623,   40,   40,   40, 0x08,
     645,   40,   40,   40, 0x08,
     673,   40,   40,   40, 0x08,
     706,  570,   40,   40, 0x08,
     742,  737,   40,   40, 0x08,
     792,  783,   40,   40, 0x08,
     858,   40,   40,   40, 0x08,
     888,   40,   40,   40, 0x08,
     916,   40,   40,   40, 0x08,
     946,   40,   40,   40, 0x08,
     971,   40,   40,   40, 0x08,
     998,   40,   40,   40, 0x08,
    1023,   40,   40,   40, 0x08,
    1050,   40,   40,   40, 0x08,
    1077,   40,   40,   40, 0x08,
    1102,   40,   40,   40, 0x08,
    1139, 1127,   40,   40, 0x08,
    1186,   40,   40,   40, 0x08,
    1211,   40,   40,   40, 0x08,
    1241,   40,   40,   40, 0x08,
    1270,   40,   40,   40, 0x08,
    1297,   40,   40,   40, 0x08,
    1324,   40,   40,   40, 0x08,
    1355,   40,   40,   40, 0x08,
    1385,   40,   40,   40, 0x08,
    1414,   40,   40,   40, 0x08,
    1440,   40,   40,   40, 0x08,
    1467,   40,   40,   40, 0x08,
    1499,  737,   40,   40, 0x08,
    1539,   40,   40,   40, 0x08,
    1571,  100,   40,   40, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_moveit_rviz_plugin__MotionPlanningFrame[] = {
    "moveit_rviz_plugin::MotionPlanningFrame\0"
    "\0databaseConnectButtonClicked()\0"
    "publishSceneButtonClicked()\0index\0"
    "planningAlgorithmIndexChanged(int)\0"
    "resetDbButtonClicked()\0state\0"
    "approximateIKChanged(int)\0planButtonClicked()\0"
    "executeButtonClicked()\0"
    "planAndExecuteButtonClicked()\0checked\0"
    "allowReplanningToggled(bool)\0"
    "allowLookingToggled(bool)\0enable\0"
    "allowExternalProgramCommunication(bool)\0"
    "pathConstraintsIndexChanged(int)\0"
    "useStartStateButtonClicked()\0"
    "useGoalStateButtonClicked()\0"
    "onClearOctomapClicked()\0"
    "importFileButtonClicked()\0"
    "importUrlButtonClicked()\0"
    "clearSceneButtonClicked()\0value\0"
    "sceneScaleChanged(int)\0sceneScaleStartChange()\0"
    "sceneScaleEndChange()\0removeObjectButtonClicked()\0"
    "selectedCollisionObjectChanged()\0"
    "objectPoseValueChanged(double)\0item\0"
    "collisionObjectChanged(QListWidgetItem*)\0"
    "feedback\0"
    "imProcessFeedback(visualization_msgs::InteractiveMarkerFeedback&)\0"
    "copySelectedCollisionObject()\0"
    "exportAsTextButtonClicked()\0"
    "importFromTextButtonClicked()\0"
    "saveSceneButtonClicked()\0"
    "planningSceneItemClicked()\0"
    "saveQueryButtonClicked()\0"
    "deleteSceneButtonClicked()\0"
    "deleteQueryButtonClicked()\0"
    "loadSceneButtonClicked()\0"
    "loadQueryButtonClicked()\0item,column\0"
    "warehouseItemNameChanged(QTreeWidgetItem*,int)\0"
    "loadStateButtonClicked()\0"
    "saveStartStateButtonClicked()\0"
    "saveGoalStateButtonClicked()\0"
    "removeStateButtonClicked()\0"
    "clearStatesButtonClicked()\0"
    "setAsStartStateButtonClicked()\0"
    "setAsGoalStateButtonClicked()\0"
    "detectObjectsButtonClicked()\0"
    "pickObjectButtonClicked()\0"
    "placeObjectButtonClicked()\0"
    "selectedDetectedObjectChanged()\0"
    "detectedObjectChanged(QListWidgetItem*)\0"
    "selectedSupportSurfaceChanged()\0"
    "tabChanged(int)\0"
};

void moveit_rviz_plugin::MotionPlanningFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MotionPlanningFrame *_t = static_cast<MotionPlanningFrame *>(_o);
        switch (_id) {
        case 0: _t->databaseConnectButtonClicked(); break;
        case 1: _t->publishSceneButtonClicked(); break;
        case 2: _t->planningAlgorithmIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->resetDbButtonClicked(); break;
        case 4: _t->approximateIKChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->planButtonClicked(); break;
        case 6: _t->executeButtonClicked(); break;
        case 7: _t->planAndExecuteButtonClicked(); break;
        case 8: _t->allowReplanningToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->allowLookingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->allowExternalProgramCommunication((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->pathConstraintsIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->useStartStateButtonClicked(); break;
        case 13: _t->useGoalStateButtonClicked(); break;
        case 14: _t->onClearOctomapClicked(); break;
        case 15: _t->importFileButtonClicked(); break;
        case 16: _t->importUrlButtonClicked(); break;
        case 17: _t->clearSceneButtonClicked(); break;
        case 18: _t->sceneScaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->sceneScaleStartChange(); break;
        case 20: _t->sceneScaleEndChange(); break;
        case 21: _t->removeObjectButtonClicked(); break;
        case 22: _t->selectedCollisionObjectChanged(); break;
        case 23: _t->objectPoseValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 24: _t->collisionObjectChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 25: _t->imProcessFeedback((*reinterpret_cast< visualization_msgs::InteractiveMarkerFeedback(*)>(_a[1]))); break;
        case 26: _t->copySelectedCollisionObject(); break;
        case 27: _t->exportAsTextButtonClicked(); break;
        case 28: _t->importFromTextButtonClicked(); break;
        case 29: _t->saveSceneButtonClicked(); break;
        case 30: _t->planningSceneItemClicked(); break;
        case 31: _t->saveQueryButtonClicked(); break;
        case 32: _t->deleteSceneButtonClicked(); break;
        case 33: _t->deleteQueryButtonClicked(); break;
        case 34: _t->loadSceneButtonClicked(); break;
        case 35: _t->loadQueryButtonClicked(); break;
        case 36: _t->warehouseItemNameChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 37: _t->loadStateButtonClicked(); break;
        case 38: _t->saveStartStateButtonClicked(); break;
        case 39: _t->saveGoalStateButtonClicked(); break;
        case 40: _t->removeStateButtonClicked(); break;
        case 41: _t->clearStatesButtonClicked(); break;
        case 42: _t->setAsStartStateButtonClicked(); break;
        case 43: _t->setAsGoalStateButtonClicked(); break;
        case 44: _t->detectObjectsButtonClicked(); break;
        case 45: _t->pickObjectButtonClicked(); break;
        case 46: _t->placeObjectButtonClicked(); break;
        case 47: _t->selectedDetectedObjectChanged(); break;
        case 48: _t->detectedObjectChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 49: _t->selectedSupportSurfaceChanged(); break;
        case 50: _t->tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData moveit_rviz_plugin::MotionPlanningFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_rviz_plugin::MotionPlanningFrame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_moveit_rviz_plugin__MotionPlanningFrame,
      qt_meta_data_moveit_rviz_plugin__MotionPlanningFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_rviz_plugin::MotionPlanningFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_rviz_plugin::MotionPlanningFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_rviz_plugin::MotionPlanningFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__MotionPlanningFrame))
        return static_cast<void*>(const_cast< MotionPlanningFrame*>(this));
    return QWidget::qt_metacast(_clname);
}

int moveit_rviz_plugin::MotionPlanningFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
