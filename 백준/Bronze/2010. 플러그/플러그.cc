#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        sum += input;
    }

    cout << sum - (n - 1);
    return 0;
}