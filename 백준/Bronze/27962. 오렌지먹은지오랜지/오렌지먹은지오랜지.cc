#include <iostream>
using std::cin;
using std::cout;
using std::string;

bool check(string s1, string s2)
{
    int count = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
            count++;
        if (count > 1)
            return false;
    }
    return count;
}

int main()
{
    int n;
    string str;
    cin >> n >> str;
    for (int i = 1; i < str.length(); i++)
    {
        if (check(str.substr(0, i), str.substr(str.length() - i)))
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}