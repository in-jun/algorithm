#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
        str[i] += 'A' <= str[i] && str[i] <= 'Z' ? 32 : -32;
    cout << str;
    return 0;
}