cmake_minimum_required(VERSION 3.1)

project(shape_printer VERSION 0.0.1)

include_directories(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/../lib)
link_directories(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/../lib)

add_executable(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR} main.cpp)

target_link_libraries(${PROJECT_NAME} -lsfml-graphics -lsfml-window -lsfml-system -lGLU -lGL -lglut -lpthread Shape)


