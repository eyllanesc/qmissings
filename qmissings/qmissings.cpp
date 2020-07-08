#include "qml_wrapper.h"
#include "quickcontrols2_wrapper.h"

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

PYBIND11_MODULE(qmissings, m) {

    py::module qml_module = m.def_submodule("QtQml", "QtQml submodule");

    qml_module.def("qmlEngine", &qmlEngine_wrapper,  R"pbdoc(
        wrapper of qmlEngine_

        .. _qmlEngine: https://doc.qt.io/qt-5/qqmlengine.html#qmlEngine
    )pbdoc");

    py::module quickcontrols2_module = m.def_submodule("QtQuickControls2", "QtQuickControls2 submodule");

    py::class_<QQuickStyle_Wrapper>(quickcontrols2_module, "QQuickStyle", R"pbdoc(
        Class that exposes QQuickStyle_

        .. _QQuickStyle: https://doc.qt.io/qt-5/qquickstyle.html
    
    )pbdoc")
        .def_static("addStylePath", &QQuickStyle_Wrapper::addStylePath, R"pbdoc(
            See https://doc.qt.io/qt-5/qquickstyle.html#addStylePath
        )pbdoc")
        .def_static("availableStyles", &QQuickStyle_Wrapper::availableStyles)
        .def_static("name", &QQuickStyle_Wrapper::name)
        .def_static("path", &QQuickStyle_Wrapper::path)
        .def_static("setFallbackStyle", &QQuickStyle_Wrapper::setFallbackStyle)
        .def_static("setStyle", &QQuickStyle_Wrapper::setStyle)
        .def_static("stylePathList", &QQuickStyle_Wrapper::stylePathList);

#ifdef VERSION_INFO
    m.attr("__version__") = VERSION_INFO;
#else
    m.attr("__version__") = "dev";
#endif
}