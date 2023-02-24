#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b;
    cin >> a >> b;
    if ((b - a) <= 0)
        cout << "Congratulations, you are within the speed limit!";
    else if ((b - a) >= 31)
        cout << "You are speeding and your fine is $500.";
    else if ((b - a) >= 21)
        cout << "You are speeding and your fine is $270.";
    else
        cout << "You are speeding and your fine is $100.";

    return 0;
}