#ifndef TAGIMAGE
#define TAGIMAGE

#include <parser.h>
#include <QWidget>
#include "parsernode.hpp"

namespace Render{

class TagImage: public QWidget
{
    Q_OBJECT
public:
    TagImage(const Parser::Tree::Tag &parsTag, QWidget* parent);
};
}

#endif
