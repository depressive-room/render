#ifndef TAGTABLE_H
#define TAGTABLE_H

#include <parser.h>
#include <QWidget>
#include "parsernode.hpp"

namespace Render{

class TagTable: public QWidget
{
    Q_OBJECT
public:
    TagTable(const Parser::Tree::Tag &parsTag, QWidget* parent);
};
}


#endif
