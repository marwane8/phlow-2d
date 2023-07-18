#include "collisions.hpp"
#include "phlow_util.hpp"
#include "vector2d.hpp"

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

    //explanation found here https://www.vobarian.com/collisions/2dcollisions2.pdf
    Vector2D x1 = Vector2D(ball1.xx,ball1.xy);
    Vector2D x2 = Vector2D(ball2.xx,ball2.xy);

    //unit normal and tangent vectors
    Vector2D un = x1.nVector(x2);
    Vector2D ut = un.tVector();

    //velocity vectors
    Vector2D v1 = Vector2D(ball1.vx,ball1.vy);
    Vector2D v2 = Vector2D(ball2.vx,ball2.vy);

    //project velocity vectors onto unit
    double v1n = un * v1;
    double v1t = ut * v1;

    double v2n = un * v2;
    double v2t = ut * v2;

    //calulate after collision forces
    int m1 = 10, m2 = 10; //using fake mass for now

    double c1n = (((v1n * (m1-m2)) + (2 * m2 * v2n)) / (m1 + m2));
    double c2n = (((v2n * (m2-m1)) + (2 * m1 * v1n)) / (m1 + m2));

    //get normal and tangent velocity vectors
    Vector2D vc1n = c1n * un;
    Vector2D vc1t = v1t * ut;

    Vector2D vc2n = c2n * un;
    Vector2D vc2t = v2t * ut;

    //get final velocity
    Vector2D vf1 = vc1n + vc1t;
    Vector2D vf2 = vc2n + vc2t;

    //apply to balls
    ball1.vx = vf1.x();
    ball1.vy = vf1.y();

    ball2.vx = vf2.x();
    ball2.vy = vf2.y();






}


}
