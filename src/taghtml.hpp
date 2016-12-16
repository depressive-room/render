#ifndef TAGHTML_H
#define TAGHTML_H

#include <parser.h>
#include <QWidget>
#include "parsernode.hpp"

namespace Render{

class TagHtml: public QWidget
{
    Q_OBJECT
public:
    TagHtml(const Parser::Tree::Tag &parsTag, QWidget* parent);
};
}

#endif // TAGHTML_H
