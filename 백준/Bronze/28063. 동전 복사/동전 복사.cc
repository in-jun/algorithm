#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int n, x, y;
	cin >> n >> x >> y;
	if (n == 1)
		cout << 0;
	else if ((x == 1 && y == 1) || (x == 1 && y == n) || (x == n && y == 1) || (x == n && y == n))
		cout << 2;
	else if ((x == 1) || (x == n) || (y == 1) || (y == n))
		cout << 3;
	else
		cout << 4;
	return 0;
}