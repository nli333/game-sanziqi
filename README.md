# game-sanziqi
# MyFTXUIGame — 终端井字棋小游戏
基于 C++17 + FTXUI 终端UI库开发的双人井字棋项目，使用 CMake 跨平台构建，Windows / Linux 均可一键编译运行。

## 项目介绍
本项目是经典3×3井字棋双人对战游戏：
1. 玩家 X 先手落子，玩家 O 后手轮流下棋；
2. 横向、纵向、对角线三子连成一线即为获胜，棋盘填满无胜者判定平局；
3. 界面分为两层：上层空白交互按钮用来点击落子，下方文本面板实时展示全棋盘棋子；
4. 内置重新开局按钮，随时清空棋盘、恢复初始对局状态。

### 技术信息
- 编程语言：C++17
- UI依赖：FTXUI v6.1.9（CMake自动从Gitee镜像拉取，无需手动安装库）
- 构建工具：CMake ≥3.20

### 目录结构
MyFTXUIGame/
├── CMakeLists.txt   # CMake编译配置，自动拉取FTXUI依赖
├── main.cpp         # 程序入口、界面布局、交互逻辑
├── game.hpp         # 游戏数据与函数声明
└── game.cpp         # 棋盘、判胜、重置等底层逻辑实现

## 编译与使用教程
### 1. 下载源码
```bash
git clone https://github.com/你的用户名/MyFTXUIGame.git
cd MyFTXUIGame
2. Windows（Visual Studio）运行
使用 Visual Studio 直接打开项目文件夹；
VS 自动识别 CMakeLists.txt，加载项目配置；
编译选项选择 x64-Debug，点击生成项目；
编译完成后启动程序：点击上方空白方格落子，点击【重新开局】重置对局。
3. Linux 环境编译运行
mkdir build && cd build
cmake ..
make
./MyFTXUIGame
功能清单
双人交替落子，自动切换当前操作玩家；
已占用格子禁止重复落子；
对局结束自动判断：X获胜 / O获胜 / 平局，并在顶部提示文字；
一键重置游戏，清空所有棋子、恢复X先手。
贡献指南
想要参与开发请先 Fork 本仓库；
在个人仓库新建功能分支进行开发；
本地完成代码修改后，自行编译测试，保证程序正常编译、运行无异常；
提交 PR（Pull Request），等待作者审核合并代码。
开源说明
本项目采用 MIT 开源协议，可自由学习、二次修改与非商用/商用使用。
