#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string s;
    while (getline(cin, s))
        cout << s << '\n';
    return 0;
}