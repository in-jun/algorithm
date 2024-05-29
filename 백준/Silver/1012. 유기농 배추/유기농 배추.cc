#include <iostream>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::pair;
using std::queue;
using std::vector;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<vector<int>> ground(n, vector<int>(m, 0));
        vector<vector<int>> visited(n, vector<int>(m, 0));

        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            ground[x][y] = 1;
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (ground[i][j] == 1 && visited[i][j] == 0)
                {
                    count++;
                    visited[i][j] = 1;
                    queue<pair<int, int>> q;
                    q.push({i, j});

                    while (!q.empty())
                    {
                        int cx = q.front().first;
                        int cy = q.front().second;
                        q.pop();

                        for (int k = 0; k < 4; k++)
                        {
                            int nx = cx + dx[k];
                            int ny = cy + dy[k];

                            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                            {
                                continue;
                            }

                            if (ground[nx][ny] == 1 && visited[nx][ny] == 0)
                            {
                                visited[nx][ny] = 1;
                                q.push({nx, ny});
                            }
                        }
                    }
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}