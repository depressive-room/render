#ifndef MODULSYSTEM_H
#define MODULSYSTEM_H

#include <map>
#include <functional>
#include <memory>
#include <QWidget>

namespace Render

class ModulSystem
{
public:
    std::map <std::string, std::function <Qwidget* (const ParserNode &, QWidget*)>> modulSystem;
    QWidget* generate(ParserNode parserNode, QWidget* parent);
};


#endif // MODULSYSTEM_H
