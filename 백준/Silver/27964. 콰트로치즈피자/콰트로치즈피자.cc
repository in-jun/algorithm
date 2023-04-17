#include <iostream>
#include <map>
using std::cin;
using std::cout;
using std::map;
using std::string;

int main()
{
    int n;
    string str;
    map<string, bool> m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str.length() >= 6)
            if (str.substr(str.length() - 6) == "Cheese")
                m[str.substr(0, str.length() - 6)] = true;
    }
    cout << ((m.size() >= 4) ? "yummy" : "sad");
    return 0;
}