#include <iostream>
using std::cin;
using std::cout;
using std::min;

int main()
{
    int n, input, ans[2]{0}, arr[2]{0};
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> input, arr[input % 2]++, ans[input % 2] += arr[!(input % 2)];
    cout << min(ans[0], ans[1]);
    return 0;
}