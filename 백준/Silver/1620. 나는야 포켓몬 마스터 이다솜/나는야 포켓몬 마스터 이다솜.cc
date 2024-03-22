#include <iostream>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::map;
using std::stoi;
using std::string;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    map<string, int> map1;
    map<int, string> map2;

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        string str;
        cin >> str;
        map1[str] = i;
        map2[i] = str;
    }

    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        if (atoi(str.c_str()) != 0 || str.compare("0") == 0)
            cout << map2[stoi(str)] << '\n';
        else
            cout << map1[str] << '\n';
    }
    return 0;
}