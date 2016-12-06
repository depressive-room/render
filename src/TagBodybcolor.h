#ifndef TAGBODYBCOLOR
#define TAGBODYBCOLOR

#include <parser.hpp>
#include <QtWidgets/QWidget>

namespace Render
{

}

class TagBodybcolor: public QWidget
{
public:
    Q_OBJECT
    TagBodybcolor(const ParserNode &parserNode);
    void blabla();

};

#endif
