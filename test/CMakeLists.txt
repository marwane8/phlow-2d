add_executable( phlow_tests
    test_world.cpp
)

target_link_libraries( phlow_tests
    phlow_lib
    GTest::gtest_main
)

include(CTest)
include(GoogleTest)
gtest_add_tests(
    TARGET phlow_tests
)