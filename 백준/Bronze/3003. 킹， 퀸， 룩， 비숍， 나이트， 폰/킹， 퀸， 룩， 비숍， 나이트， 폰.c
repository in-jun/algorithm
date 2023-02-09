#include <stdio.h>
int main()
{
    int i[6];
    scanf("%d %d %d %d %d %d", &i[0], &i[1], &i[2], &i[3], &i[4], &i[5]);
    printf("%d %d %d %d %d %d", 1-i[0], 1-i[1], 2-i[2], 2-i[3], 2-i[4], 8-i[5]);

  return 0;
}
