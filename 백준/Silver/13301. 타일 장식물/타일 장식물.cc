#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int N;
    long long a = 1, b = 2, c;
    cin >> N;
    if (N == 1)
    {
        cout << 4;
        return 0;
    }
    for (int i = 2; i < N; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << ((a * 2) + (b * 2));
    return 0;
}
