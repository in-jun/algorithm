#include <iostream>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::max;
using std::pair;
using std::queue;
using std::vector;

int main()
{
    int dx[]{0, 0, 1, -1};
    int dy[]{1, -1, 0, 0};

    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
        }
    }

    int answer = 0;
    for (int x1 = 0; x1 < n; x1++)
    {
        for (int y1 = 0; y1 < m; y1++)
        {
            for (int x2 = 0; x2 < n; x2++)
            {
                for (int y2 = 0; y2 < m; y2++)
                {
                    for (int x3 = 0; x3 < n; x3++)
                    {
                        for (int y3 = 0; y3 < m; y3++)
                        {
                            if ((x1 == x2 && y1 == y2) || (x2 == x3 && y2 == y3) || (x1 == x3 && y1 == y3))
                            {
                                continue;
                            }

                            if (graph[x1][y1] != 0 || graph[x2][y2] != 0 || graph[x3][y3] != 0)
                            {
                                continue;
                            }

                            vector<vector<int>> temp = graph;

                            temp[x1][y1] = 1;
                            temp[x2][y2] = 1;
                            temp[x3][y3] = 1;

                            queue<pair<int, int>> q;

                            for (int i = 0; i < n; i++)
                            {
                                for (int j = 0; j < m; j++)
                                {
                                    if (temp[i][j] == 2)
                                    {
                                        q.push({i, j});
                                    }
                                }
                            }

                            while (!q.empty())
                            {
                                int x = q.front().first;
                                int y = q.front().second;
                                q.pop();

                                for (int k = 0; k < 4; k++)
                                {
                                    int nx = x + dx[k];
                                    int ny = y + dy[k];

                                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                                    {
                                        continue;
                                    }

                                    if (temp[nx][ny] == 0)
                                    {
                                        temp[nx][ny] = 2;
                                        q.push({nx, ny});
                                    }
                                }
                            }

                            int count = 0;
                            for (int i = 0; i < n; i++)
                            {
                                for (int j = 0; j < m; j++)
                                {
                                    if (temp[i][j] == 0)
                                    {
                                        count++;
                                    }
                                }
                            }

                            answer = max(answer, count);
                        }
                    }
                }
            }
        }
    }

    cout << answer;
    return 0;
}