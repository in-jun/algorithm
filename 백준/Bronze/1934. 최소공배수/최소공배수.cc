#include <iostream>
using std::cin;
using std::cout;

int gcd(int a, int b) { return (!b ? a : gcd(b, a % b)); }

int main()
{
	int t, a, b;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		cout << a * b / gcd(a, b) << '\n';
	}
	return 0;
}