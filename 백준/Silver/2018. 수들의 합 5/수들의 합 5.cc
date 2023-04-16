#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, sum = 1, count = 1;
    int start = 0, end = 1;
    cin >> n;
    while (end < n)
    {
        if (sum == n)
        {
            count++;
            end++;
            sum += end;
        }
        else if (sum < n)
        {
            end++;
            sum += end;
        }
        else
        {
            start++;
            sum -= start;
        }
    }
    cout << count;
    return 0;
}