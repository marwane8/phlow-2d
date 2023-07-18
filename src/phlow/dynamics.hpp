#ifndef INCLUDE_DYNAMICS
#define INCLUDE_DYNAMICS

#include "phlow_util.hpp"

namespace phlow {   


constexpr int GRAVITY = 4;
constexpr double X_FRICTION = 0.1;
constexpr double Y_FRICTION = 0.1;

class Dynamics {
public:
    Dynamics();
    void update(Ball &ball);
};

} // namespace phlow
#endif