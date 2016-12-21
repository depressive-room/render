#include "parsernode.hpp"
#include <stack>
#include <map>
#include "modulsystem.hpp"

void walk(boost::variant<Parser::Tree::Tag, Parser::Tree::Text> root)
{
    Render::ModulSystem modulsystem;
    std::stack<std::pair<boost::variant<Parser::Tree::Tag, Parser::Tree::Text>, QWidget*>> stack;
    QWidget* parent;

    if (root.which() == 0)
    {
        const Parser::Tree::Tag &firstNode = boost::get<Parser::Tree::Tag>(root);

        if (firstNode.name == "html")
        {
            for (const auto &childs : firstNode.children)
            {
                if (childs.which() == 0)
                {
                    const Parser::Tree::Tag &firstTag = boost::get<Parser::Tree::Tag>(childs);

                    if (firstTag.name == "body")
                    {
                        stack.push(std::make_pair(childs, nullptr));
                        while (!stack.empty())
                        {
                            std::pair<boost::variant<Parser::Tree::Tag, Parser::Tree::Text>, QWidget*> pair = stack.top();
                            stack.pop();

                            if (pair.first.which() == 0)
                            {
                                const Parser::Tree::Tag &tag = boost::get<Parser::Tree::Tag>(pair.first);
                                try
                                {
                                    parent = modulsystem.generateTag(tag, pair.second);
                                }
                                catch (const std::out_of_range &)
                                {
                                    // tag to text
                                }

                                for (const auto &child : tag.children)
                                    stack.push(std::make_pair(child, parent));
                            }
                            else
                            {
                                const Parser::Tree::Text &text = boost::get<Parser::Tree::Text>(pair.first);
                                parent = modulsystem.generateText(text, pair.second);
                            }
                        }
                    }
                }
            }
        }
    }

    else
    {
       // all page to text
    }
}
