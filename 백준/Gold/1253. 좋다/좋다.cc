#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::sort;

int main()
{
    int n, start, end, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        start = 0;
        end = n - 1;
        while (start < end)
        {
            if ((arr[start] + arr[end] < arr[i]) || (start == i))
                start++;
            else if ((arr[start] + arr[end] > arr[i]) || (end == i))
                end--;
            else
            {
                count++;
                break;
            }
        }
    }
    cout << count;
    return 0;
}