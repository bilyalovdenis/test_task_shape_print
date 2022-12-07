cmake_minimum_required(VERSION 3.1)

project (Shape VERSION 0.0.1)

file(
    GLOB SHAPESOURCES *.cpp
         SPACESOURCES "Space/*.cpp"
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Space)

add_library(${PROJECT_NAME} SHARED ${SHAPESOURCES}${SPACESOURCES})