#ifndef  INCLUDE_WORLD
#define  INCLUDE_WORLD

#include "phlow_util.hpp"
#include "dynamics.hpp"
#include <vector>

namespace phlow {

class World {
    
    std::vector<Ball> m_objects;
    Dynamics m_dynamics;

public:
    World();
    std::vector<Ball>& objects();
    void step();
    void add_object(Ball ball);
};
    
} // namespace phlow

#endif