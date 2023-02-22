#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int t, input, count = 0;
    cin >> t;
    for (int i = 0; i < 5; i++)
    {
        cin >> input;
        if (input == t)
            count++;
    }
    cout << count;
    return 0;
}