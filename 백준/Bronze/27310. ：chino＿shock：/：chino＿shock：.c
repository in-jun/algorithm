#include <stdio.h>
#include <string.h>

char str[33];
int underBar();

int main()
{
    scanf("%*6s %[^:]%*c", str);
    printf("%lu\n", (strlen(str) + 9) + underBar() * 5);
}
int underBar()
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        count += ((str[i] == '_') ? 1 : 0);
    }
    return count;
}
