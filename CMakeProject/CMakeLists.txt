cmake_minimum_required(VERSION 3.28)

# Set project name
SET(PROJECT_NAME "CmakeDemo")
SET(PROJECT_NAME_UPPER "")
project(${PROJECT_NAME})
message(STATUS "Start generation of project with name: ${PROJECT_NAME}")

add_executable(${PROJECT_NAME}_app)
target_sources(${PROJECT_NAME}_app PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/main.cpp)