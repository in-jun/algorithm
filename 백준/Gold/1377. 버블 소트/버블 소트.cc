#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::max;
using std::pair;
using std::sort;
using std::vector;

int main()
{
	int n, Max = 0;
	cin >> n;
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++)
		Max = max(Max, a[i].second - i);
	cout << Max + 1;
	return 0;
}