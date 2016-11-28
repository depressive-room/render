#include <iostream>
#include <map>
#include <functional>
#include <memory>

class ParserNode
{};

class Base
{
public:
    Base(const ParserNode &parserNode)
    {}
    virtual void blabla()
    {
        std::cout << "class Test" << std::endl;
    }
};

class TagHtml: public Base
{
public:
    TagHtml(const ParserNode &parserNode):
        Base(parserNode)
    {}
    void blabla()
    {
        std::cout << "class Test1" << std::endl;
    }
};

class TagBody: public Base
{
public:
    TagBody(const ParserNode &parserNode):
        Base(parserNode)
    {}
    void blabla()
    {
        std::cout << "class Test2" << std::endl;
    }
};

template <class Tag>
std::shared_ptr<Base> f(ParserNode parserNode)
{
    return std::make_shared<Tag>(parserNode);
}

int main()
{
    std::map <std::string, std::function <std::shared_ptr<Base>(const ParserNode &)>> modulSystem;
}

