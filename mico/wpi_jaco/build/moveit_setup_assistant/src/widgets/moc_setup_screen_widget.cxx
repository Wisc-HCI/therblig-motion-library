/****************************************************************************
** Meta object code from reading C++ file 'setup_screen_widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_setup_assistant/src/widgets/setup_screen_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setup_screen_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SetupScreenWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   19,   18,   18, 0x05,
      46,   41,   18,   18, 0x05,
      73,   41,   18,   18, 0x05,
     101,   18,   18,   18, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_SetupScreenWidget[] = {
    "SetupScreenWidget\0\0isModal\0isModal(bool)\0"
    "name\0highlightLink(std::string)\0"
    "highlightGroup(std::string)\0"
    "unhighlightAll()\0"
};

void SetupScreenWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SetupScreenWidget *_t = static_cast<SetupScreenWidget *>(_o);
        switch (_id) {
        case 0: _t->isModal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->highlightLink((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->highlightGroup((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 3: _t->unhighlightAll(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SetupScreenWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SetupScreenWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SetupScreenWidget,
      qt_meta_data_SetupScreenWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SetupScreenWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SetupScreenWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SetupScreenWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SetupScreenWidget))
        return static_cast<void*>(const_cast< SetupScreenWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SetupScreenWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SetupScreenWidget::isModal(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SetupScreenWidget::highlightLink(const std::string & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SetupScreenWidget::highlightGroup(const std::string & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SetupScreenWidget::unhighlightAll()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
