#ifndef TAGTITLE
#define TAGTITLE

#include <parser.hpp>
#include <QtWidgets/QWidget>
#include "parsernode.hpp"

namespace Render{

class TagTitle: public QWidget
{
    Q_OBJECT
public:
    TagTitle(const ParserNode &parserNode, QWidget* parent);
};
}

#endif
