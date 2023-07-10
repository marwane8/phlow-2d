
#include "world.h"
#include "raylib-cpp.hpp"

int main(int argc, char* argv[]){
        //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    raylib::Window window(screenWidth, screenHeight, "Sort C++");

    raylib::Color foreground = RED;
    raylib::Color secondary(0,68,130);
    raylib::Color background = RAYWHITE;

    SetTargetFPS(60);

    // Main game loop
    while (!window.ShouldClose()) {    // Detect window close button or ESC key
        // Update
        raylib::Rectangle rectangle(0,0,256,125);

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
        {
            window.ClearBackground(background);

            foreground.DrawRectangle(0, 0, 256, 256);
            secondary.DrawRectangle(rectangle);
        }
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    return 0;
}