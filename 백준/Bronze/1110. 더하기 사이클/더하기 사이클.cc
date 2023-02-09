#include <stdio.h>


int main(){
	int a;
    int b;
    int i=0;
    
    scanf("%d", &b);
    a = b;
   
    while (1)
    {
        i++;
        a = (((a/10+a%10)%10)+((a%10)*10));
        
        if (b == a)
        {
            printf("%d", i);
            break;
        }

    }
    
	return 0;
}