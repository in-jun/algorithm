#include <iostream>
#include <set>
using std::cin;
using std::cout;
using std::set;

int main()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	set<int> s;
	int n, m, input;
	cin >> n;
	while (n--)
	{
		cin >> input;
		s.insert(input);
	}
	cin >> m;
	while (m--)
	{
		cin >> input;
		cout << (s.find(input) != s.end()) << '\n';
	}
	return 0;
}