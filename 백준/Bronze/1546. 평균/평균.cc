#include <stdio.h>


int main(){
    int a;
    scanf("%d", &a);
    double b[a];
    double c = -1;
    double d = 0;

    for (int i = 0; i < a; i++)
    {
        scanf("%lf", &b[i]);
    }

    for (int in = 0; in < a; in++)
    {
         if(c<b[in])
        {
           c = b[in]; 
        }
    }
    for (int inn = 0; inn < a; inn++)
    {
        d = d + (b[inn]/c)*100;
    }
    printf("%lf", d/a);
    
    

    return 0;
}
