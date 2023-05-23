#include <iostream>
using std::cin;
using std::cout;
using std::min;

int main()
{
	int n, k, b = 0;
	cin >> n >> k;

	int start = 1, end = k;
	while (start <= end)
	{
		int m = (start + end) / 2;
		int sum = 0;
		for (int i = 1; i <= n; i++)
			sum += min(m / i, n);
		if (sum < k)
		{
			start = m + 1;
		}
		else
		{
			end = m - 1;
			b = m;
		}
	}
	cout << b;
	return 0;
}