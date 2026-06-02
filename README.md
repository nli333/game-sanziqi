# game-sanziqi
# MyFTXUIGame 终端井字棋
基于C++17 + FTXUI实现的终端双人井字棋小游戏，采用CMake构建项目，依赖自动拉取，Windows、Linux全平台可编译运行。

## 项目介绍
经典3×3井字棋双人对战：X先手、O后手，率先横/竖/斜连成三子即可获胜，棋盘填满无赢家判定平局。
界面分为两层：上层空白按钮用于点击落子，下方文本实时展示完整棋盘，附带重新开局按钮随时重置对局。

### 技术栈
- C++标准：C++17
- UI库：FTXUI v6.1.9（CMake自动从Gitee镜像下载，无需手动安装）
- 编译工具：CMake 3.20及以上

### 项目目录
MyFTXUIGame/
├── CMakeLists.txt  # 编译配置文件，自动拉取FTXUI依赖
├── main.cpp        # 程序入口、界面与交互逻辑
├── game.hpp        # 游戏函数、棋盘数据声明
└── game.cpp        # 落子、判胜、重置等底层逻辑

## 使用说明
### 1. 克隆代码
```bash
git clone https://github.com/你的用户名/MyFTXUIGame.git
cd MyFTXUIGame
Windows(Visual Studio)
VS直接打开项目文件夹，软件自动识别CMake配置；
编译选型x64-Debug，生成项目；
运行程序：点击格子落子，点击【重新开局】开启新对局。
Linux
mkdir build && cd build
cmake ..
make
./MyFTXUIGame
项目功能
双人轮流落子，落子后自动切换玩家；
已有棋子的格子无法重复点击；
对局结束自动判定X胜/O胜/平局并顶部提示；
一键重置游戏，清空棋盘恢复初始状态。
贡献指南
点击仓库右上角Fork，将项目复制到自己的GitHub账号；
把副本代码下载到本地，在本地修改代码；
修改完成自测编译运行无误，推送至自己的远程仓库；
在GitHub提交Pull Request，等待代码审核合并到主仓库。
开源协议
MIT License，可自由学习、修改、商用。
直接全选复制粘贴到README.md即可，把链接里`你的用户名`替换成你自己github名字。
