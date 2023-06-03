#include <iostream>
using std::cin;
using std::cout;

int main()
{
	long int n;
	cin >> n;

	long int ans = n;
	for (long int p = 2; p * p <= n; p++)
	{
		if (!(n % p))
		{
			ans -= ans / p;
			while (!(n % p))
				n /= p;
		}
	}

	ans -= (n > 1) * (ans / n);

	cout << ans;
	return 0;
}