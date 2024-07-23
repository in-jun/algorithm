#include <iostream>
#include <queue>
using std::cin;
using std::cout;
using std::queue;
using std::string;

const int dx[]{0, 0, -1, 1};
const int dy[]{-1, 1, 0, 0};
const char xy[]{'U', 'D', 'L', 'R'};

int main()
{
    int n, m;
    cin >> n >> m;

    char board[10][10];

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
        string xys;
    };

    bool visited[10][10][10][10];
    visited[rx][ry][bx][by] = true;

    queue<step> q;
    q.push({rx, ry, bx, by, ""});

    while (q.size())
    {
        int rx = q.front().rx;
        int ry = q.front().ry;
        int bx = q.front().bx;
        int by = q.front().by;
        string xys = q.front().xys;

        q.pop();

        if (xys.size() == 10)
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
            int rc = 0, bc = 0;
            string nxys = xys + xy[i];

            while (board[nry + dy[i]][nrx + dx[i]] != '#' && board[nry][nrx] != 'O')
            {
                nrx += dx[i], nry += dy[i];
                rc++;
            }
            while (board[nby + dy[i]][nbx + dx[i]] != '#' && board[nby][nbx] != 'O')
            {
                nbx += dx[i], nby += dy[i];
                bc++;
            }

            if (board[nby][nbx] == 'O')
            {
                continue;
            }
            if (board[nry][nrx] == 'O')
            {
                cout << nxys.size() << '\n';
                cout << nxys;
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
                q.push({nrx, nry, nbx, nby, nxys});
            }
        }
    }

    cout << -1;
    return 0;
}