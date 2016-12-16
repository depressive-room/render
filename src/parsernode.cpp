#include "parsernode.hpp"
#include <stack>
#include <map>
#include "modulsystem.hpp"

void walk(boost::variant<Parser::Tree::Tag, Parser::Tree::Text> root)
{
    Render::ModulSystem modulsystem;
    std::stack<boost::variant<Parser::Tree::Tag, Parser::Tree::Text>> stack;
    stack.push(root);
    while (!stack.empty())
    {
        if (root.which() == 0)
        {
            Parser::Tree::Tag &tag = boost::get<Parser::Tree::Tag> (root);
            try
            {
                modulsystem.generate(tag.name, tag.parent);
            }
            catch (const std:: out_of_range &)
            {
                // tag to text
            }

            for (int j = 0; j < tag.children.size(); ++j)
            {
                boost::variant<Parser::Tree::Tag, Parser::Tree::Text> &next(boost::get<Parser::Tree::Tag>(root).children[j]);
                stack.push(next);
            }
        }

        else
        {
            Parser::Tree::Text &text = boost::get<Parser::Tree::Text> (root);
            modulsystem.generate(text.value, text.parent);
        }

        stack.pop();

    }
}
