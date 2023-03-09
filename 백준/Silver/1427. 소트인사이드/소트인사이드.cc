#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::greater;
using std::sort;
using std::string;

int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end(), greater<char>());
    cout << str;
    return 0;
}