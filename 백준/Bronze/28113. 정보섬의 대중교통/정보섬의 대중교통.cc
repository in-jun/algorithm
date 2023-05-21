#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int n, a, b;
	cin >> n >> a >> b;
	if (a == b)
	{
		cout << "Anything";
		return 0;
	}
	cout << ((a < b) ? "Bus" : "Subway");
	return 0;
}