add_library( phlow_lib
    world.cpp
    world.hpp
    dynamics.cpp
    dynamics.hpp
    phlow_util.hpp
)

target_link_libraries( phlow_lib PUBLIC
    raylib
    raylib_cpp
)

target_include_directories(phlow_lib INTERFACE 
    "${CMAKE_CURRENT_SOURCE_DIR}"
)