#ifndef INCLUDE_DYNAMICS
#define INCLUDE_DYNAMICS

#include "phlow_util.hpp"
#include <vector>

namespace phlow {   


constexpr int GRAVITY = 4;
constexpr double X_FRICTION = 0.1;
constexpr double Y_FRICTION = 0.1;

class Dynamics {
public:
    Dynamics();
    void step(std::vector<Ball>& objects);
private:
    void update(Ball &ball);
};

} // namespace phlow
#endif