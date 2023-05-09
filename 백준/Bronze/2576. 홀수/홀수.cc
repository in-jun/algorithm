#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int input, sum = 0, min = 100;
    for (int i = 0; i < 7; i++)
    {
        cin >> input;
        sum += (input % 2) * input;
        if (input % 2)
            min = ((min < input) ? min : input);
    }
    if (sum)
    {
        cout << sum << '\n';
        cout << min;
    }
    else
    {
        cout << -1;
    }
    return 0;
}
