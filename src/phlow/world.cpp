
#include "world.hpp"
namespace phlow {

    World::World() : m_dynamics() 
    {}

    void World::add_object(Ball ball) {
        m_objects.push_back(ball);
    }

    std::vector<Ball>& World::objects() {
        return m_objects;
    }

    void World::step() {
        for (auto &ball : m_objects) {
            m_dynamics.update(ball);
        }
    }
    
} // namespace phlow

