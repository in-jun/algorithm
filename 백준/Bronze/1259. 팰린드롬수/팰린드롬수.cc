#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    while (1)
    {
        string str;
        cin >> str;
        if (str == "0")
            break;
        string reversed(str.rbegin(), str.rend());
        cout << ((str == reversed) ? "yes\n" : "no\n");
    }
    return 0;
}