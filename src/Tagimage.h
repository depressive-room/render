#ifndef TAGIMAGE
#define TAGIMAGE

#include <parser.hpp>
#include <QtWidgets/QWidget>

namespace Render
{

}

class TagImage: public QWidget
{
public:
    Q_OBJECT
    TagImage(const ParserNode &parserNode);
    void blabla();
};

#endif
