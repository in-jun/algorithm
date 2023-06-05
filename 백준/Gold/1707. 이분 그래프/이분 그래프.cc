#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

bool bipartite;
vector<int> check;
vector<bool> visited;
vector<vector<int>> arr;

void dfs(int n)
{
	visited[n] = true;

	for (int i : arr[n])
	{
		if (!visited[i])
		{
			visited[i] = true;
			check[i] = (check[n] + 1) % 2;
			dfs(i);
		}
		else if (check[i] == check[n])
			bipartite = false;
	}
}

int main()
{
	int k;
	cin >> k;

	while (k--)
	{
		int v, e;
		cin >> v >> e;

		bipartite = true;
		check = vector<int>(v + 1);
		visited = vector<bool>(v + 1);
		arr = vector<vector<int>>(v + 1);

		for (int i = 0; i < e; i++)
		{
			int s, e;
			cin >> s >> e;
			arr[s].push_back(e);
			arr[e].push_back(s);
		}

		for (int i = 1; i <= v && bipartite; i++)
			dfs(i);

		cout << (bipartite ? "YES" : "NO") << '\n';
	}
	return 0;
}