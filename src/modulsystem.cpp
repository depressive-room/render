#include "modulsystem.h"

template <class Tag>
std::shared_ptr<Base> f(ParserNode parserNode)
{
    return std::make_shared<Tag>(parserNode);
}

ModulSystem::ModulSystem()
{}

void ModulSystem::generate(std::map <std::string, std::function <std::shared_ptr<Base>(const ParserNode &)>> modulSystem)
{
    std::shared_ptr<Base> generate = modulSystem.at("TagName")();
    generate->blabla();
}
