#include "modulsystem.h"
#include "tagbody.h"
#include "taghtml.h"
#include <QtWidgets/QWidget>

namespace Render

template <class Tag>
QWidget* f(ParserNode parserNode, QWidget* parent)
{
    return new <Tag>(parserNode, parent);
}

ModulSystem::ModulSystem()
{
    modulSystem.emplace("Html", f<TagHtml>);
    modulSystem.emplace("Body", f<TagBody>);
}

QWidget* ModulSystem::generate(parserNode, parent)
{
    Qwidget* generate = modulSystem.at(parserNode)();
    return generate;
}
