#include <iostream>
#include <map>
using std::cin;
using std::cout;
using std::map;
using std::string;

int main()
{
    map<char, string> m;
    m['M'] = "MatKor";
    m['W'] = "WiCys";
    m['C'] = "CyKor";
    m['A'] = "AlKor";
    m['$'] = "$clear";

    char c;
    cin >> c;
    cout << m[c];

    return 0;
}