#ifndef MODULSYSTEM_H
#define MODULSYSTEM_H

#include <map>
#include <functional>
#include <memory>
#include <QWidget>
#include "parsernode.hpp"


namespace Render{

class ModulSystem
{
public:
    ModulSystem();
    std::map <std::string, std::function <QWidget* (const Parser::Tree::Tag &, QWidget*)>> modulSystem;
    QWidget* generate(const Parser::Tree::Tag &parsTag, QWidget* parent);
};
}

#endif // MODULSYSTEM_H
