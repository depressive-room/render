#ifndef PARSERNODE_H
#define PARSERNODE_H
#include <iostream>
#include <tree_stuct.h>
#include <parser.h>
#include "boost/variant.hpp"

void walk (boost::variant<Parser::Tree::Tag, Parser::Tree::Text> root);

#endif // PARSERNODE_H
