#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n)
{
    vector<vector<int>> answer(n, vector<int>(n, 0));
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int x = 0, y = 0, dir = 0;

    for (int i = 1; i <= n * n; i++)
    {
        answer[y][x] = i;

        if ((x + dx[dir] < 0 || x + dx[dir] >= n) ||
            (y + dy[dir] < 0 || y + dy[dir] >= n) ||
            (answer[y + dy[dir]][x + dx[dir]]))
        {
            dir++, dir %= 4;
        }

        x += dx[dir];
        y += dy[dir];
    }

    return answer;
}