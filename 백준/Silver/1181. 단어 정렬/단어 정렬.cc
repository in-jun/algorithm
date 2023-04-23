#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::string;

bool compare(string a, string b)
{
    if (a.length() != b.length())
        return a.length() < b.length();
    else
        return a < b;
}

int main()
{
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++)
        cin >> str[i];
    sort(str, str + n, compare);
    string *end = unique(str, str + n);
    for (int i = 0; i < end - str; i++)
        cout << str[i] << '\n';
    return 0;
}