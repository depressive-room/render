#include "modulsystem.h"

template <class Tag>
std::shared_ptr<Base> f(ParserNode parserNode)
{
    return std::make_shared<Tag>(parserNode);
}

ModulSystem::ModulSystem()
{}

std::shared_ptr<Base> ModulSystem::generate(ParserNode parserNode)
{
    std::string key = parserNode;
    std::shared_ptr<Base> generate = modulSystem.at(key)();
    return generate;
}
