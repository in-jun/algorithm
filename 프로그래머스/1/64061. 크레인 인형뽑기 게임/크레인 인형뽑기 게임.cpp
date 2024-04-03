#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
    vector<int> v;

    int ans = 0;
    for (int n : moves)
    {
        for (int i = 0; i < board.size(); i++)
        {
            if (board[i][n - 1] != 0)
            {
                v.push_back(board[i][n - 1]);
                board[i][n - 1] = 0;
                break;
            }
        }

        for (int i = v.size() - 1; i >= 0; i--)
        {
            if (i > 0 && v[i] == v[i - 1])
            {
                v.pop_back();
                v.pop_back();
                ans += 2;
            }
        }
    }

    return ans;
}