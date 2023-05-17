#include <iostream>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::make_pair;
using std::pair;
using std::queue;
using std::string;
using std::vector;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m, arr[100][100];
bool visited[100][100]{false};

void bfs()
{
	visited[0][0] = true;
	queue<pair<int, int>> q;
	q.push(make_pair(0, 0));
	while (q.size())
	{
		int nX = q.front().first;
		int nY = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int x = nX + dx[i];
			int y = nY + dy[i];
			if (x >= 0 && y >= 0 && x < n && y < m)
			{
				if (arr[x][y] && !visited[x][y])
				{
					visited[x][y] = true;
					arr[x][y] = arr[nX][nY] + 1;
					q.push(make_pair(x, y));
				}
			}
		}
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		for (int j = 0; j < m; j++)
			arr[i][j] = str[j] - '0';
	}
	bfs();
	cout << arr[n - 1][m - 1];
	return 0;
}