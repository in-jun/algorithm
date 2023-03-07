#include <iostream>
using std::cin;
using std::cout;

int main()
{
    bool check;
    int n, d, input, copy;
    cin >> n;
    while (n--)
    {
        check = false;
        cin >> d;
        cout << "Denominations:";
        cin >> input;
        cout << ' ' << input;
        for (int i = 1; i < d; i++)
        {
            copy = input;
            cin >> input;
            cout << ' ' << input;
            if (copy * 2 > input)
                check = true;
        }
        cout << (check ? "\nBad coin denominations!\n\n" : "\nGood coin denominations!\n\n");
    }
    return 0;
}