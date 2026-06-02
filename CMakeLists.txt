cmake_minimum_required(VERSION 3.20)
project(MyFTXUIGame LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 自动在线拉取FTXUI，无需本地放库
include(FetchContent)
FetchContent_Declare(
  ftxui
  GIT_REPOSITORY https://gitee.com/mirrors/FTXUI.git
  GIT_TAG v6.1.9
)
FetchContent_MakeAvailable(ftxui)

add_executable(MyFTXUIGame
    main.cpp
    game.cpp
)

target_link_libraries(MyFTXUIGame PRIVATE
    ftxui::dom
    ftxui::screen
    ftxui::component
)
