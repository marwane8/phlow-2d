
#include "world.hpp"
namespace phlow {

    World::World()
        : m_dynamics(),m_collisons()
    {}

    void World::add_object(Ball ball) {
        m_objects.push_back(ball);
    }

    std::vector<Ball>& World::objects() {
        return m_objects;
    }

    void World::step() {
        m_dynamics.step(m_objects);
        m_collisons.step(m_objects);
    }
    
} // namespace phlow

