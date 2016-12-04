#ifndef TAGHTML_H
#define TAGHTML_H

#include "parser.hpp"
#include <QtWidgets/QWidget>

namespace Render

class TagHtml: public QWidget
{
public:
    Q_OBJECT
    TagHtml(const ParserNode &parserNode);
    void blabla();
};

#endif // TAGHTML_H
