# libcore - conține Point și Direction
add_library(core
    point.cpp
    direction.cpp
)

target_include_directories(core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
# Optimize flags / warnings optional
target_compile_options(core PRIVATE -Wall -Wextra -Wpedantic)
