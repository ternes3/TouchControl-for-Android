/****************************************************************************
** Meta object code from reading C++ file 'specialcharacter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "specialcharacter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'specialcharacter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpecialCharacter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      35,   17,   17,   17, 0x08,
      45,   17,   17,   17, 0x08,
      54,   17,   17,   17, 0x08,
      68,   17,   17,   17, 0x08,
      80,   17,   17,   17, 0x08,
      95,   17,   17,   17, 0x08,
     107,   17,   17,   17, 0x08,
     121,   17,   17,   17, 0x08,
     134,   17,   17,   17, 0x08,
     147,   17,   17,   17, 0x08,
     156,   17,   17,   17, 0x08,
     165,   17,   17,   17, 0x08,
     174,   17,   17,   17, 0x08,
     183,   17,   17,   17, 0x08,
     197,   17,   17,   17, 0x08,
     206,   17,   17,   17, 0x08,
     215,   17,   17,   17, 0x08,
     224,   17,   17,   17, 0x08,
     234,   17,   17,   17, 0x08,
     244,   17,   17,   17, 0x08,
     254,   17,   17,   17, 0x08,
     264,   17,   17,   17, 0x08,
     274,   17,   17,   17, 0x08,
     284,   17,   17,   17, 0x08,
     294,   17,   17,   17, 0x08,
     306,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SpecialCharacter[] = {
    "SpecialCharacter\0\0push_button_ok()\0"
    "push_at()\0push_1()\0push_dollar()\0"
    "push_euro()\0push_procnet()\0push_star()\0"
    "push_bslash()\0push_minus()\0push_equal()\0"
    "push_2()\0push_3()\0push_4()\0push_5()\0"
    "push_dpoint()\0push_6()\0push_7()\0"
    "push_8()\0push_ue()\0push_ae()\0push_UE()\0"
    "push_AE()\0push_OE()\0push_oe()\0push_10()\0"
    "push_plus()\0push_9()\0"
};

void SpecialCharacter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpecialCharacter *_t = static_cast<SpecialCharacter *>(_o);
        switch (_id) {
        case 0: _t->push_button_ok(); break;
        case 1: _t->push_at(); break;
        case 2: _t->push_1(); break;
        case 3: _t->push_dollar(); break;
        case 4: _t->push_euro(); break;
        case 5: _t->push_procnet(); break;
        case 6: _t->push_star(); break;
        case 7: _t->push_bslash(); break;
        case 8: _t->push_minus(); break;
        case 9: _t->push_equal(); break;
        case 10: _t->push_2(); break;
        case 11: _t->push_3(); break;
        case 12: _t->push_4(); break;
        case 13: _t->push_5(); break;
        case 14: _t->push_dpoint(); break;
        case 15: _t->push_6(); break;
        case 16: _t->push_7(); break;
        case 17: _t->push_8(); break;
        case 18: _t->push_ue(); break;
        case 19: _t->push_ae(); break;
        case 20: _t->push_UE(); break;
        case 21: _t->push_AE(); break;
        case 22: _t->push_OE(); break;
        case 23: _t->push_oe(); break;
        case 24: _t->push_10(); break;
        case 25: _t->push_plus(); break;
        case 26: _t->push_9(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SpecialCharacter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpecialCharacter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SpecialCharacter,
      qt_meta_data_SpecialCharacter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpecialCharacter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpecialCharacter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpecialCharacter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpecialCharacter))
        return static_cast<void*>(const_cast< SpecialCharacter*>(this));
    return QWidget::qt_metacast(_clname);
}

int SpecialCharacter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
