#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int main()
{
	long min, max;
	cin >> min >> max;

	vector<bool> arr(max - min + 1, false);

	for (long i = 2; i * i <= max; i++)
	{
		long pow = i * i;
		long start = (min / pow) + !!(min % pow);

		for (long j = start; j * pow <= max; j++)
			arr[int((j * pow) - min)] = true;
	}

	int count = 0;
	for (int i = 0; i <= max - min; i++)
		count += !arr[i];

	cout << count;
	return 0;
}