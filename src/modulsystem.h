#ifndef MODULSYSTEM_H
#define MODULSYSTEM_H

#include <map>
#include <functional>
#include <memory>

namespace Render

class ModulSystem
{
public:
    std::map <std::string, std::function <std::shared_ptr<Base>(const ParserNode &)>> modulSystem;
    void generate(std::map <std::string, std::function <std::shared_ptr<Base>(const ParserNode &)>> modulSystem);
};


#endif // MODULSYSTEM_H
