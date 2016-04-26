/****************************************************************************
** Meta object code from reading C++ file 'main_window.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_ros/benchmarks_gui/include/main_window.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_benchmark_tool__MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x0a,
      54,   27,   27,   27, 0x0a,
      85,   80,   27,   27, 0x0a,
     115,   27,   27,   27, 0x0a,
     140,   27,   27,   27, 0x0a,
     178,   27,   27,   27, 0x0a,
     210,   27,   27,   27, 0x0a,
     240,  235,   27,   27, 0x0a,
     290,  281,   27,   27, 0x0a,
     365,  355,   27,   27, 0x0a,
     411,   27,   27,   27, 0x0a,
     441,   27,   27,   27, 0x0a,
     463,   27,   27,   27, 0x0a,
     494,   27,   27,   27, 0x0a,
     529,   27,   27,   27, 0x0a,
     559,   27,   27,   27, 0x0a,
     586,   27,   27,   27, 0x0a,
     622,  235,   27,   27, 0x0a,
     662,   27,   27,   27, 0x0a,
     692,  686,   27,   27, 0x0a,
     716,   27,   27,   27, 0x0a,
     740,   27,   27,   27, 0x0a,
     762,   27,   27,   27, 0x0a,
     782,   27,  777,   27, 0x0a,
     817,   27,   27,   27, 0x0a,
     848,   27,   27,   27, 0x0a,
     876,   27,   27,   27, 0x0a,
     907,   27,   27,   27, 0x0a,
     943,  930,   27,   27, 0x0a,
    1024, 1013,   27,   27, 0x0a,
    1101,   27,   27,   27, 0x0a,
    1121,   27,   27,   27, 0x0a,
    1151,   27,   27,   27, 0x0a,
    1187,   27,   27,   27, 0x0a,
    1218,  235,   27,   27, 0x0a,
    1264,   27,   27,   27, 0x0a,
    1295,   27,   27,   27, 0x0a,
    1324,   27,   27,   27, 0x0a,
    1355,   27,   27,   27, 0x0a,
    1387,   27,   27,   27, 0x0a,
    1417,   27,   27,   27, 0x0a,
    1449,   27,   27,   27, 0x0a,
    1478,   27,   27,   27, 0x0a,
    1510,   27,   27,   27, 0x0a,
    1542,   27,   27,   27, 0x0a,
    1580,   27,   27,   27, 0x0a,
    1616,   27,   27,   27, 0x0a,
    1649,   27,   27,   27, 0x0a,
    1682,   27,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_benchmark_tool__MainWindow[] = {
    "benchmark_tool::MainWindow\0\0"
    "exitActionTriggered(bool)\0"
    "openActionTriggered(bool)\0text\0"
    "planningGroupChanged(QString)\0"
    "dbConnectButtonClicked()\0"
    "dbConnectButtonClickedBackgroundJob()\0"
    "robotInteractionButtonClicked()\0"
    "loadSceneButtonClicked()\0item\0"
    "loadSceneButtonClicked(QListWidgetItem*)\0"
    "feedback\0"
    "goalPoseFeedback(visualization_msgs::InteractiveMarkerFeedback&)\0"
    "name,pose\0createGoalAtPose(std::string,Eigen::Affine3d)\0"
    "createGoalPoseButtonClicked()\0"
    "showBBoxGoalsDialog()\0"
    "createBBoxGoalsButtonClicked()\0"
    "removeSelectedGoalsButtonClicked()\0"
    "removeAllGoalsButtonClicked()\0"
    "goalPoseSelectionChanged()\0"
    "switchGoalVisibilityButtonClicked()\0"
    "goalPoseDoubleClicked(QListWidgetItem*)\0"
    "copySelectedGoalPoses()\0state\0"
    "visibleAxisChanged(int)\0checkGoalsInCollision()\0"
    "checkGoalsReachable()\0runBenchmark()\0"
    "bool\0saveBenchmarkConfigButtonClicked()\0"
    "cancelBenchmarkButtonClicked()\0"
    "runBenchmarkButtonClicked()\0"
    "benchmarkFolderButtonClicked()\0"
    "loadBenchmarkResults()\0marker,state\0"
    "updateMarkerState(GripperMarkerPtr,GripperMarker::GripperMarkerState)\0"
    "name,state\0"
    "updateGoalMarkerStateFromName(std::string,GripperMarker::GripperMarker"
    "State)\0"
    "goalOffsetChanged()\0saveStartStateButtonClicked()\0"
    "removeSelectedStatesButtonClicked()\0"
    "removeAllStatesButtonClicked()\0"
    "startStateItemDoubleClicked(QListWidgetItem*)\0"
    "loadGoalsFromDBButtonClicked()\0"
    "saveGoalsOnDBButtonClicked()\0"
    "deleteGoalsOnDBButtonClicked()\0"
    "loadStatesFromDBButtonClicked()\0"
    "saveStatesOnDBButtonClicked()\0"
    "deleteStatesOnDBButtonClicked()\0"
    "trajectorySelectionChanged()\0"
    "createTrajectoryButtonClicked()\0"
    "removeTrajectoryButtonClicked()\0"
    "loadTrajectoriesFromDBButtonClicked()\0"
    "saveTrajectoriesOnDBButtonClicked()\0"
    "trajectoryNWaypointsChanged(int)\0"
    "trajectoryExecuteButtonClicked()\0"
    "MainLoop()\0"
};

void benchmark_tool::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->exitActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->openActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->planningGroupChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->dbConnectButtonClicked(); break;
        case 4: _t->dbConnectButtonClickedBackgroundJob(); break;
        case 5: _t->robotInteractionButtonClicked(); break;
        case 6: _t->loadSceneButtonClicked(); break;
        case 7: _t->loadSceneButtonClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->goalPoseFeedback((*reinterpret_cast< visualization_msgs::InteractiveMarkerFeedback(*)>(_a[1]))); break;
        case 9: _t->createGoalAtPose((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const Eigen::Affine3d(*)>(_a[2]))); break;
        case 10: _t->createGoalPoseButtonClicked(); break;
        case 11: _t->showBBoxGoalsDialog(); break;
        case 12: _t->createBBoxGoalsButtonClicked(); break;
        case 13: _t->removeSelectedGoalsButtonClicked(); break;
        case 14: _t->removeAllGoalsButtonClicked(); break;
        case 15: _t->goalPoseSelectionChanged(); break;
        case 16: _t->switchGoalVisibilityButtonClicked(); break;
        case 17: _t->goalPoseDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 18: _t->copySelectedGoalPoses(); break;
        case 19: _t->visibleAxisChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->checkGoalsInCollision(); break;
        case 21: _t->checkGoalsReachable(); break;
        case 22: _t->runBenchmark(); break;
        case 23: { bool _r = _t->saveBenchmarkConfigButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: _t->cancelBenchmarkButtonClicked(); break;
        case 25: _t->runBenchmarkButtonClicked(); break;
        case 26: _t->benchmarkFolderButtonClicked(); break;
        case 27: _t->loadBenchmarkResults(); break;
        case 28: _t->updateMarkerState((*reinterpret_cast< GripperMarkerPtr(*)>(_a[1])),(*reinterpret_cast< const GripperMarker::GripperMarkerState(*)>(_a[2]))); break;
        case 29: _t->updateGoalMarkerStateFromName((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const GripperMarker::GripperMarkerState(*)>(_a[2]))); break;
        case 30: _t->goalOffsetChanged(); break;
        case 31: _t->saveStartStateButtonClicked(); break;
        case 32: _t->removeSelectedStatesButtonClicked(); break;
        case 33: _t->removeAllStatesButtonClicked(); break;
        case 34: _t->startStateItemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 35: _t->loadGoalsFromDBButtonClicked(); break;
        case 36: _t->saveGoalsOnDBButtonClicked(); break;
        case 37: _t->deleteGoalsOnDBButtonClicked(); break;
        case 38: _t->loadStatesFromDBButtonClicked(); break;
        case 39: _t->saveStatesOnDBButtonClicked(); break;
        case 40: _t->deleteStatesOnDBButtonClicked(); break;
        case 41: _t->trajectorySelectionChanged(); break;
        case 42: _t->createTrajectoryButtonClicked(); break;
        case 43: _t->removeTrajectoryButtonClicked(); break;
        case 44: _t->loadTrajectoriesFromDBButtonClicked(); break;
        case 45: _t->saveTrajectoriesOnDBButtonClicked(); break;
        case 46: _t->trajectoryNWaypointsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->trajectoryExecuteButtonClicked(); break;
        case 48: _t->MainLoop(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData benchmark_tool::MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject benchmark_tool::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_benchmark_tool__MainWindow,
      qt_meta_data_benchmark_tool__MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &benchmark_tool::MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *benchmark_tool::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *benchmark_tool::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_benchmark_tool__MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int benchmark_tool::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
