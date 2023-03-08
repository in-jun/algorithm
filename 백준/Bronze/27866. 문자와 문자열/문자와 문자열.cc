#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int n;
    string str;
    cin >> str >> n;
    cout << str[n - 1];
    return 0;
}