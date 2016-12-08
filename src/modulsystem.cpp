#include "modulsystem.h"
#include "tagbody.h"
#include "taghtml.h"

namespace Render{

template <class Tag>
QWidget* f(ParserNode parserNode, QWidget* parent)
{
    return new Tag(parserNode, parent);
}

ModulSystem::ModulSystem()
{
    modulSystem.emplace("Html", f<TagHtml>);
    modulSystem.emplace("Body", f<TagBody>);
}

QWidget* ModulSystem::generate(ParserNode parserNode, QWidget* parent)
{
    auto &fn = modulSystem.at(parserNode.parserNode);
    QWidget* generate = fn(parserNode, parent);
    return generate;
}

}
