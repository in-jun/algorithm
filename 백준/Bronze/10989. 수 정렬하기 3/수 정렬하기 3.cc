#include <iostream>

int main()
{
    int n, input, arr[10001] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        arr[input] += 1;
    }
    for (int i = 1; i <= 10000; i++)
        for (int j = 0; j < arr[i]; j++)
            printf("%d\n", i);
    return 0;
}