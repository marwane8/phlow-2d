#ifndef INCLUDE_COLLISONS
#define INCLUDE_COLLISONS

#include "phlow_util.hpp"
#include <vector>

namespace phlow {   


class Collisions {
public:
    Collisions();
    void step(std::vector<Ball>& objects);
private:
    bool detectCollision(const Ball& ball1,const Ball& ball2);
    void applyCollision(Ball& ball1, Ball& ball2);
};

} // namespace phlow
#endif