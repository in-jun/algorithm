#include <iostream>
using std::cin;
using std::cout;
using std ::string;

int main()
{
    int n, a, b, c;
    bool check;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s >> a >> b >> c;
        check = a >= 10.5 && b >= 7.5 && c >= 12 && (a + b + c) >= 55;
        cout << s << ' ' << a + b + c << ' ' << (check ? "PASS" : "FAIL") << '\n';
    }
    return 0;
}