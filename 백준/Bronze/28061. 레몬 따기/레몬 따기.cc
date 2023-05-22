#include <iostream>
using std::cin;
using std::cout;
using std::max;

int main()
{
	int n, a, Max = 0;
	cin >> n;
	for (int i = n; i > 0; i--)
		cin >> a, Max = max(Max, a - i);
	cout << Max;
	return 0;
}