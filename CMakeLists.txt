cmake_minimum_required(VERSION 3.16)
project(phlow2d VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG 4.2.0
)
FetchContent_MakeAvailable(raylib)

FetchContent_Declare(
    raylib_cpp
    GIT_REPOSITORY https://github.com/RobLoach/raylib-cpp.git
    GIT_TAG v4.2.6
)
FetchContent_MakeAvailable(raylib_cpp)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG 4a1a299b206ba250a4318f74938ea67c75c3c0c9
)
FetchContent_MakeAvailable(googletest)

add_subdirectory(src)
add_subdirectory(test)

enable_testing()