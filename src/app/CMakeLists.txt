add_executable(snake_app main.cpp)

target_include_directories(snake_app PRIVATE ${CMAKE_SOURCE_DIR}/src/core
                                              ${CMAKE_SOURCE_DIR}/src/model
                                              ${CMAKE_SOURCE_DIR}/src/viewer)

# Leagă aplicația cu bibliotecile
target_link_libraries(snake_app PRIVATE viewer model core)

# Dacă ai folosit o librărie externă (SFML), asigură-te că este legată aici
# target_link_libraries(snake_app PRIVATE sfml-graphics sfml-window sfml-system)
