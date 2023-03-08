#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, input, arr1[1001]{0}, arr2[1001]{0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input < 0)
            arr1[input * -1] = 1;
        else
            arr2[input] = 1;
    }
    for (int i = 1000; i > 0; i--)
        if (arr1[i])
            cout << i * -1 << ' ';
    for (int i = 0; i <= 1000; i++)
        if (arr2[i])
            cout << i << ' ';
    return 0;
}