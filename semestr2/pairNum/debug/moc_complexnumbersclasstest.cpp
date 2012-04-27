/****************************************************************************
** Meta object code from reading C++ file 'complexnumbersclasstest.h'
**
** Created: Fri 27. Apr 11:12:00 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../complexnumbersclasstest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'complexnumbersclasstest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ComplexNumbersClassTest[] = {

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
      25,   24,   24,   24, 0x0a,
      32,   24,   24,   24, 0x0a,
      42,   24,   24,   24, 0x0a,
      71,   24,   24,   24, 0x0a,
      96,   24,   24,   24, 0x0a,
     120,   24,   24,   24, 0x0a,
     148,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ComplexNumbersClassTest[] = {
    "ComplexNumbersClassTest\0\0init()\0"
    "cleanup()\0testMultipleComplexNumbers()\0"
    "testPlusComplexNumbers()\0"
    "testSetComplexNumbers()\0"
    "testMultipleComplexNumber()\0"
    "testAbsComplexNumber()\0"
};

void ComplexNumbersClassTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ComplexNumbersClassTest *_t = static_cast<ComplexNumbersClassTest *>(_o);
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->cleanup(); break;
        case 2: _t->testMultipleComplexNumbers(); break;
        case 3: _t->testPlusComplexNumbers(); break;
        case 4: _t->testSetComplexNumbers(); break;
        case 5: _t->testMultipleComplexNumber(); break;
        case 6: _t->testAbsComplexNumber(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ComplexNumbersClassTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ComplexNumbersClassTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ComplexNumbersClassTest,
      qt_meta_data_ComplexNumbersClassTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ComplexNumbersClassTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ComplexNumbersClassTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ComplexNumbersClassTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ComplexNumbersClassTest))
        return static_cast<void*>(const_cast< ComplexNumbersClassTest*>(this));
    return QObject::qt_metacast(_clname);
}

int ComplexNumbersClassTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
