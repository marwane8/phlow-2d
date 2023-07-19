
#include "world.hpp"
#include "raylib-cpp.hpp"

int main(int argc, char* argv[]){

    raylib::Window window(phlow::SCREEN_WIDTH, phlow::SCREEN_HEIGHT, "Phlow 2D");

    raylib::Color foreground = RED;
    raylib::Color background = RAYWHITE;

    SetTargetFPS(phlow::FPS);

    phlow::Ball ball1 = {100,100,10,20,10};
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
            window.DrawFPS(10,10);
            DrawText("Ball Counter", phlow::SCREEN_WIDTH-125,10,18,raylib::RED);
            std::string counter = std::to_string(world.ball_count());
            DrawText(counter, phlow::SCREEN_WIDTH-90,30,24,raylib::RED);
            if(IsKeyDown(KEY_SPACE)){
                phlow::Ball new_ball = {100,80,10,10,0};
                world.add_object(new_ball);
            }

            for(auto &ball : world.objects()){
                DrawCircleV({ball.xx,ball.xy}, ball.radius, raylib::BLACK);
            }
        }
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    return 0;
}