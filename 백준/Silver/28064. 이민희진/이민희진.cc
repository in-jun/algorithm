#include <iostream>
using std::cin;
using std::cout;
using std::min;
using std::string;

int main()
{
	int n, count = 0;
	cin >> n;
	string str[n];
	for (int i = 0; i < n; i++)
		cin >> str[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = 1; k <= min(str[i].length(), str[j].length()); k++)
			{
				if (str[i].substr(0, k) == str[j].substr(str[j].length() - k))
				{
					count++;
					break;
				}
				if (str[j].substr(0, k) == str[i].substr(str[i].length() - k))
				{
					count++;
					break;
				}
			}
		}
	}
	cout << count;
}