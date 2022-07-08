cmake_minimum_required (VERSION 3.5)

project (flower-game-lib)

find_package(PkgConfig REQUIRED)
pkg_search_module(GLFW REQUIRED glfw3)
include_directories(${GLFW_INCLUDE_DIRS})

set (GCC_COVERAGE_LINK_FLAGS "-lglfw3 -lGL -lX11 -lpthread -lXrandr -lXi -ldl")

add_definitions(${GCC_COVERAGE_COMPILE_FLAGS})

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++20")
set (source_dir "${PROJECT_SOURCE_DIR}/src/")

file (GLOB source_files "${source_dir}/*.cpp")

add_executable (flower-game-lib ${source_files})

target_link_libraries(flower-game-lib ${GLFW_LIBRARIES})

