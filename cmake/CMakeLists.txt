cmake_minimum_required(VERSION 3.12)

# - set commands
#set(CMAKE_BUILD_TYPE Debug)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(MyProject VERSION 1.0.1)

#add_subdirectory(say-hello)
add_executable(cmake-good main.cpp)

add_library(
    say-hello 
    hello.hpp
    hello.cpp
)

target_link_libraries(cmake-good PRIVATE say-hello)

# ${PROJECT_NAME}
#install(TARGETS "${PROJECT_NAME" DESTINATION bin)   ${CMAKE_INSTALL_PREFIX}/bin
#install(FILES "main.cpp" DESTINATION src)           ${CMAKE_INSTALL_PREFIX}/src
