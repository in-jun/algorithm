#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int i, n, a;
    bool arr[100000000]{false};
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        arr[a] = true;
    }
    for (i = 1; i <= n; i++)
        if (!arr[i])
            break;
    cout << ((i - 1 == n) ? "TAK" : "NIE");
    return 0;
}