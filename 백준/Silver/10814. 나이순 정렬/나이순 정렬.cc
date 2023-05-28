#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::pair;
using std::string;
using std::vector;

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> arr(n);
	vector<string> name(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first;
		arr[i].second = i;
		cin >> name[i];
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < n; i++)
		cout << arr[i].first << ' ' << name[arr[i].second] << '\n';
	return 0;
}