#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

bool check;
vector<bool> visited;
vector<vector<int>> arr;

void dfs(int n, int d)
{
	if (d == 5 || check)
	{
		check = true;
		return;
	}
	visited[n] = true;
	for (int i : arr[n])
	{
		if (!visited[i])
			dfs(i, d + 1);
	}
	visited[n] = false;
}

int main()
{

	int n, m, a, b;
	cin >> n >> m;
	arr.resize(n);
	visited = vector<bool>(n, false);
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	for (int i = 0; i < n; i++)
	{
		dfs(i, 1);
		if (check)
			break;
	}
	cout << check;
	return 0;
}