#include "tagbody.h"
#include <QtWidgets/QWidget>

namespace Render
{


}

TagBody::TagBody(const ParserNode &parserNode):
    Base(parserNode)
{}
void TagBody::blabla()
{
    std::cout << "class Test2" << std::endl;
}
