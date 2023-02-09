#include <iostream>
int main()
{
    int t;
    int arr[7];
    int sum;
    int min;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        sum = 0;
        min = 100;
        for (int j = 0; j < 7; j++)
            scanf("%d", &arr[j]);
        for (int j = 0; j < 7; j++)
        {
            if (!(arr[j] % 2))
            {
                sum += arr[j];
                if (arr[j] < min)
                {
                    min = arr[j];
                }
            }
        }
        printf("%d %d\n", sum, min);
    }
    return 0;
}