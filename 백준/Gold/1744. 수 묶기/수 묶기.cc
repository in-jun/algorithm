#include <iostream>
#include <vector>
#include <queue>
using std::cin;
using std::cout;
using std::greater;
using std::priority_queue;
using std::vector;

int main()
{
	int n, input;
	int zero = 0, one = 0;
	priority_queue<int> p;
	priority_queue<int, vector<int>, greater<int>> m;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input > 1)
			p.push(input);
		else if (input == 0)
			zero++;
		else if (input == 1)
			one++;
		else
			m.push(input);
	}

	int sum = 0;
	while (p.size() > 1)
	{
		int top1 = p.top();
		p.pop();
		int top2 = p.top();
		p.pop();
		sum += top1 * top2;
	}
	if (p.size())
		sum += p.top();

	while (m.size() > 1)
	{
		int top1 = m.top();
		m.pop();
		int top2 = m.top();
		m.pop();
		sum += top1 * top2;
	}
	if (m.size() && !zero)
		sum += m.top();
	sum += one;

	cout << sum;
	return 0;
}