#include <iostream>
using std::cin;
using std::cout;
using std::min;

int main()
{
	int n, a, Min = 1001, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		sum += a;
		if (a % 2)
			Min = min(Min, a);
	}
	if (sum % 2)
		cout << sum - Min;
	else
		cout << sum;
	return 0;
}