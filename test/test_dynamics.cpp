#include "phlow_util.hpp"
#include "dynamics.hpp"

#include <iostream>
#include <gtest/gtest.h>

TEST(Dynamics,GetDynamics){

    phlow::Dynamics dynamics = phlow::Dynamics();
    phlow::Ball ball = {100,100,10,0,0};

    while (true)
    {
        dynamics.update(ball);
    }
    

}