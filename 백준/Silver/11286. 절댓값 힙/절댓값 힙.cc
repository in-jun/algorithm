#include <iostream>
#include <queue>
using std::cin;
using std::cout;
using std::priority_queue;
using std::vector;

struct compare
{
	bool operator()(int o1, int o2)
	{
		if (abs(o1) == abs(o2))
			return o1 > o2;
		else
			return abs(o1) > abs(o2);
	}
};

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<int, vector<int>, compare> q;
	int n, x;
	cin >> n;
	while (n--)
	{
		cin >> x;
		if (x)
			q.push(x);
		else
		{
			if (q.empty())
				cout << "0\n";
			else
			{
				cout << q.top() << '\n';
				q.pop();
			}
		}
	}
	return 0;
}