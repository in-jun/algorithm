#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int a, b, n;
	cin >> a >> b >> n;

	for (int i = 0; i < n; i++)
	{
		int c;
		cin >> c;
		cout << c << ' ' << (c <= 1000 ? (c * a) : (1000 * a + (c - 1000) * b)) << '\n';
	}
	return 0;
}