#include <iostream>
using std::cin;
using std::cout;

int gcd(long int a, long int b) { return (!b ? a : gcd(b, a % b)); }

int main()
{
	long int a, b;
	cin >> a >> b;

	long int n = gcd(a, b);

	while (n--)
		cout << 1;

	return 0;
}