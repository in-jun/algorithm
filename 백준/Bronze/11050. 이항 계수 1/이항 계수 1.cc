#include <iostream>
using std::cin;
using std::cout;

int C(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    else
        return C(n - 1, k - 1) + C(n - 1, k);
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << C(n, k);
    return 0;
}