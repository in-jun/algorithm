#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using std::cin;
using std::cout;
using std::queue;
using std::vector;

vector<vector<int>> arr;
vector<int> visited;

void bfs(int n)
{
	queue<int> q;
	q.push(n);
	visited[n]++;

	while (q.size())
	{
		int now = q.front();
		q.pop();
		for (int i : arr[now])
		{
			if (visited[i] == -1)
			{
				visited[i] = visited[now] + 1;
				q.push(i);
			}
		}
	}
}

int main()
{
	int n, m, k, x;
	cin >> n >> m >> k >> x;

	arr.resize(n + 1);
	visited = vector<int>(n + 1, -1);

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
	}

	bfs(x);

	vector<int> ans;
	for (int i = 0; i <= n; i++)
		if (visited[i] == k)
			ans.push_back(i);

	if (ans.empty())
		cout << -1;
	else
	{
		sort(ans.begin(), ans.end());
		for (int i : ans)
			cout << i << '\n';
	}
	return 0;
}