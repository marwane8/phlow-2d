#ifndef INCLUDE_PHLOW_UTIL
#define INCLUDE_PHLOW_UTIL


namespace phlow {   

const int SCREEN_HEIGHT = 800;
const int SCREEN_WIDTH = 450;
const int FPS = 60;

typedef struct Ball {
    float xx;                // Position x component
    float xy;                // Position y component
    float radius;            // Ball radius
    float vx;                // Velocity x component
    float vy;                // Velocity y component
} Ball;

} // namespace phlow
#endif