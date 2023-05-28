#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int main()
{
	long int a, b, count = 0;
	cin >> a >> b;

	vector<bool> prime(10000001, true);

	prime[0] = false;
	prime[1] = false;

	for (long int i = 2; i <= 10000001; i++)
	{
		if (prime[i])
		{
			for (long j = i * 2; j < 10000001; j += i)
				prime[j] = false;
			for (long j = i; i <= b / j; j *= i)
				if (j * i >= a)
					count++;
		}
	}

	cout << count;
	return 0;
}