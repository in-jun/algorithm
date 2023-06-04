#include <iostream>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::max;
using std::queue;
using std::vector;

vector<vector<int>> arr;
vector<bool> visited;
vector<int> ans;

void bfs(int n)
{
	visited[n] = true;
	queue<int> q;
	q.push(n);

	while (q.size())
	{
		int now = q.front();
		q.pop();

		for (int i : arr[now])
		{
			if (!visited[i])
			{
				visited[i] = true;
				ans[i]++;
				q.push(i);
			}
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;

	arr.resize(n + 1);
	ans.resize(n + 1);

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
	}

	for (int i = 1; i <= n; i++)
	{
		visited = vector<bool>(n + 1, false);
		bfs(i);
	}

	int Max = 0;
	for (int i = 1; i <= n; i++)
		Max = max(Max, ans[i]);

	for (int i = 1; i <= n; i++)
		if (ans[i] == Max)
			cout << i << ' ';
	return 0;
}