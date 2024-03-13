#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::sort;
using std::string;
using std::vector;

int main()
{
    string ans;
    vector<string> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end(), [](string a, string b)
         { return a + b > b + a; });

    for (string str : v)
        ans += str;

    if (ans[0] == '0')
        ans = "0";

    cout << ans;
    return 0;
}