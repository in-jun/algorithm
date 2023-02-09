#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int n;
    int xi;
    int count = 0;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("D-%d", &xi);
        if (i + 1 != n)
        {
            scanf("\n");
        }
        if (xi <= 90)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}