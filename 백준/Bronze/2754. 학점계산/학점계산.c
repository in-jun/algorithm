#include<stdio.h>

int main()
{
	char a[2];
	scanf("%s",a);
	if (a[1]=='-')
	{
		if (a[0]=='A')
		{
			printf("3.7");
		}
		if (a[0]=='B')
		{
			printf("2.7");
		}
		if (a[0]=='C')
		{
			printf("1.7");
		}
		if (a[0]=='D')
		{
			printf("0.7");
		}
		
	}
	else
	{
		if (a[0]=='A')
		{
			printf("4.");
			if(a[1]=='+')
			{
				printf("3");
			}
			else
			{
				printf("0");
			}
		}
		if (a[0]=='B')
		{
			printf("3.");
			if(a[1]=='+')
			{
				printf("3");
			}
			else
			{
				printf("0");
			}
		}
		
		if (a[0]=='C')
		{
			printf("2.");
			if(a[1]=='+')
			{
				printf("3");
			}
			else
			{
				printf("0");
			}
		}
		if (a[0]=='D')
		{
			printf("1.");
			if(a[1]=='+')
			{
				printf("3");
			}
			else
			{
				printf("0");
			}
		}
		
		if (a[0]=='F')
		{
			printf("0.0");
		}
		
		
	}
	
	return 0;
}