#include <iostream>
using std::cin;
using std::cout;

bool prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (!(n % i))
            return false;
    return true;
}

int main()
{
    int n, input, count = 0;
    cin >> n;
    while (n--)
    {
        cin >> input;
        count += prime(input);
    }
    cout << count;
    return 0;
}