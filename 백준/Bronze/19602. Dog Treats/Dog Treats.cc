#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int s, m, l;
    cin >> s >> m >> l;
    if ((s + (m * 2) + (l * 3)) >= 10)
        cout << "happy";
    else
        cout << "sad";
    return 0;
}