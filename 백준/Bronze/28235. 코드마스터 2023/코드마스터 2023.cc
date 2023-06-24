#include <iostream>
#include <map>
using std::cin;
using std::cout;
using std::map;
using std::string;

int main()
{
    map<string, string> m{
        {"SONGDO", "HIGHSCHOOL"},
        {"CODE", "MASTER"},
        {"2023", "0611"},
        {"ALGORITHM", "CONTEST"},
    };
    string str;
    cin >> str;
    cout << m[str];
    return 0;
}