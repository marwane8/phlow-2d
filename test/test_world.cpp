
#include "world.h"

#include <iostream>
#include <gtest/gtest.h>

TEST(Word,GetWorldName){
    phlow::World w = phlow::World();
    std::cout << w.name();
    int num = 1;
    ASSERT_EQ(num,1);
}