#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int count = 0;
		string str;
		cin >> str;
		for (char &c : str)
		{
			if (c == 'U')
				count++;
			else
				break;
		}
		cout << count << '\n';
	}
	return 0;
}