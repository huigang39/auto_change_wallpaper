cmake_minimum_required(VERSION 3.5.0)

project(acw)

set(CMAKE_CXX_STANDARD 11)

find_package(gflags REQUIRED)
find_package(CURL REQUIRED)

file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_include_directories(${PROJECT_NAME} PRIVATE include)

target_link_libraries(${PROJECT_NAME} gflags ${CURL_LIBRARIES})
