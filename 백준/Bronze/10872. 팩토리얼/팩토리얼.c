#include <stdio.h>

int main()
{
    int a;
    int output = 1;
    scanf("%d",&a);
    while (1)
    {
        if (a==0)
        {
            break;
        }
        output = a*output;
        a--;
    }
  printf("%d",output);
}