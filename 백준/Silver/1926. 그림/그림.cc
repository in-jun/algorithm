#include <iostream>
#include <queue>
using std::cin;
using std::cout;
using std::max;
using std::pair;
using std::queue;

int n, m;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int visited[501][501];
int paint[501][501];

int bfs(int, int);

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> paint[i][j];
        }
    }

    int answer1 = 0;
    int answer2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (paint[i][j] && !visited[i][j])
            {
                answer1++;
                answer2 = max(answer2, bfs(i, j));
            }
        }
    }

    cout << answer1 << '\n';
    cout << answer2;

    return 0;
}

int bfs(int x, int y)
{
    visited[x][y] = 1;
    queue<pair<int, int>> q;
    q.push({x, y});

    int count = 1;
    while (!q.empty())
    {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
            {
                continue;
            }

            if (paint[nx][ny] && !visited[nx][ny])
            {
                visited[nx][ny] = 1;
                q.push({nx, ny});
                count++;
            }
        }
    }

    return count;
}