#include<stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d\n%d",(a+b+c+d)/60,(a+b+c+d)%60);
	return 0;
}

