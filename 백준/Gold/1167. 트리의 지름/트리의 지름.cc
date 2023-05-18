#include <iostream>
#include <queue>
#include <vector>
using std::cin;
using std::cout;
using std::pair;
using std::queue;
using std::vector;

typedef pair<int, int> type_pair;
vector<vector<type_pair>> arr;
vector<bool> visited;
int max_d = 0, max_i = 0;

void bfs(int n)
{
	queue<type_pair> q;
	visited[n] = true;
	q.push(type_pair(n, 0));

	while (!q.empty())
	{
		int node = q.front().first;
		int dist = q.front().second;
		q.pop();
		if (dist > max_d)
		{
			max_d = dist;
			max_i = node;
		}
		for (type_pair i : arr[node])
		{
			int next_node = i.first;
			int next_dist = i.second;
			if (!visited[next_node])
			{
				visited[next_node] = true;
				q.push(type_pair(next_node, dist + next_dist));
			}
		}
	}
}

int main()
{
	int v;
	cin >> v;
	visited = vector<bool>(v + 1, false);
	arr.resize(v + 1);
	for (int i = 0; i < v; i++)
	{
		int a, b, c;
		cin >> a;
		while (cin >> b && b != -1)
		{
			cin >> c;
			arr[a].push_back(type_pair(b, c));
		}
	}
	bfs(1);
	visited = vector<bool>(v + 1, false);
	max_d = 0;
	bfs(max_i);
	cout << max_d;
	return 0;
}