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
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	parent.resize(n + 1);

	for (int i = 0; i <= n; i++)
		parent[i] = i;

	for (int i = 0; i < m; i++)
	{
		int q, a, b;
		cin >> q >> a >> b;

		if (q)
			cout << (find(a) == find(b) ? "YES" : "NO") << '\n';
		else
			Union(a, b);
	}
	return 0;
}