cmake_minimum_required(VERSION 3.5.0)

project(acw)

set(CMAKE_CXX_STANDARD 11)

find_package(gflags REQUIRED)
find_package(glog REQUIRED)
find_package(CURL REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp src/image.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE include)

target_link_libraries(${PROJECT_NAME} gflags glog ${CURL_LIBRARIES})
