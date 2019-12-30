cmake_minimum_required(VERSION 3.0.0)

#set the program name and version
project(ll VERSION 0.1.0)

#include(CTest)
#enable_testing()

include_directories(include)
file(GLOB Sources "src/*.c")
add_library(_${PROJECT_NAME}  ${Sources} ${Headers})

add_executable(ll main.c)
target_link_libraries(ll /tmp/liblib.a )



set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
