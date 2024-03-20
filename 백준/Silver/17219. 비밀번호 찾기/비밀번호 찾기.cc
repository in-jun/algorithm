#include <iostream>
#include <map>
using std::cin;
using std::cout;
using std::map;
using std::string;

int main()
{
    map<string, string> map1;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        map1[a] = b;
    }

    for (int i = 0; i < m; i++)
    {
        string a;
        cin >> a;
        cout << map1[a] << '\n';
    }

    return 0;
}