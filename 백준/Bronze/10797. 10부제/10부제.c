#include<stdio.h>

int main()
{
	int a,b[5],c=0;
	scanf("%d%d%d%d%d%d",&a,&b[0],&b[1],&b[2],&b[3],&b[4]);
	for (int i = 0; i < 5; i++)
	{
		if (b[i]==a)
		{
			c++;
		}
	}
	printf("%d",c);
	return 0;
}

