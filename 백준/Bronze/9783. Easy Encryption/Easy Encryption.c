#include <stdio.h>
#include <string.h>
int main()
{
    char str[129];
    scanf("%[^\n]%*c", str);
    for (int i = 0; i < strlen(str); i++)
        if ('0' <= str[i] && str[i] <= '9')
            printf("#%c", str[i]);
        else if ('a' <= str[i] && str[i] <= 'z')
            printf("%02d", ((int)str[i] - 'a') + 1);
        else if ('A' <= str[i] && str[i] <= 'Z')
            printf("%02d", ((int)str[i] - 'A') + 27);
        else
            printf("%c", str[i]);
    return 0;
}