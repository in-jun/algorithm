#include <iostream>
using std::cout;

int main()
{
    int h1, m1, s1, h2, m2, s2, a, b;
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf("%d : %d : %d", &h2, &m2, &s2);
    a = h1 * 3600 + m1 * 60 + s1;
    b = h2 * 3600 + m2 * 60 + s2;
    cout << (((b - a) < 0) ? (b - a + 86400) : (b - a));
    return 0;
}