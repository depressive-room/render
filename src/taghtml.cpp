#include "taghtml.h"
#include <QtWidgets/QWidget>

namespace Render

TagHtml::TagHtml(const ParserNode &parserNode):
    Base(parserNode)
{}

void TagHtml::blabla()
{
    std::cout << "class Test1" << std::endl;
}
