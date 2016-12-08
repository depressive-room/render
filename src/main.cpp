#include "modulsystem.hpp"
#include "tagbody.hpp"
#include "taghtml.hpp"
#include "tagbodybcolor.hpp"
#include "tagimage.hpp"
#include "tagtable.hpp"
#include "tagtitle.hpp"

namespace Render{

int main()
{
    ParserNode parserNode;
    QWidget* parent;
    ModulSystem.generate(parserNode, parent);

    return 0;
}
}
