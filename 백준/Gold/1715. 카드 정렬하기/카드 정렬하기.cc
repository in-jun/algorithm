#include <iostream>
#include <queue>
#include <vector>
using std::cin;
using std::cout;
using std::greater;
using std::priority_queue;
using std::vector;

int main()
{
	int n, input;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> pq;

	for (int i = 0; i < n; i++)
		cin >> input, pq.push(input);

	int sum = 0;
	while (pq.size() > 1)
	{
		int data1 = pq.top();
		pq.pop();
		int data2 = pq.top();
		pq.pop();
		sum += data1 + data2;
		pq.push(data1 + data2);
	}
	cout << sum;
	return 0;
}