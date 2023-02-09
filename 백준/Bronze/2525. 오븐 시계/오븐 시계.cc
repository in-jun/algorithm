#include <stdio.h>

int main()
{
    int h;
    int m;
    int t;
    int i;

    scanf("%d  %d\n%d", &h, &m, &t);
   

    i = ((60*h)+m)+t;

    

    if (i/60 ==24)
    {
        printf("0 %d", i%60); 
    }
    else if ((i/60)>24)
    {
         printf("%d %d", (i/60)-24, i%60); 
    }
    
    else
    {
       printf("%d %d", i/60, i%60); 
    }
    
    
    

    return 0;
}