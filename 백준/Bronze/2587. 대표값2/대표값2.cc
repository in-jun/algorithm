#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::sort;

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    sort(arr, arr + 5);
    cout << (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5 << '\n';
    cout << arr[2];
    return 0;
}