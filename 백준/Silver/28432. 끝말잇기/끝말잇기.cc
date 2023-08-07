#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main()
{
    int n, m;
    cin >> n;

    vector<string> str(n);
    for (auto &s : str)
        cin >> s;

    int q = find(str.begin(), str.end(), "?") - str.begin();

    cin >> m;
    while (m--)
    {
        string a;
        cin >> a;
        if (find(str.begin(), str.end(), a) == str.end() && (!q || str[q - 1].back() == a.front()) && (q == n - 1 || a.back() == str[q + 1].front()))
            cout << a;
    }
    return 0;
}