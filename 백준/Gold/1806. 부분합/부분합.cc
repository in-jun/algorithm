#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::min;
using std::vector;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> sum(n + 1, 0);
    vector<int> arr;

    for (int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;
        sum[i] = sum[i - 1] + input;
    }

    int start = 0, end = 0;
    while (start <= end && end <= n)
    {
        if (k <= sum[end] - sum[start])
        {
            arr.push_back(end - start);
            start++;
        }
        else
        {
            end++;
        }
    }

    int answer = 100000;
    for (int n : arr)
    {
        answer = min(answer, n);
    }

    cout << answer * (answer != 100000);
    return 0;
}