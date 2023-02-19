#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;
    unsigned long long int a, b, c, d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        cout << (((a * b) == (c * d)) ? "Tie" : ((a * b) > (c * d) ? "TelecomParisTech" : "Eurecom")) << '\n';
    }
    return 0;
}