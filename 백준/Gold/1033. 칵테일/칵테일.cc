#include <iostream>
#include <vector>
#include <tuple>
using std::cin;
using std::cout;
using std::get;
using std::make_tuple;
using std::tuple;
using std::vector;

long int d[10];
bool visited[10];
vector<tuple<int, int, int>> arr[10];

long int gcd(long int a, long int b) { return (b ? gcd(b, a % b) : a); }

void dfs(int n)
{
	visited[n] = true;
	for (tuple<int, int, int> i : arr[n])
	{
		int next = get<0>(i);
		if (!visited[next])
		{
			d[next] = d[n] * get<2>(i) / get<1>(i);
			dfs(next);
		}
	}
}

int main()
{
	int n;
	cin >> n;

	long int lcm = 1;
	for (int i = 1; i < n; i++)
	{
		int a, b, p, q;
		cin >> a >> b >> p >> q;
		arr[a].push_back(make_tuple(b, p, q));
		arr[b].push_back(make_tuple(a, q, p));
		lcm *= (p * q / gcd(p, q));
	}

	d[0] = lcm;
	dfs(0);

	long int mgcd = d[0];
	for (int i = 1; i < n; i++)
		mgcd = gcd(mgcd, d[i]);

	for (int i = 0; i < n; i++)
		cout << d[i] / mgcd << ' ';
	return 0;
}