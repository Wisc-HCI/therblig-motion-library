/****************************************************************************
** Meta object code from reading C++ file 'default_collisions_widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_setup_assistant/src/widgets/default_collisions_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'default_collisions_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_setup_assistant__DefaultCollisionsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   48,   48,   48, 0x08,
      80,   74,   48,   48, 0x08,
     104,   48,   48,   48, 0x08,
     125,   48,   48,   48, 0x08,
     155,  151,   48,   48, 0x08,
     190,  179,   48,   48, 0x08,
     214,   48,   48,   48, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_moveit_setup_assistant__DefaultCollisionsWidget[] = {
    "moveit_setup_assistant::DefaultCollisionsWidget\0"
    "\0generateCollisionTable()\0value\0"
    "changeDensityLabel(int)\0loadCollisionTable()\0"
    "collisionCheckboxToggle()\0j,i\0"
    "toggleCheckBox(int,int)\0row,column\0"
    "previewClicked(int,int)\0focusGiven()\0"
};

void moveit_setup_assistant::DefaultCollisionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DefaultCollisionsWidget *_t = static_cast<DefaultCollisionsWidget *>(_o);
        switch (_id) {
        case 0: _t->generateCollisionTable(); break;
        case 1: _t->changeDensityLabel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->loadCollisionTable(); break;
        case 3: _t->collisionCheckboxToggle(); break;
        case 4: _t->toggleCheckBox((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->previewClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->focusGiven(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData moveit_setup_assistant::DefaultCollisionsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_setup_assistant::DefaultCollisionsWidget::staticMetaObject = {
    { &SetupScreenWidget::staticMetaObject, qt_meta_stringdata_moveit_setup_assistant__DefaultCollisionsWidget,
      qt_meta_data_moveit_setup_assistant__DefaultCollisionsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_setup_assistant::DefaultCollisionsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_setup_assistant::DefaultCollisionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_setup_assistant::DefaultCollisionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__DefaultCollisionsWidget))
        return static_cast<void*>(const_cast< DefaultCollisionsWidget*>(this));
    return SetupScreenWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::DefaultCollisionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SetupScreenWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
