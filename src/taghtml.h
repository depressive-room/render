#ifndef TAGHTML_H
#define TAGHTML_H

#include <parser.hpp>
#include <QWidget>
#include "parsernode.h"

namespace Render{

class TagHtml: public QWidget
{
    Q_OBJECT
public:
    TagHtml(const ParserNode &parserNode, QWidget* parent);
};
}

#endif // TAGHTML_H
