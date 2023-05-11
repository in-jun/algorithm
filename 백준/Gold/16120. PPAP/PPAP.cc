#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
	string str, s;
	cin >> str;
	for (char &c : str)
	{
		s.push_back(c);
		if (s.length() >= 4 && (s.substr(s.length() - 4)) == "PPAP")
		{
			s.pop_back();
			s.pop_back();
			s.pop_back();
		}
	}
	cout << (s == "P" || s == "PPAP" ? "PPAP" : "NP");
	return 0;
}