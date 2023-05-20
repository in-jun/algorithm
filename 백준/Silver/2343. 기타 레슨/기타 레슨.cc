#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::max;
using std::vector;

int main()
{
	int n, m;
	int start = 0, end = 0;

	cin >> n >> m;
	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		start = max(start, arr[i]);
		end += arr[i];
	}

	while (start <= end)
	{
		int mid = (start + end) / 2;
		int count = 1, sum = 0;
		for (int i = 0; i < n; i++)
		{
			if (sum + arr[i] > mid)
			{
				count++;
				sum = 0;
			}
			sum += arr[i];
		}
		if (count <= m)
			end = mid - 1;
		else
			start = mid + 1;
	}
	cout << start;
	return 0;
}