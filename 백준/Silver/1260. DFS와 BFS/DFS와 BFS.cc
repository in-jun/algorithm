#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::queue;
using std::sort;
using std::vector;

vector<vector<int>> arr;
vector<bool> visited;

void dfs(int n)
{
	visited[n] = true;
	cout << n << ' ';
	for (int i : arr[n])
		if (!visited[i])
			dfs(i);
}

void bfs(int n)
{
	visited[n] = true;
	queue<int> q;
	q.push(n);
	while (q.size())
	{
		int now;
		now = q.front();
		cout << now << ' ';
		q.pop();
		for (int i : arr[now])
		{
			if (!visited[i])
			{
				visited[i] = true;
				q.push(i);
			}
		}
	}
}

int main()
{
	int n, m, v, a, b;
	cin >> n >> m >> v;
	arr.resize(n + 1);
	visited = vector<bool>(n + 1, false);
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	for (int i = 1; i <= n; i++)
		sort(arr[i].begin(), arr[i].end());
	dfs(v);
	cout << '\n';
	visited = vector<bool>(n + 1, false);
	bfs(v);
	return 0;
}