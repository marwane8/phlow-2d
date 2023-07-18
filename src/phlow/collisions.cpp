#include "phlow_util.hpp"
#include "collisions.hpp"

namespace phlow {

float distance(const Ball& b1, const Ball& b2) {
    return sqrt(pow(b2.xx - b1.xx, 2) + pow(b2.xy - b1.xy, 2));
};

Collisions::Collisions() {}


void Collisions::step(std::vector<Ball>& objects) {

    for(auto i = 0; i<objects.size(); i++){
        Ball& ball1 = objects[i];
        for(auto j = i+1; j<objects.size(); j++) {

            Ball& ball2 = objects[j];
            if (detectCollision(ball1,ball2)){
                applyCollision(ball1,ball2);
            }

        }

    }
}


bool Collisions::detectCollision(const Ball& ball1,const Ball& ball2) {

    float dist = distance(ball1,ball2);
    return dist <= (ball1.radius + ball2.radius);
}

void Collisions::applyCollision(Ball& ball1,Ball& ball2) {

            ball1.vx = -ball1.vx;
            ball2.vx = -ball2.vx;

            ball1.vy = -ball1.vy;
            ball2.vy = -ball2.vy;



}


}
