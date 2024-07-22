#include <iostream>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::queue;
using std::vector;

const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> board(n, vector<char>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
        }
    }

    int rx, ry;
    int bx, by;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == 'R')
            {
                rx = j, ry = i;
            }

            if (board[i][j] == 'B')
            {
                bx = j, by = i;
            }
        }
    }

    struct step
    {
        int rx, ry;
        int bx, by;
        int count;
    };

    queue<step> q;
    q.push(step({rx, ry, bx, by, 0}));

    bool visited[10][10][10][10];
    visited[rx][ry][bx][by] = true;

    while (q.size())
    {
        int rx = q.front().rx;
        int ry = q.front().ry;
        int bx = q.front().bx;
        int by = q.front().by;
        int count = q.front().count;

        q.pop();

        if (count == 10)
        {
            cout << -1;
            return 0;
        }

        for (int i = 0; i < 4; i++)
        {
            int nrx = rx;
            int nry = ry;
            int nbx = bx;
            int nby = by;
            int ncount = count + 1;

            int rc = 0, bc = 0;

            while (board[nry + dy[i]][nrx + dx[i]] != '#' && board[nry][nrx] != 'O')
            {
                rc++;
                nry += dy[i], nrx += dx[i];
            }
            while (board[nby + dy[i]][nbx + dx[i]] != '#' && board[nby][nbx] != 'O')
            {
                bc++;
                nby += dy[i], nbx += dx[i];
            }

            if (board[nby][nbx] == 'O')
            {
                continue;
            }
            if (board[nry][nrx] == 'O')
            {
                cout << ncount;
                return 0;
            }

            if (nrx == nbx && nry == nby)
            {
                if (rc < bc)
                {
                    nbx -= dx[i], nby -= dy[i];
                }
                else
                {
                    nrx -= dx[i], nry -= dy[i];
                }
            }

            if (!visited[nrx][nry][nbx][nby])
            {
                visited[nrx][nry][nbx][nby] = true;

                q.push(step({nrx, nry, nbx, nby, ncount}));
            }
        }
    }

    cout << -1;
    return 0;
}