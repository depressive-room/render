#ifndef TAGBODYBCOLOR
#define TAGBODYBCOLOR

#include <parser.hpp>
#include <QWidget>
#include "parsernode.h"

namespace Render{

class TagBodybColor: public QWidget
{
    Q_OBJECT
public:
    TagBodybColor(const ParserNode &parserNode, QWidget* parent);
};
}


#endif
