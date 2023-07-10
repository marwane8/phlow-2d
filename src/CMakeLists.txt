
add_subdirectory(phlow)
add_executable(phlow2d main.cpp)
target_link_libraries( phlow2d PUBLIC
    phlow_lib
)