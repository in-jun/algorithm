#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::pair;
using std::vector;

int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i].second >> v[i].first;

	sort(v.begin(), v.end());

	int count = 0, end = -1;
	for (pair<int, int> &i : v)
	{
		if (i.second >= end)
		{
			end = i.first;
			count++;
		}
	}

	cout << count;
	return 0;
}