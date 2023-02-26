#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, h, v;
    cin >> n >> h >> v;
    h = ((n - h) > h) ? n - h : h;
    v = ((n - v) > v) ? n - v : v;
    cout << v * h * 4;
    return 0;
}