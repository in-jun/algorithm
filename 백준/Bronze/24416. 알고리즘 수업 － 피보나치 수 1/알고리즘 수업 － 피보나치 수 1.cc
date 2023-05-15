#include <iostream>
using std::cin;
using std::cout;

int dp(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else if (n > 2)
		return dp(n - 1) + dp(n - 2);
	return 0;
}

int main()
{
	int n;
	cin >> n;
	cout << dp(n) << ' ' << n - 2;
	return 0;
}