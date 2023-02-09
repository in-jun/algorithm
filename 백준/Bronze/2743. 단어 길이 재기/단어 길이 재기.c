#include<stdio.h>

int main()
{
	int a=0;
	char b[101];
	scanf("%s",b);
	while (1)
	{
		if (b[a] !=0)
		{
			a++;
		}
		else
		{
			break;
		}
		
	}
	printf("%d", a);

}