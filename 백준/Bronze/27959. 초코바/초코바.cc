#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << ((n * 100 >= m) ? "Yes" : "No");
    return 0;
}