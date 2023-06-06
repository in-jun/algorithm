#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int n, m, k;
	cin >> n >> m;

	bool pages[100]{false};
	for (int i = 0; i < m; i++)
		cin >> k, pages[k - 1] = true;

	int ink = 0, count = 0, page = 0;
	for (int i = 0; i < n; i++)
	{
		if (!pages[i])
		{
			if (page >= 3 && count > 0)
				ink += 5 + count * 2, count = 1;
			else if (count != 0)
				count += page + 1;
			else
				count++;
			page = 0;
		}
		else
			page++;

		if (i == n - 1)
			ink += 5 + count * 2;
	}

	cout << (ink != 5) * ink;
}