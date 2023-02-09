#include<stdio.h>

int main()
{
	int a[5];
	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	for (int i = 0; i < 5; i++)
	{
		if (a[i]<40)
		{
			a[i]=40;
		}
		
	}
	printf("%d", ((a[0]+a[1]+a[2]+a[3]+a[4])/5));
	return 0;
}