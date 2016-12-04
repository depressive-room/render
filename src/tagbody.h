#ifndef TAGBODY_H
#define TAGBODY_H

#include "parser.hpp"
#include <QtWidgets/QWidget>

namespace Render

class TagBody: public QWidget
{
public:
    Q_OBJECT
    TagBody(const ParserNode &parserNode);
    void blabla();
};

#endif // TAGBODY_H
