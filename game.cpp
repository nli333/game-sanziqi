#include "game.hpp"

static char board[3][3] =
{
    {' ',' ',' '},
    {' ',' ',' '},
    {' ',' ',' '}
};

char GetBoard(int x, int y)
{
    return board[y][x];
}

void SetBoard(int x, int y, char ch)
{
    board[y][x] = ch;
}

void ResetBoard()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

char CheckWin()
{
    //横向判断
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][0]!=' ')
        {
            return board[i][0];
        }
    }

    //纵向判断
    for(int i = 0; i < 3; i++)
    {
        if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[0][i]!=' ')
        {
            return board[0][i];
        }
    }

    //两条斜线判断
    if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]!=' ')
        return board[0][0];

    if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[0][2]!=' ')
        return board[0][2];

    //棋盘填满判定平局
    int count = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] != ' ')
                count++;
        }
    }
    if(count == 9)
        return '=';

    return ' ';
}