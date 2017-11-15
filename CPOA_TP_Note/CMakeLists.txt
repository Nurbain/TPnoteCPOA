cmake_minimum_required(VERSION 2.8)

project(tp_note LANGUAGES CXX)

file ( GLOB HEADERS *.h)
file ( GLOB SOURCES *.cpp)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})
