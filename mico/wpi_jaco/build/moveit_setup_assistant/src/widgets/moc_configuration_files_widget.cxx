/****************************************************************************
** Meta object code from reading C++ file 'configuration_files_widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_setup_assistant/src/widgets/configuration_files_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configuration_files_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_setup_assistant__ConfigurationFilesWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      50,   49,   49,   49, 0x08,
      69,   49,   64,   49, 0x08,
      87,   49,   49,   49, 0x08,
     111,  108,   49,   49, 0x08,
     138,  133,   49,   49, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_moveit_setup_assistant__ConfigurationFilesWidget[] = {
    "moveit_setup_assistant::ConfigurationFilesWidget\0"
    "\0savePackage()\0bool\0generatePackage()\0"
    "exitSetupAssistant()\0id\0changeActionDesc(int)\0"
    "item\0changeCheckedState(QListWidgetItem*)\0"
};

void moveit_setup_assistant::ConfigurationFilesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConfigurationFilesWidget *_t = static_cast<ConfigurationFilesWidget *>(_o);
        switch (_id) {
        case 0: _t->savePackage(); break;
        case 1: { bool _r = _t->generatePackage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->exitSetupAssistant(); break;
        case 3: _t->changeActionDesc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->changeCheckedState((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData moveit_setup_assistant::ConfigurationFilesWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_setup_assistant::ConfigurationFilesWidget::staticMetaObject = {
    { &SetupScreenWidget::staticMetaObject, qt_meta_stringdata_moveit_setup_assistant__ConfigurationFilesWidget,
      qt_meta_data_moveit_setup_assistant__ConfigurationFilesWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_setup_assistant::ConfigurationFilesWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_setup_assistant::ConfigurationFilesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_setup_assistant::ConfigurationFilesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__ConfigurationFilesWidget))
        return static_cast<void*>(const_cast< ConfigurationFilesWidget*>(this));
    return SetupScreenWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::ConfigurationFilesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SetupScreenWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
