#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

vector<bool> visited;
vector<vector<int>> arr;

void dfs(int o)
{
	if (visited[o])
		return;
	visited[o] = true;
	for (int i : arr[o])
		if (!visited[i])
			dfs(i);
}

int main()
{
	int n, m, u, v;
	cin >> n >> m;
	arr.reserve(n + 1);
	visited = vector<bool>(n + 1, false);
	while (m--)
	{
		cin >> u >> v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}
	int count = 0;
	for (int i = 1; i <= n; i++)
		if (!visited[i])
			count++, dfs(i);
	cout << count;
	return 0;
}