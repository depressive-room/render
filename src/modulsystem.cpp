#include "modulsystem.h"
#include "base.h"
#include "tagbody.h"
#include "taghtml.h"

namespace Render

template <class Tag>
std::shared_ptr<Base> f(ParserNode parserNode)
{
    return std::make_shared<Tag>(parserNode);
}

ModulSystem::ModulSystem()
{
    modulSystem.emplace("Html", f<TagHtml>);
    modulSystem.emplace("Body", f<TagBody>);
}

std::shared_ptr<Base> ModulSystem::generate(ParserNode parserNode)
{
    std::string key = parserNode;
    std::shared_ptr<Base> generate = modulSystem.at(key)();
    return generate;
}
