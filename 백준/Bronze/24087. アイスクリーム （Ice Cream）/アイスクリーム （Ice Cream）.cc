#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int s, a, b;
    cin >> s >> a >> b;
    cout << (250 + ((s - a) / b + !!((s - a) % b)) * (s > a) * 100);
    return 0;
}