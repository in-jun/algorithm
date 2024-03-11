#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int number1, denom1, number2, denom2;
    cin >> number1 >> denom1 >> number2 >> denom2;

    int a = denom1 * denom2;
    int b = denom1 * number2 + denom2 * number1;

    for (int i = 2; i <= a; i++)
        if (!(a % i) && !(b % i))
            a /= i, b /= i, i = 1;

    cout << b << ' ' << a;
}