# libviewer - interfața/afisarea
add_library(viewer
    viewer.cpp
)

target_include_directories(viewer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
# dacă folosești viewer_console.hpp cu implementare separată:
# target_sources(viewer PRIVATE viewer_console.cpp)

# Dacă folosești o bibliotecă externă grafică (ex: SFML), găsește și leagă:
# find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
# target_link_libraries(viewer PUBLIC sfml-graphics sfml-window sfml-system)

# viewer probabil folosește model:
target_link_libraries(viewer PUBLIC model core)
# target_compile_options(viewer PRIVATE -Wall -Wextra -Wpedantic)

# plasam libraria dll in directorul bin
set_target_properties(viewer PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)