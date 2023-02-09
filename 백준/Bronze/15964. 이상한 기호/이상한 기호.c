#include <stdio.h>
long long h(int a,int b)
{
    return (a+b)*(a-b);
}

int main(){
   int a;
   int b;

    scanf("%d %d",&a,&b);
    printf("%lld",h(a,b));



}