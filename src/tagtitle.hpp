#ifndef TAGTITLE
#define TAGTITLE

#include <parser.h>
#include <QWidget>
#include "parsernode.hpp"

namespace Render{

class TagTitle: public QWidget
{
    Q_OBJECT
public:
    TagTitle(const Parser::Tree::Tag &parsTag, QWidget* parent);
};
}

#endif
