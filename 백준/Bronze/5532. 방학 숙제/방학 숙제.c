#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

	if (((b+d-1)/d) > ((c+e-1)/e))
	{
		printf("%d",a-((b+d-1)/d));
	}
	if (((b+d-1)/d) < ((c+e-1)/e))
	{
		printf("%d",a-((c+e-1)/e));
	}
	if (((b+d-1)/d) == ((c+e-1)/e))
	{
		printf("%d",a-((c+e-1)/e));
	}

	return 0;
}
