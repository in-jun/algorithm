#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);

	if (a==2&&b==18)
	{
		printf("Special");
	}
	else
	{
		if (a>2)
		{
			printf("After");
		}
		else
		{
			if (a<2)
			{
				printf("Before");
			}

			if (a==2)
			{
				if (b>18)
				{
					printf("After");
				}
				if (b<18)
				{
				printf("Before");
				}
			}
		}
	}
	
	return 0;
}

