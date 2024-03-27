#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w)
{
    int answer = 0;
    int dh[4]{1, 0, -1, 0};
    int dw[4]{0, 1, 0, -1};

    int n = board.size();
    for (int i = 0; i < 4; i++)
        if ((0 <= h + dh[i]) && (h + dh[i] < n) && (0 <= w + dw[i]) && (w + dw[i] < n))
            if (board[h][w] == board[h + dh[i]][w + dw[i]])
                answer++;

    return answer;
}