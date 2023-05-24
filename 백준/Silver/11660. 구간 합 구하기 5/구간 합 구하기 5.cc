#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, input;
	cin >> n >> m;

	vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> input;
			arr[i][j] += input + arr[i][j - 1] + arr[i - 1][j] - arr[i - 1][j - 1];
		}
	}

	for (int i = 0; i < m; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << arr[x2][y2] - arr[x1 - 1][y2] - arr[x2][y1 - 1] + arr[x1 - 1][y1 - 1] << '\n';
	}
	return 0;
}