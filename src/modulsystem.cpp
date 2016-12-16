#include "modulsystem.hpp"
#include "tagbody.hpp"
#include "taghtml.hpp"
#include "tagbodybcolor.hpp"
#include "tagimage.hpp"
#include "tagtable.hpp"
#include "tagtitle.hpp"

namespace Render{

template <class Tag>
QWidget* f(const Parser::Tree::Tag &parsTag, QWidget* parent)
{
    return new Tag(parsTag, parent);
}

ModulSystem::ModulSystem()
{
    modulSystem.emplace("Html", f<TagHtml>);
    modulSystem.emplace("Body", f<TagBody>);
    modulSystem.emplace("Bodybcolor", f<TagBodybColor>);
    modulSystem.emplace("Image", f<TagImage>);
    modulSystem.emplace("Table", f<TagTable>);
    modulSystem.emplace("Title", f<TagTitle>);
}

QWidget* ModulSystem::generate(const Parser::Tree::Tag &parsTag, QWidget* parent)
{
    auto &fn = modulSystem.at(parsTag.name);
    QWidget* generate = fn(parsTag, parent);
    return generate;
}

}
