#include <iostream>
using std::cin;
using std::cout;

int N;

bool prime(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (!(n % i))
			return false;
	return true;
}

void dfs(int n, int j)
{
	if (j == N)
	{
		if (prime(n))
			cout << n << '\n';
		return;
	}
	for (int i = 1; i < 10; i++)
		if (prime(n * 10 + i))
			dfs(n * 10 + i, j + 1);
}

int main()
{
	cin >> N;
	dfs(2, 1);
	dfs(3, 1);
	dfs(5, 1);
	dfs(7, 1);
	return 0;
}
