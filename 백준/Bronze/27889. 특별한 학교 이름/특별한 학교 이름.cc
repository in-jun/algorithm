#include <iostream>
#include <map>
using std::cin;
using std::cout;
using std::map;
using std::string;

int main()
{
    map<string, string> m;
    string str;
    m["NLCS"] = "North London Collegiate School";
    m["BHA"] = "Branksome Hall Asia";
    m["KIS"] = "Korea International School";
    m["SJA"] = "St. Johnsbury Academy";
    cin >> str;
    cout << m[str];
    return 0;
}