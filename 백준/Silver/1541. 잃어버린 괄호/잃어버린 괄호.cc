#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
	int sum = 0;
	string str;
	string n;
	cin >> str;
	str.push_back('+');

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '-')
		{
			sum += stoi(n), n.clear();
			for (int j = i + 1; j < str.length(); j++)
			{
				if (str[j] == '+' || str[j] == '-')
					sum -= stoi(n), n.clear();
				else
					n.push_back(str[j]);
			}
			break;
		}
		else if (str[i] == '+')
			sum += stoi(n), n.clear();
		else
			n.push_back(str[i]);
	}
    
	cout << sum;
	return 0;
}