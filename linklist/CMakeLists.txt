cmake_minimum_required(VERSION 3.0.0)

#set the program name and version
project(ll VERSION 0.1.0)

#include(CTest)
#enable_testing()

include_directories(include)
file(GLOB Sources "src/*.c")
add_library(_${PROJECT_NAME}  ${Sources} ${Headers})

add_executable(ll main.c)
target_link_libraries(ll _${PROJECT_NAME})

install(TARGETS ll DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/bin )    
install(TARGETS _${PROJECT_NAME} DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/lib )    

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
