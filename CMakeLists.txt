cmake_minimum_required(VERSION 3.10)
project(SnakeGame)

set(CMAKE_CXX_STANDARD 17)

# Include directory
include_directories(src)

# Surse joc
file(GLOB SOURCES src/*.cpp)

# Executabilul principal
add_executable(SnakeGame ${SOURCES})

# ============================
#        TESTE
# ============================
file(GLOB TEST_FILES tests/*.cpp)

add_executable(Tests ${TEST_FILES})

target_include_directories(Tests PRIVATE src)

enable_testing()
add_test(NAME AllTests COMMAND Tests)


# Alege BUILD_SHARED_LIBS=ON ca să construiești biblioteci dinamice
option(BUILD_SHARED_LIBS "Build shared libraries" ON)

# Adaugă subdirectoare
add_subdirectory(src/core)
add_subdirectory(src/model)
add_subdirectory(src/viewer)
add_subdirectory(src/app)


