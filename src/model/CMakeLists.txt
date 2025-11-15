# libmodel - folosește core
add_library(model
    apple.cpp
    snake.cpp
    engine.cpp
)

target_include_directories(model PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
# model depinde de core
target_link_libraries(model PUBLIC core)
target_compile_options(model PRIVATE -Wall -Wextra -Wpedantic)
