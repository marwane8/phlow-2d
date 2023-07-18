
#include "phlow_util.h"
#include "world.h"
#include "raylib-cpp.hpp"

int main(int argc, char* argv[]){

    raylib::Window window(phlow::SCREEN_WIDTH, phlow::SCREEN_HEIGHT, "Phlow 2D");

    raylib::Color foreground = RED;
    raylib::Color background = RAYWHITE;

    SetTargetFPS(60);

    phlow::Ball ball1 = {100,100,10,10,};

    //initalize world
    phlow::World world = phlow::World();
    world.add_object(ball1);
    int frameCounter = 0;
        
    // Main game loop
    while (!window.ShouldClose()) {    // Detect window close button or ESC key
        // Update
        world.step();

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
        {
            window.ClearBackground(background);

            for(auto &ball : world.objects()){
                DrawCircleV({ball.xx,ball.xy}, ball.radius, raylib::BLACK);
            }
        }
        EndDrawing();
        //----------------------------------------------------------------------------------
        frameCounter++;
    }

    return 0;
}