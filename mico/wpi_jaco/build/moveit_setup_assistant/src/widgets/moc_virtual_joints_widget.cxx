/****************************************************************************
** Meta object code from reading C++ file 'virtual_joints_widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_setup_assistant/src/widgets/virtual_joints_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtual_joints_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_setup_assistant__VirtualJointsWidget[] = {

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
      69,   44,   44,   44, 0x08,
      85,   44,   44,   44, 0x08,
     111,  100,   44,   44, 0x08,
     138,  100,   44,   44, 0x08,
     162,   44,   44,   44, 0x08,
     179,   44,   44,   44, 0x08,
     193,   44,   44,   44, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_moveit_setup_assistant__VirtualJointsWidget[] = {
    "moveit_setup_assistant::VirtualJointsWidget\0"
    "\0referenceFrameChanged()\0showNewScreen()\0"
    "editSelected()\0row,column\0"
    "editDoubleClicked(int,int)\0"
    "previewClicked(int,int)\0deleteSelected()\0"
    "doneEditing()\0cancelEditing()\0"
};

void moveit_setup_assistant::VirtualJointsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VirtualJointsWidget *_t = static_cast<VirtualJointsWidget *>(_o);
        switch (_id) {
        case 0: _t->referenceFrameChanged(); break;
        case 1: _t->showNewScreen(); break;
        case 2: _t->editSelected(); break;
        case 3: _t->editDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->previewClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->deleteSelected(); break;
        case 6: _t->doneEditing(); break;
        case 7: _t->cancelEditing(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData moveit_setup_assistant::VirtualJointsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_setup_assistant::VirtualJointsWidget::staticMetaObject = {
    { &SetupScreenWidget::staticMetaObject, qt_meta_stringdata_moveit_setup_assistant__VirtualJointsWidget,
      qt_meta_data_moveit_setup_assistant__VirtualJointsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_setup_assistant::VirtualJointsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_setup_assistant::VirtualJointsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_setup_assistant::VirtualJointsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__VirtualJointsWidget))
        return static_cast<void*>(const_cast< VirtualJointsWidget*>(this));
    return SetupScreenWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::VirtualJointsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SetupScreenWidget::qt_metacall(_c, _id, _a);
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
void moveit_setup_assistant::VirtualJointsWidget::referenceFrameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
