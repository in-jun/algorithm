#include <iostream>
#include <set>
using std::cin;
using std::cout;
using std::set;
using std::string;

int main()
{
    set<string> arr;
    set<string> ans;

    int a, b;
    cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        string str;
        cin >> str;
        arr.insert(str);
    }

    for (int i = 0; i < b; i++)
    {
        string str;
        cin >> str;
        if (arr.find(str) != arr.end())
            ans.insert(str);
    }

    cout << ans.size() << '\n';
    for (const string &e : ans)
        cout << e << '\n';
    return 0;
}