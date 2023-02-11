#include <iostream>
#include <cstring>
using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char k[70];
        scanf("%s", k);
        cout << (((k[strlen(k) - 1] - '0') % 2) ? "odd" : "even") << "\n";
    }

    return 0;
}