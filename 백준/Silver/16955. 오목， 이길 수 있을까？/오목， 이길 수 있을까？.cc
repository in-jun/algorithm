#include <iostream>
using std::cin;
using std::cout;

char board[10][10];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
bool scopeCheck(int x, int y) { return (0 <= x) && (x < 10) && (0 <= y) && (y < 10); }

bool check(int x, int y)
{
    for (int i = 0; i < 8; i++)
    {
        int cx = x;
        int cy = y;
        int countX = 0;
        int countDot = 0;
        for (int j = 0; j < 4; j++)
        {
            if (scopeCheck(cx + dx[i], cy + dy[i]))
            {
                cx += dx[i];
                cy += dy[i];
                if (board[cx][cy] == 'X')
                    countX++;
                if (board[cx][cy] == '.')
                    countDot++;
            }
            else
            {
                break;
            }
        }
        if (countX == 3 && countDot == 1)
            return true;
    }
    return false;
}

int main()
{
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            cin >> board[i][j];

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            if (board[i][j] == 'X')
            {
                if (check(i, j))
                {
                    cout << 1;
                    return 0;
                }
            }
    cout << 0;
    return 0;
}