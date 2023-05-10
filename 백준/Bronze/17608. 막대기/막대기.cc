#include <iostream>
#include <stack>
using std::cin;
using std::cout;
using std::stack;

int main()
{
	int n, input, count = 0, max = 0;
	stack<int> s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		s.push(input);
	}
	while (s.size())
	{
		if (s.top() > max)
		{
			count++;
			max = s.top();
		}
		s.pop();
	}
	cout << count;
	return 0;
}