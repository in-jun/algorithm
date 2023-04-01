#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::to_string;

bool prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (!(n % i))
            return false;
    return true;
}

bool panlindrome(int n)
{
    string str = to_string(n);
    string reversed(str.rbegin(), str.rend());
    if (str == reversed)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    while (1)
    {
        if (prime(n) && panlindrome(n))
        {
            cout << n;
            break;
        }
        n++;
    }
    return 0;
}