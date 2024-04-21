#include <iostream>
#include <map>
using std::cin;
using std::cout;
using std::map;
using std::string;

int main()
{
    map<string, string> m;
    m["Algorithm"] = "204";
    m["DataAnalysis"] = "207";
    m["ArtificialIntelligence"] = "302";
    m["CyberSecurity"] = "B101";
    m["Network"] = "303";
    m["Startup"] = "501";
    m["TestStrategy"] = "105";

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        cout << m[input] << '\n';
    }
    return 0;
}