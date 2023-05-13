#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::sort;

int main()
{
	int n, sum = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	for (int i = 1; i < n; i++)
		arr[i] += arr[i - 1];
	for (int i = 0; i < n; i++)
		sum += arr[i];
	cout << sum;
	return 0;
}