# game-sanziqi
# MyFTXUIGame 终端井字棋
C++17+FTXUI双人井字棋，CMake自动拉取依赖，Win/Linux均可编译运行

## 项目介绍
经典3*3井字棋，X先手O后手；上层空白按钮落子，下方文本显示棋盘，支持重新开局、胜负/平局自动判定。
### 目录
MyFTXUIGame/
├── CMakeLists.txt
├── main.cpp
├── game.hpp
└── game.cpp

## 使用方法
```bash
#克隆项目
git clone https://github.com/你的用户名/MyFTXUIGame.git
cd MyFTXUIGame
Windows：VS打开文件夹，x64-Debug编译运行
Linux：
mkdir build && cd build
cmake .. && make
./MyFTXUIGame
## 功能
轮流落子，已占格子不可重复点击
自动判X胜/O胜/平局
一键重新开局
## 贡献指南
Fork本仓库到自己账号
本地修改代码并自测
提交PR合并代码
## 开源
MIT License
精简紧凑版，直接全选粘贴，只替换「你的用户名」即可。贴到README.md即可，把链接里`你的用户名`替换成你自己github名字。
