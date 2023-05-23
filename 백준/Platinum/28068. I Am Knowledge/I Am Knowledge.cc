#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::pair;
using std::sort;
using std::vector;

bool check(const pair<int, int> &a, const pair<int, int> &b)
{
	if (a.first <= a.second && b.first <= b.second)
		return a.first < b.first;
	else if (a.first <= a.second)
		return true;
	else if (b.first <= b.second)
		return false;
	else
		return a.second > b.second;
}

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i].first >> arr[i].second;

	sort(arr.begin(), arr.end(), check);

	long long sum = 0;
	for (pair<int, int> &p : arr)
	{
		sum -= p.first;
		if (sum < 0)
		{
			cout << 0;
			return 0;
		}
		sum += p.second;
	}
	cout << 1;
	return 0;
}