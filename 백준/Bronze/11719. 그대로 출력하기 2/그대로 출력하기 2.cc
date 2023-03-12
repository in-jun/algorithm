#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string str;
    while (getline(cin, str))
        cout << str << '\n';
    return 0;
}