#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, input, sum = 0, max = -1000;
    cin >> n;
    while (n--)
    {
        cin >> input;
        sum += input;
        max = (max < sum) ? sum : max;
        sum = (sum > 0) * sum;
    }
    cout << max;
    return 0;
}