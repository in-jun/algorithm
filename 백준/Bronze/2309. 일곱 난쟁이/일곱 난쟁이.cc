#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::sort;

int main()
{
    int arr[9], sum = 0, check = 101;
    for (int i = 0; i < 9; i++)
        cin >> arr[i];
    for (int i = 0; i < 9; i++)
        sum += arr[i];
    for (int j = 0; j < 9; j++)
        for (int i = 0; i < 9; i++)
            if ((arr[j] != arr[i]) && ((sum - arr[j] - arr[i]) == 100))
            {
                arr[j] += check;
                arr[i] += check;
                check = 0;
            }
    sort(arr, arr + 9);
    for (int i = 0; i < 7; i++)
        cout << arr[i] << '\n';
    return 0;
}