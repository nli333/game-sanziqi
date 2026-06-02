cmake_minimum_required(VERSION 3.14)
project(MyFTXUIGame)

# 设定C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#引入外部FTXUI库 文件夹放在项目外侧同级
add_subdirectory("${CMAKE_SOURCE_DIR}/../FTXUI" build-ftxui)

#编译所有源文件
add_executable(MyFTXUIGame 
main.cpp
game.cpp
)

#链接ui库
target_link_libraries(MyFTXUIGame
    PRIVATE
    ftxui::dom
    ftxui::screen
    ftxui::component
)