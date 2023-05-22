#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
	bool m = 0, o = 0, b = 0, i = 0, s = 0;
	string str;
	cin >> str;
	for (char c : str)
	{
		if (c == 'M')
			m = 1;
		else if (c == 'O')
			o = 1;
		else if (c == 'B')
			b = 1;
		else if (c == 'I')
			i = 1;
		else if (c == 'S')
			s = 1;
	}
	cout << ((m && o && b && i && s) ? "YES" : "NO");
	return 0;
}