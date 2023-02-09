#include <stdio.h>

int main(){
    long long a;
    long long b;

    scanf("%lld %lld",&a,&b);

    if (0>a-b)
    {
        printf("%lld",-(a-b));
    }
    else 
    {
        printf("%lld",(a-b));
    }
    
    
    

}