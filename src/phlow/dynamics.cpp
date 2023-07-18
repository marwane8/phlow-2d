#include "phlow_util.h"
#include "dynamics.h"

namespace phlow {

    Dynamics::Dynamics() {
    }

    void Dynamics::update(Ball &ball) {

        int leftBound = 0 + ball.radius; 
        int rightBound = SCREEN_WIDTH - ball.radius; 
        int topBound = 0 + ball.radius;
        int bottomBound = SCREEN_HEIGHT - ball.radius;

        // ball.vy += GRAVIT;Y
        ball.xx += ball.vx * 2/FPS;
        ball.xy += ball.vy * 2/FPS; 

        if (ball.xx <= leftBound || ball.xx >= rightBound) {
            ball.vx = -ball.vx * (1 - X_FRICTION); 
            if (ball.xx < leftBound) ball.xx = leftBound;
            if (ball.xx > rightBound) ball.xx = rightBound; 
        }

        if (ball.xy <= topBound || ball.xy >= bottomBound) {
            ball.vy = -ball.vy * (1 - Y_FRICTION); 
            if (ball.xy < topBound) ball.xy = topBound;
            if (ball.xy > bottomBound) ball.xy = bottomBound; 
        }

    }
}
