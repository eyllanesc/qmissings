#ifndef QUICKCONTROLS2_WRAPPER_H
#define QUICKCONTROLS2_WRAPPER_H

#include <string>
#include <vector>

class QQuickStyle_Wrapper
{
public:
    static void addStylePath(const std::string &path);
    static std::vector<std::string> availableStyles();
    static std::string name();
    static std::string path();
    static void setFallbackStyle(const std::string &style);
    static void setStyle(const std::string &style);
    static std::vector<std::string> stylePathList();
};

#endif // QUICKCONTROLS2_WRAPPER_H
