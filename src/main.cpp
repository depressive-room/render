#include "modulsystem.h"
#include "tagbody.h"
#include "taghtml.h"
#include "tagbodybcolor.h"
#include "tagimage.h"
#include "tagtable.h"
#include "tagtitle.h"

namespace Render{

int main()
{
    ParserNode parserNode;
    QWidget* parent;
    ModulSystem.generate(parserNode, parent);

    return 0;
}
}
