/****************************************************************************
** Meta object code from reading C++ file 'group_edit_widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_setup_assistant/src/widgets/group_edit_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'group_edit_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_setup_assistant__GroupEditWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      41,   40,   40,   40, 0x05,
      54,   40,   40,   40, 0x05,
      66,   40,   40,   40, 0x05,
      78,   40,   40,   40, 0x05,
      94,   40,   40,   40, 0x05,
     101,   40,   40,   40, 0x05,
     117,   40,   40,   40, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_moveit_setup_assistant__GroupEditWidget[] = {
    "moveit_setup_assistant::GroupEditWidget\0"
    "\0saveJoints()\0saveLinks()\0saveChain()\0"
    "saveSubgroups()\0save()\0cancelEditing()\0"
    "deleteGroup()\0"
};

void moveit_setup_assistant::GroupEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GroupEditWidget *_t = static_cast<GroupEditWidget *>(_o);
        switch (_id) {
        case 0: _t->saveJoints(); break;
        case 1: _t->saveLinks(); break;
        case 2: _t->saveChain(); break;
        case 3: _t->saveSubgroups(); break;
        case 4: _t->save(); break;
        case 5: _t->cancelEditing(); break;
        case 6: _t->deleteGroup(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData moveit_setup_assistant::GroupEditWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_setup_assistant::GroupEditWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_moveit_setup_assistant__GroupEditWidget,
      qt_meta_data_moveit_setup_assistant__GroupEditWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_setup_assistant::GroupEditWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_setup_assistant::GroupEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_setup_assistant::GroupEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__GroupEditWidget))
        return static_cast<void*>(const_cast< GroupEditWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::GroupEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void moveit_setup_assistant::GroupEditWidget::saveJoints()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void moveit_setup_assistant::GroupEditWidget::saveLinks()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void moveit_setup_assistant::GroupEditWidget::saveChain()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void moveit_setup_assistant::GroupEditWidget::saveSubgroups()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void moveit_setup_assistant::GroupEditWidget::save()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void moveit_setup_assistant::GroupEditWidget::cancelEditing()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void moveit_setup_assistant::GroupEditWidget::deleteGroup()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
