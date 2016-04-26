/****************************************************************************
** Meta object code from reading C++ file 'planning_groups_widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_setup_assistant/src/widgets/planning_groups_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planning_groups_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_setup_assistant__PlanningGroupsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      46,   45,   45,   45, 0x08,
      63,   45,   45,   45, 0x08,
      81,   45,   45,   45, 0x08,
      96,   45,   45,   45, 0x08,
     107,   45,   45,   45, 0x08,
     126,   45,   45,   45, 0x08,
     144,   45,   45,   45, 0x08,
     162,   45,   45,   45, 0x08,
     184,   45,   45,   45, 0x08,
     206,   45,   45,   45, 0x08,
     230,   45,   45,   45, 0x08,
     253,   45,   45,   45, 0x08,
     276,   45,   45,   45, 0x08,
     303,   45,   45,   45, 0x08,
     317,   45,   45,   45, 0x08,
     338,  333,   45,   45, 0x08,
     363,  357,   45,   45, 0x08,
     416,  409,   45,   45, 0x08,
     471,  464,   45,   45, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_moveit_setup_assistant__PlanningGroupsWidget[] = {
    "moveit_setup_assistant::PlanningGroupsWidget\0"
    "\0loadGroupsTree()\0previewSelected()\0"
    "editSelected()\0addGroup()\0saveJointsScreen()\0"
    "saveLinksScreen()\0saveChainScreen()\0"
    "saveSubgroupsScreen()\0saveGroupScreenEdit()\0"
    "saveGroupScreenJoints()\0saveGroupScreenLinks()\0"
    "saveGroupScreenChain()\0"
    "saveGroupScreenSubgroups()\0deleteGroup()\0"
    "cancelEditing()\0link\0alterTree(QString)\0"
    "links\0previewSelectedLink(std::vector<std::string>)\0"
    "joints\0previewSelectedJoints(std::vector<std::string>)\0"
    "groups\0previewSelectedSubgroup(std::vector<std::string>)\0"
};

void moveit_setup_assistant::PlanningGroupsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlanningGroupsWidget *_t = static_cast<PlanningGroupsWidget *>(_o);
        switch (_id) {
        case 0: _t->loadGroupsTree(); break;
        case 1: _t->previewSelected(); break;
        case 2: _t->editSelected(); break;
        case 3: _t->addGroup(); break;
        case 4: _t->saveJointsScreen(); break;
        case 5: _t->saveLinksScreen(); break;
        case 6: _t->saveChainScreen(); break;
        case 7: _t->saveSubgroupsScreen(); break;
        case 8: _t->saveGroupScreenEdit(); break;
        case 9: _t->saveGroupScreenJoints(); break;
        case 10: _t->saveGroupScreenLinks(); break;
        case 11: _t->saveGroupScreenChain(); break;
        case 12: _t->saveGroupScreenSubgroups(); break;
        case 13: _t->deleteGroup(); break;
        case 14: _t->cancelEditing(); break;
        case 15: _t->alterTree((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->previewSelectedLink((*reinterpret_cast< std::vector<std::string>(*)>(_a[1]))); break;
        case 17: _t->previewSelectedJoints((*reinterpret_cast< std::vector<std::string>(*)>(_a[1]))); break;
        case 18: _t->previewSelectedSubgroup((*reinterpret_cast< std::vector<std::string>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData moveit_setup_assistant::PlanningGroupsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_setup_assistant::PlanningGroupsWidget::staticMetaObject = {
    { &SetupScreenWidget::staticMetaObject, qt_meta_stringdata_moveit_setup_assistant__PlanningGroupsWidget,
      qt_meta_data_moveit_setup_assistant__PlanningGroupsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_setup_assistant::PlanningGroupsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_setup_assistant::PlanningGroupsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_setup_assistant::PlanningGroupsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__PlanningGroupsWidget))
        return static_cast<void*>(const_cast< PlanningGroupsWidget*>(this));
    return SetupScreenWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::PlanningGroupsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SetupScreenWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
