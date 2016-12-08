#ifndef TAGBODY_H
#define TAGBODY_H

#include <parser.hpp>
#include <QWidget>
#include "parsernode.h"

namespace Render{

class TagBody: public QWidget
{
    Q_OBJECT
public:
    TagBody(const ParserNode &parserNode, QWidget* parent);
};
}

#endif // TAGBODY_H
