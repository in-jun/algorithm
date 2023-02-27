#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int wc, hc, ws, hs;
    cin >> wc >> hc >> ws >> hs;
    cout << ((wc > (ws + 1)) && (hc > (hs + 1)));
    return 0;
}