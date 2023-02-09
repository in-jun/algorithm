#include <iostream>
using std::cout;
int main()
{
    int t, s;
    scanf("%d %d", &t, &s);
    cout << (((12 <= t) & (t <= 16) & !s) ? 320 : 280);
    return 0;
}