#include<stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	if (a+b>=c*2)
	{
		printf("%d",(a+b)-(c*2));
	}
	else
	{
		printf("%d",a+b);
	}
	
	return 0;
}

