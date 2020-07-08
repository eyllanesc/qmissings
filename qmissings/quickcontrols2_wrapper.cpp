#include "quickcontrols2_wrapper.h"

#include <QQuickStyle>

void QQuickStyle_Wrapper::addStylePath(const std::string &path)
{
    return QQuickStyle::addStylePath(QString::fromStdString(path));
}

std::vector<std::string> QQuickStyle_Wrapper::availableStyles()
{
    std::vector<std::string> styles;
    for (const QString &style : QQuickStyle::availableStyles()) {
        styles.push_back(style.toStdString());
    }
    return styles;
}

std::string QQuickStyle_Wrapper::name()
{
    return QQuickStyle::name().toStdString();
}

std::string QQuickStyle_Wrapper::path()
{
    return QQuickStyle::path().toStdString();
}

void QQuickStyle_Wrapper::setFallbackStyle(const std::string &style)
{
    QQuickStyle::setFallbackStyle(QString::fromStdString(style));
}

void QQuickStyle_Wrapper::setStyle(const std::string &style)
{
    QQuickStyle::setStyle(QString::fromStdString(style));
}

std::vector<std::string> QQuickStyle_Wrapper::stylePathList()
{
    std::vector<std::string> paths;
    for (const QString &path : QQuickStyle::stylePathList()) {
        paths.push_back(path.toStdString());
    }
    return paths;
}