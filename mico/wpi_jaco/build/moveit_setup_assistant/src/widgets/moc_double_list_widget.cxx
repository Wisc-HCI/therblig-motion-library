/****************************************************************************
** Meta object code from reading C++ file 'double_list_widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_setup_assistant/src/widgets/double_list_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'double_list_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_setup_assistant__DoubleListWidget[] = {

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
      42,   41,   41,   41, 0x05,
      56,   41,   41,   41, 0x05,
      72,   41,   41,   41, 0x05,
     114,   41,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
     133,   41,   41,   41, 0x08,
     159,   41,   41,   41, 0x08,
     207,  187,   41,   41, 0x08,
     258,  187,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_moveit_setup_assistant__DoubleListWidget[] = {
    "moveit_setup_assistant::DoubleListWidget\0"
    "\0doneEditing()\0cancelEditing()\0"
    "previewSelected(std::vector<std::string>)\0"
    "selectionUpdated()\0selectDataButtonClicked()\0"
    "deselectDataButtonClicked()\0"
    "selected,deselected\0"
    "previewSelectedLeft(QItemSelection,QItemSelection)\0"
    "previewSelectedRight(QItemSelection,QItemSelection)\0"
};

void moveit_setup_assistant::DoubleListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DoubleListWidget *_t = static_cast<DoubleListWidget *>(_o);
        switch (_id) {
        case 0: _t->doneEditing(); break;
        case 1: _t->cancelEditing(); break;
        case 2: _t->previewSelected((*reinterpret_cast< std::vector<std::string>(*)>(_a[1]))); break;
        case 3: _t->selectionUpdated(); break;
        case 4: _t->selectDataButtonClicked(); break;
        case 5: _t->deselectDataButtonClicked(); break;
        case 6: _t->previewSelectedLeft((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 7: _t->previewSelectedRight((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData moveit_setup_assistant::DoubleListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_setup_assistant::DoubleListWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_moveit_setup_assistant__DoubleListWidget,
      qt_meta_data_moveit_setup_assistant__DoubleListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_setup_assistant::DoubleListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_setup_assistant::DoubleListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_setup_assistant::DoubleListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__DoubleListWidget))
        return static_cast<void*>(const_cast< DoubleListWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::DoubleListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void moveit_setup_assistant::DoubleListWidget::doneEditing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void moveit_setup_assistant::DoubleListWidget::cancelEditing()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void moveit_setup_assistant::DoubleListWidget::previewSelected(std::vector<std::string> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void moveit_setup_assistant::DoubleListWidget::selectionUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
