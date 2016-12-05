#ifndef TAGTITLE
#define TAGTITLE

#include <parser.hpp>
#include <QtWidgets/QWidget>

namespace Render
{

}

class TagTitle: public QWidget
{
public:
    Q_OBJECT
    TagTitle(const ParserNode &parserNode);
    void blabla();
};

#endif
