add_executable(snake_app main.cpp)

target_include_directories(snake_app PRIVATE ${CMAKE_SOURCE_DIR}/src/core
                                              ${CMAKE_SOURCE_DIR}/src/model
                                              ${CMAKE_SOURCE_DIR}/src/viewer)

# Leagă aplicația cu bibliotecile
target_link_libraries(snake_app PRIVATE viewer model core)

# plasam executabilul în directorul bin
set_target_properties(snake_app PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)