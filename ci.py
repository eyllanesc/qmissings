import sys

from PyQt5 import QtCore, QtGui

import qmissings

app = QtGui.QGuiApplication(sys.argv)

print(QtCore.QT_VERSION_STR)
print(qmissings.QtQuickControls2.QQuickStyle.availableStyles())
