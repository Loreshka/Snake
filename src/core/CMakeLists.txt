# libcore - conține Point și Direction
add_library(core
    point.cpp
    direction.cpp
)

target_include_directories(core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
# Optimize flags / warnings optional
# target_compile_options(core PRIVATE -Wall -Wextra -Wpedantic)

# plasam libraria dll in directorul bin
set_target_properties(core PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)