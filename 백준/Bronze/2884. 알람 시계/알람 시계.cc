#include <stdio.h>

int main()
{
    int h;
    int m;
    int i;
    scanf("%d  %d", &h, &m);
    i = ((60*h)+m)-45;
    if (i%60<0)
    {
        printf("%d %d", 24-((i/60)+1), 60+(i%60));
    }
    else
    {
        printf("%d %d", i/60, i%60);
    }

    return 0;
}