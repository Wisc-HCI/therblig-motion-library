/****************************************************************************
** Meta object code from reading C++ file 'robot_poses_widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_setup_assistant/src/widgets/robot_poses_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'robot_poses_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_setup_assistant__RobotPosesWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   41,   41,   41, 0x08,
      58,   41,   41,   41, 0x08,
      84,   73,   41,   41, 0x08,
     111,   73,   41,   41, 0x08,
     135,   41,   41,   41, 0x08,
     152,   41,   41,   41, 0x08,
     166,   41,   41,   41, 0x08,
     191,  182,   41,   41, 0x08,
     217,   41,   41,   41, 0x08,
     235,   41,   41,   41, 0x08,
     258,  247,   41,   41, 0x08,
     295,   41,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_moveit_setup_assistant__RobotPosesWidget[] = {
    "moveit_setup_assistant::RobotPosesWidget\0"
    "\0showNewScreen()\0editSelected()\0"
    "row,column\0editDoubleClicked(int,int)\0"
    "previewClicked(int,int)\0deleteSelected()\0"
    "doneEditing()\0cancelEditing()\0selected\0"
    "loadJointSliders(QString)\0showDefaultPose()\0"
    "playPoses()\0name,value\0"
    "updateRobotModel(std::string,double)\0"
    "publishJoints()\0"
};

void moveit_setup_assistant::RobotPosesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobotPosesWidget *_t = static_cast<RobotPosesWidget *>(_o);
        switch (_id) {
        case 0: _t->showNewScreen(); break;
        case 1: _t->editSelected(); break;
        case 2: _t->editDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->previewClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->deleteSelected(); break;
        case 5: _t->doneEditing(); break;
        case 6: _t->cancelEditing(); break;
        case 7: _t->loadJointSliders((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->showDefaultPose(); break;
        case 9: _t->playPoses(); break;
        case 10: _t->updateRobotModel((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 11: _t->publishJoints(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData moveit_setup_assistant::RobotPosesWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_setup_assistant::RobotPosesWidget::staticMetaObject = {
    { &SetupScreenWidget::staticMetaObject, qt_meta_stringdata_moveit_setup_assistant__RobotPosesWidget,
      qt_meta_data_moveit_setup_assistant__RobotPosesWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_setup_assistant::RobotPosesWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_setup_assistant::RobotPosesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_setup_assistant::RobotPosesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__RobotPosesWidget))
        return static_cast<void*>(const_cast< RobotPosesWidget*>(this));
    return SetupScreenWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::RobotPosesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SetupScreenWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
static const uint qt_meta_data_moveit_setup_assistant__SliderWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      49,   38,   37,   37, 0x05,

 // slots: signature, parameters, type, tag, flags
      93,   87,   37,   37, 0x08,
     115,   37,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_moveit_setup_assistant__SliderWidget[] = {
    "moveit_setup_assistant::SliderWidget\0"
    "\0name,value\0jointValueChanged(std::string,double)\0"
    "value\0changeJointValue(int)\0"
    "changeJointSlider()\0"
};

void moveit_setup_assistant::SliderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SliderWidget *_t = static_cast<SliderWidget *>(_o);
        switch (_id) {
        case 0: _t->jointValueChanged((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->changeJointValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeJointSlider(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData moveit_setup_assistant::SliderWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_setup_assistant::SliderWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_moveit_setup_assistant__SliderWidget,
      qt_meta_data_moveit_setup_assistant__SliderWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_setup_assistant::SliderWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_setup_assistant::SliderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_setup_assistant::SliderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__SliderWidget))
        return static_cast<void*>(const_cast< SliderWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::SliderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void moveit_setup_assistant::SliderWidget::jointValueChanged(const std::string & _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
