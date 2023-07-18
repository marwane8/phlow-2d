
#include "world.hpp"
#include "raylib-cpp.hpp"

int main(int argc, char* argv[]){

    raylib::Window window(phlow::SCREEN_WIDTH, phlow::SCREEN_HEIGHT, "Phlow 2D");

    raylib::Color foreground = RED;
    raylib::Color background = RAYWHITE;

    SetTargetFPS(phlow::FPS);

    phlow::Ball ball1 = {100,100,10,10,0};
    phlow::Ball ball2 = {300,100,10,-10,0};

    //initalize world
    phlow::World world = phlow::World();
    world.add_object(ball1);
    world.add_object(ball2);
        
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
    }

    return 0;
}