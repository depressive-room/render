#include "modulsystem.hpp"
#include "tagbody.hpp"
#include "taghtml.hpp"
#include "tagbodybcolor.hpp"
#include "tagimage.hpp"
#include "tagtable.hpp"
#include "tagtitle.hpp"
#include "parsernode.hpp"

int main()
{
    const Parser::Tree::Tag &parsTag;
    QWidget* parent;
    Render::ModulSystem modulSystem;
    modulSystem.generate(parsTag, parent);

    return 0;
}

