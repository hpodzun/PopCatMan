cmake_minimum_required(VERSION 3.17)
project(PopCatMan)

set(CMAKE_CXX_STANDARD 14)

set(SDL2_INCLUDE_DIR C:/dev_lib/SDL2/include)
set(SDL2_LIB_DIR C:/dev_lib/SDL2/lib/x64)
set(SDL2_IMG_INCLUDE_DIR C:/dev_lib/SDL2_image/include)
set(SDL2_IMG_LIB_DIR C:/dev_lib/SDL2_image/lib/x64)

include_directories(${SDL2_INCLUDE_DIR} ${SDL2_IMG_INCLUDE_DIR})
link_directories(${SDL2_LIB_DIR} ${SDL2_IMG_LIB_DIR})

add_executable(PopCatMan main.cpp)

target_link_libraries(${PROJECT_NAME} SDL2main SDL2 SDL2_image)