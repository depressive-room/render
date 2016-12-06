#ifndef TAGTABLE_H
#define TAGTABLE_H

#include <parser.hpp>
#include <QtWidgets/QWidget>

namespace Render
{

}
class TagTable: public QWidget
{
   public:
      Q_OBJECT
      TagTable(const ParserNode &parserNode);
      void blabla();
};

#endif
