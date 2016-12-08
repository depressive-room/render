#ifndef MODULSYSTEM_H
#define MODULSYSTEM_H

#include <map>
#include <functional>
#include <memory>
#include <QWidget>
#include <parser.hpp>
#include "parsernode.h"

namespace Render{

class ModulSystem
{
public:
    ModulSystem();
    std::map <std::string, std::function <QWidget* (const ParserNode &, QWidget*)>> modulSystem;
    QWidget* generate(ParserNode parserNode, QWidget* parent);
};
}

#endif // MODULSYSTEM_H
