#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

long int merge(vector<long int> &arr, int l, int m, int r)
{
	int i = l, j = m + 1, k = 0;
	long int count = 0;
	vector<long int> temp(r - l + 1);

	while (i <= m && j <= r)
	{
		if (arr[i] <= arr[j])
			temp[k++] = arr[i++];
		else
		{
			count += m - i + 1;
			temp[k++] = arr[j++];
		}
	}

	while (i <= m)
		temp[k++] = arr[i++];

	while (j <= r)
		temp[k++] = arr[j++];

	for (int i = l, k = 0; i <= r; i++, k++)
		arr[i] = temp[k];

	return count;
}

long int mergeSort(vector<long int> &arr, int l, int r)
{
	long int count = 0;
	if (l < r)
	{
		int m = l + (r - l) / 2;
		count += mergeSort(arr, l, m);
		count += mergeSort(arr, m + 1, r);
		count += merge(arr, l, m, r);
	}
	return count;
}

int main()
{
	int n;
	cin >> n;
	vector<long int> A(n);
	for (int i = 0; i < n; i++)
		cin >> A[i];
	cout << mergeSort(A, 0, n - 1);
}