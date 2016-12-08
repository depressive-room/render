#ifndef TAGTABLE_H
#define TAGTABLE_H

#include <parser.hpp>
#include <QtWidgets/QWidget>
#include "parsernode.hpp"

namespace Render{

class TagTable: public QWidget
{
    Q_OBJECT
public:
    TagTable(const ParserNode &parserNode, QWidget* parent);
};
}


#endif
