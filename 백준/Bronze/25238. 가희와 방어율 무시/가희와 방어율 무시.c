#include <stdio.h>

int main()
{
	int a;
	int b;
	scanf("%d %d", &a, &b);
	if ((a * (100 - b)) / 100 >= 100)
	{
		printf("0");
	}
	else
	{
		printf("1");
	}

	return 0;
}