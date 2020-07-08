#include "qml_wrapper.h"

#include <QtQml>

long qmlEngine_wrapper(long ptr)
{
    if (QObject *qobject = reinterpret_cast<QObject *>(ptr)) {
        return reinterpret_cast<long>(qmlEngine(qobject));
    }
    return 0;
}
