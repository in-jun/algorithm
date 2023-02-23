#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, w, h, l;
    cin >> n >> w >> h >> l;
    cout << ((n < ((w / l) * (h / l))) ? (n) : ((w / l) * (h / l)));
    return 0;
}