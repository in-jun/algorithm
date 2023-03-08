#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::sort;

int main()
{
    int w[10], k[10];
    for (int i = 0; i < 10; i++)
        cin >> w[i];
    for (int i = 0; i < 10; i++)
        cin >> k[i];
    sort(w, w + 10);
    sort(k, k + 10);
    cout << w[9] + w[8] + w[7] << ' ' << k[9] + k[8] + k[7];
    return 0;
}