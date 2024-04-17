#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::min;
using std::vector;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> floydWarshall(n + 1, vector<int>(n + 1, 1e9));

    for (int i = 1; i <= n; i++)
    {
        floydWarshall[i][i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        floydWarshall[a][b] = min(floydWarshall[a][b], c);
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= n; k++)
                floydWarshall[j][k] = min(floydWarshall[j][k], floydWarshall[j][i] + floydWarshall[i][k]);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (floydWarshall[i][j] != 1e9) * floydWarshall[i][j] << ' ';
        }
        cout << '\n';
    }
}