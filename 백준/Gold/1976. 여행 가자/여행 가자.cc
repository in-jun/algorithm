#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

vector<int> parent;

int find(int a)
{
	if (a == parent[a])
		return a;
	return parent[a] = find(parent[a]);
}

void Union(int a, int b)
{
	a = find(a), b = find(b);
	if (a != b)
		parent[b] = a;
}

int main()
{

	int n, m;
	cin >> n >> m;
	parent.resize(n + 1);

	for (int i = 1; i <= n; i++)
		parent[i] = i;

	int check;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> check;
			if (check)
				Union(i, j);
		}
	}

	int route[1001];
	for (int i = 1; i <= m; i++)
		cin >> route[i];

	int index = find(route[1]);
	for (int i = 2; i <= m; i++)
	{
		if (index != find(route[i]))
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}