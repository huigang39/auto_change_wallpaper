cmake_minimum_required(VERSION 3.5.0)

project(auto_change_wallpaper)

set(CMAKE_CXX_STANDARD 11)

find_package(gflags REQUIRED)
find_package(CURL REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp src/getImage.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE include)

target_link_libraries(${PROJECT_NAME} gflags ${CURL_LIBRARIES})
