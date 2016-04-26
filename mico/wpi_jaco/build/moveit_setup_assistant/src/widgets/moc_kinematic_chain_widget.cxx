/****************************************************************************
** Meta object code from reading C++ file 'kinematic_chain_widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_setup_assistant/src/widgets/kinematic_chain_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kinematic_chain_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_setup_assistant__KinematicChainWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   45,   45,   45, 0x05,
      60,   45,   45,   45, 0x05,
      81,   76,   45,   45, 0x05,
     108,   45,   45,   45, 0x05,

 // slots: signature, parameters, type, tag, flags
     125,   45,   45,   45, 0x08,
     145,   45,   45,   45, 0x08,
     169,  164,   45,   45, 0x08,
     188,   45,   45,   45, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_moveit_setup_assistant__KinematicChainWidget[] = {
    "moveit_setup_assistant::KinematicChainWidget\0"
    "\0doneEditing()\0cancelEditing()\0name\0"
    "highlightLink(std::string)\0unhighlightAll()\0"
    "baseLinkTreeClick()\0tipLinkTreeClick()\0"
    "link\0alterTree(QString)\0itemSelected()\0"
};

void moveit_setup_assistant::KinematicChainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KinematicChainWidget *_t = static_cast<KinematicChainWidget *>(_o);
        switch (_id) {
        case 0: _t->doneEditing(); break;
        case 1: _t->cancelEditing(); break;
        case 2: _t->highlightLink((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 3: _t->unhighlightAll(); break;
        case 4: _t->baseLinkTreeClick(); break;
        case 5: _t->tipLinkTreeClick(); break;
        case 6: _t->alterTree((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->itemSelected(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData moveit_setup_assistant::KinematicChainWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_setup_assistant::KinematicChainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_moveit_setup_assistant__KinematicChainWidget,
      qt_meta_data_moveit_setup_assistant__KinematicChainWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_setup_assistant::KinematicChainWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_setup_assistant::KinematicChainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_setup_assistant::KinematicChainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__KinematicChainWidget))
        return static_cast<void*>(const_cast< KinematicChainWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::KinematicChainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void moveit_setup_assistant::KinematicChainWidget::doneEditing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void moveit_setup_assistant::KinematicChainWidget::cancelEditing()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void moveit_setup_assistant::KinematicChainWidget::highlightLink(const std::string & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void moveit_setup_assistant::KinematicChainWidget::unhighlightAll()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
