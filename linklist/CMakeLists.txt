
cmake_minimum_required(VERSION 3.0.0)
project(linklist2 VERSION 0.1.0)

#include(CTest)
#enable_testing()

set(sources 
    Delete.c
    Find.c
    Insert.c
    Print.c
    main.c
)

add_executable(${PROJECT_NAME} ${sources})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
