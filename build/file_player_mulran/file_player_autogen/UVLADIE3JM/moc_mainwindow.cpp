/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/file_player_mulran/src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "setThreadFinished"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "TryClose"
QT_MOC_LITERAL(4, 39, 11), // "FilePathSet"
QT_MOC_LITERAL(5, 51, 4), // "Play"
QT_MOC_LITERAL(6, 56, 5), // "Pause"
QT_MOC_LITERAL(7, 62, 15), // "PlaySpeedChange"
QT_MOC_LITERAL(8, 78, 5), // "value"
QT_MOC_LITERAL(9, 84, 14), // "LoopFlagChange"
QT_MOC_LITERAL(10, 99, 18), // "StopSkipFlagChange"
QT_MOC_LITERAL(11, 118, 19), // "AutoStartFlagChange"
QT_MOC_LITERAL(12, 138, 8), // "SetStamp"
QT_MOC_LITERAL(13, 147, 5), // "stamp"
QT_MOC_LITERAL(14, 153, 17), // "SliderValueChange"
QT_MOC_LITERAL(15, 171, 13), // "SliderPressed"
QT_MOC_LITERAL(16, 185, 16) // "SliderValueApply"

    },
    "MainWindow\0setThreadFinished\0\0TryClose\0"
    "FilePathSet\0Play\0Pause\0PlaySpeedChange\0"
    "value\0LoopFlagChange\0StopSkipFlagChange\0"
    "AutoStartFlagChange\0SetStamp\0stamp\0"
    "SliderValueChange\0SliderPressed\0"
    "SliderValueApply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   82,    2, 0x08 /* Private */,
       4,    0,   83,    2, 0x08 /* Private */,
       5,    0,   84,    2, 0x08 /* Private */,
       6,    0,   85,    2, 0x08 /* Private */,
       7,    1,   86,    2, 0x08 /* Private */,
       9,    1,   89,    2, 0x08 /* Private */,
      10,    1,   92,    2, 0x08 /* Private */,
      11,    1,   95,    2, 0x08 /* Private */,
      12,    1,   98,    2, 0x08 /* Private */,
      14,    1,  101,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::ULongLong,   13,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setThreadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->TryClose(); break;
        case 2: _t->FilePathSet(); break;
        case 3: _t->Play(); break;
        case 4: _t->Pause(); break;
        case 5: _t->PlaySpeedChange((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->LoopFlagChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->StopSkipFlagChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->AutoStartFlagChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->SetStamp((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 10: _t->SliderValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->SliderPressed(); break;
        case 12: _t->SliderValueApply(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setThreadFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::setThreadFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
