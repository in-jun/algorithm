#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::sort;

int main()
{
    int n, input[1000000]{0};
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> input[i];
    sort(input, input + n);
    for (int i = 0; i < n; i++)
        cout << input[i] << '\n';
    return 0;
}