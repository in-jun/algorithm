#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if (a<0)
	{
		printf("%d",(-1*(a*c))+d+(b*e));
	}
	else
	{
		if (a==0)
		{
			printf("%d",d+(b*e));
		}
		else
		{
			printf("%d",((b-a)*e));
		}
	}
	return 0;
}

