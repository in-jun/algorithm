#include <iostream>
using std::cout;
int main()
{
    int A, B, C, N, add = 0;
    int a, b, c, max = 0;
    scanf("%d %d %d", &A, &B, &C);
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d %d %d", &a, &b, &c);
            add += (A * a) + (B * b) + (C * c);
        }
        max = ((max <= add) ? add : max);
        add = 0;
    }
    cout << max;
    return 0;
}