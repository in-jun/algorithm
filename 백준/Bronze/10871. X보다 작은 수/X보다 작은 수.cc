#include <stdio.h>

int main(){
	int a;
    int b;
    int c;

	scanf("%d %d", &a, &b);

	for(int i=0;i<a;i++)
    {
        scanf("%d",&c);
        if (b>c)
        {
            printf("%d ", c);
        }
        
	}
	return 0;
}