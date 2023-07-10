
#include "world.h"
namespace phlow {

    World::World() : m_name("phlow"){};

    std::string& World::name() {
        return m_name;
    }
    
    
} // namespace phlow

