/****************************************************************************
** Meta object code from reading C++ file 'setup_assistant_widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_setup_assistant/src/widgets/setup_assistant_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setup_assistant_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_setup_assistant__SetupAssistantWidget[] = {

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
      52,   46,   45,   45, 0x08,
      83,   45,   45,   45, 0x08,
      97,   45,   45,   45, 0x08,
     123,   45,   45,   45, 0x08,
     142,  134,   45,   45, 0x08,
     171,  161,   45,   45, 0x08,
     209,  198,   45,   45, 0x08,
     237,   45,   45,   45, 0x08,
     254,   45,   45,   45, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_moveit_setup_assistant__SetupAssistantWidget[] = {
    "moveit_setup_assistant::SetupAssistantWidget\0"
    "\0index\0navigationClicked(QModelIndex)\0"
    "updateTimer()\0progressPastStartScreen()\0"
    "loadRviz()\0isModal\0setModalMode(bool)\0"
    "link_name\0highlightLink(std::string)\0"
    "group_name\0highlightGroup(std::string)\0"
    "unhighlightAll()\0virtualJointReferenceFrameChanged()\0"
};

void moveit_setup_assistant::SetupAssistantWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SetupAssistantWidget *_t = static_cast<SetupAssistantWidget *>(_o);
        switch (_id) {
        case 0: _t->navigationClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->updateTimer(); break;
        case 2: _t->progressPastStartScreen(); break;
        case 3: _t->loadRviz(); break;
        case 4: _t->setModalMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->highlightLink((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 6: _t->highlightGroup((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 7: _t->unhighlightAll(); break;
        case 8: _t->virtualJointReferenceFrameChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData moveit_setup_assistant::SetupAssistantWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_setup_assistant::SetupAssistantWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_moveit_setup_assistant__SetupAssistantWidget,
      qt_meta_data_moveit_setup_assistant__SetupAssistantWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_setup_assistant::SetupAssistantWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_setup_assistant::SetupAssistantWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_setup_assistant::SetupAssistantWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__SetupAssistantWidget))
        return static_cast<void*>(const_cast< SetupAssistantWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::SetupAssistantWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
