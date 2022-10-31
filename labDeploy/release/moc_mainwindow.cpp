/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "timerSlot"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 27), // "on_checkGraph1_stateChanged"
QT_MOC_LITERAL(4, 50, 4), // "arg1"
QT_MOC_LITERAL(5, 55, 27), // "on_checkGraph2_stateChanged"
QT_MOC_LITERAL(6, 83, 27), // "on_checkGraph3_stateChanged"
QT_MOC_LITERAL(7, 111, 27), // "on_checkGraph4_stateChanged"
QT_MOC_LITERAL(8, 139, 24), // "on_newFileButton_clicked"
QT_MOC_LITERAL(9, 164, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(10, 187, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(11, 209, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 231, 21), // "on_refreshCom_clicked"
QT_MOC_LITERAL(13, 253, 13), // "getFromSerial"
QT_MOC_LITERAL(14, 267, 24) // "on_addNoteButton_clicked"

    },
    "MainWindow\0timerSlot\0\0on_checkGraph1_stateChanged\0"
    "arg1\0on_checkGraph2_stateChanged\0"
    "on_checkGraph3_stateChanged\0"
    "on_checkGraph4_stateChanged\0"
    "on_newFileButton_clicked\0"
    "on_startButton_clicked\0on_stopButton_clicked\0"
    "on_pushButton_clicked\0on_refreshCom_clicked\0"
    "getFromSerial\0on_addNoteButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    1,   75,    2, 0x08 /* Private */,
       5,    1,   78,    2, 0x08 /* Private */,
       6,    1,   81,    2, 0x08 /* Private */,
       7,    1,   84,    2, 0x08 /* Private */,
       8,    0,   87,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timerSlot(); break;
        case 1: _t->on_checkGraph1_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_checkGraph2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_checkGraph3_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_checkGraph4_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_newFileButton_clicked(); break;
        case 6: _t->on_startButton_clicked(); break;
        case 7: _t->on_stopButton_clicked(); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_refreshCom_clicked(); break;
        case 10: _t->getFromSerial(); break;
        case 11: _t->on_addNoteButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
