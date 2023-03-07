#include <iostream>
using std::cout;

int main()
{
    int a, b, c;
    scanf("%d + %d = %d", &a, &b, &c);
    cout << (((a + b) == c) ? "YES" : "NO");
    return 0;
}