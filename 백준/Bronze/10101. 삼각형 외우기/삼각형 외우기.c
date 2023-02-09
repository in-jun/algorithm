#include<stdio.h>
int main()
{
	int a,b,c;

	scanf("%d%d%d",&a,&b,&c);
	if ((a+b+c)==180)
	{
		if (a==b && a==c)
		{
			printf("Equilateral");
		}
		else
		{
			if (a==b||a==c||c==b)
			{
				printf("Isosceles");

			}
			else
			{
				printf("Scalene");
			}
			
			
		}
		
	}
	else
	{
		printf("Error");
	}
	
	return 0;
}
