#include <stdio.h>

int main()
{
	int a,c,out=0;
	scanf("%d",&a);
	int b[a];
	for (int i = 0; i < a; i++)
	{
		scanf("%d",&b[i]);
	}
	scanf("%d",&c);
	for (int j = 0; j < a; j++)
	{
		if (b[j]==c)
		{
			out++;
		}
	}
	
	printf("%d",out);
	
	return 0;
}

