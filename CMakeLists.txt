cmake_minimum_required(VERSION 3.0.0)
project(learning VERSION 0.1.0)

#include(CTest)
#enable_testing()

add_executable(learning main.cpp)
#add_executable(linklist linkList.c)
#add_executable(lenOfStr lenOfStr.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(linklist)