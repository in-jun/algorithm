#include <stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);

	if (a+b+c>=100)
	{
		printf("OK");
	}
	else
	{
		if (a > b)
		{
			if (b > c)
			{
				printf("Hanyang");
			}
			else
			{
				printf("Korea");
			}
		}
		else
		{
			if (a > c)
			{
				printf("Hanyang");
			}
			else
			{
				printf("Soongsil");
			}
		}
	}
	
	return 0;
}