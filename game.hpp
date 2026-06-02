#pragma once
#include <string>

//获取棋盘坐标字符
char GetBoard(int x, int y);

//修改棋盘位置字符
void SetBoard(int x, int y, char ch);

//清空重置整个棋盘
void ResetBoard();

//胜负判断
//返回X=X获胜  O=O获胜  =平局  空格=游戏继续
char CheckWin();