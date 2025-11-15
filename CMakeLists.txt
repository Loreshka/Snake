cmake_minimum_required(VERSION 3.16)
project(snake_app LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Alege BUILD_SHARED_LIBS=ON ca să construiești biblioteci dinamice
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

# Adaugă subdirectoare
add_subdirectory(src/core)
add_subdirectory(src/model)
add_subdirectory(src/viewer)
add_subdirectory(src/app)
