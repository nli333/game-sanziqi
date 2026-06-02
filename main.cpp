#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include "game.hpp"
#include <string>

using namespace ftxui;
using namespace std;

int main()
{
    char player = 'X';
    string message = "先手玩家X，请点击格子落子";
    Component chess[3][3];

    for (int y = 0; y < 3; ++y)
    {
        for (int x = 0; x < 3; ++x)
        {
            chess[y][x] = Button(" ", [&, x, y]() {
                if (GetBoard(x, y) != ' ') return;
                if (CheckWin() != ' ') return;
                SetBoard(x, y, player);
                player = (player == 'X') ? 'O' : 'X';

                char res = CheckWin();
                if (res == 'X') message = "玩家X获得胜利！";
                else if (res == 'O') message = "玩家O获得胜利！";
                else if (res == '=') message = "双方平局，不分胜负";
                else message = "当前轮到玩家" + string(1, player);
                });
        }
    }

    auto resetGame = Button("重新开局", [&]() {
        ResetBoard();
        player = 'X';
        message = "先手玩家X，请点击格子落子";
        });

    Component row1 = Container::Horizontal({ chess[0][0],chess[0][1],chess[0][2] });
    Component row2 = Container::Horizontal({ chess[1][0],chess[1][1],chess[1][2] });
    Component row3 = Container::Horizontal({ chess[2][0],chess[2][1],chess[2][2] });

    // 外层文本单独渲染棋盘内容，按钮只负责点击
    auto ui_base = Container::Vertical({
        Renderer([&]() {return text(message) | center;}),
        row1,row2,row3,
        resetGame
        });

    // 下方额外拼接棋盘文字，实现X/O显示
    auto all_ui = Container::Vertical({
        ui_base,
        Renderer([&]() {
            string board_text;
            for (int y = 0;y < 3;y++) {
                for (int x = 0;x < 3;x++) {
                    char c = GetBoard(x,y);
                    board_text += string("[") + c + "] ";
                }
                board_text += "\n";
            }
            return text(board_text) | center;
        })
        }) | border;

    auto screen = ScreenInteractive::FitComponent();
    screen.Loop(all_ui);
    return 0;
}