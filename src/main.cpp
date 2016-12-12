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
    ParserNode parserNode;
    QWidget* parent;
    Render::ModulSystem modulSystem;
    modulSystem.generate(parserNode, parent);

    return 0;
}

