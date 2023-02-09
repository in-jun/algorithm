#include <stdio.h>

int main()
{
    int multiple;
    int _100unit;
    int _10unit;
    int _1unit;
    

    scanf("%d", &multiple);
    scanf("%1d%1d%1d", &_100unit, &_10unit, &_1unit);

    printf("%d\n", multiple*_1unit);
    printf("%d\n", multiple*_10unit);
    printf("%d\n", multiple*_100unit);
    printf("%d\n", multiple*((_100unit*100)+(_10unit*10)+(_1unit*1)));

    return 0;
}