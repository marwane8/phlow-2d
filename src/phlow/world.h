#ifndef  INCLUDE_WORLD
#define  INCLUDE_WORLD

#include <string>

namespace phlow {

class World {
    std::string m_name;
public:
    World();
    std::string& name();
    
};
    
} // namespace phlow

#endif