#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (a / 2 <= b)
	{
		printf("%d\n", a / 2);
	}
	else
	{
		printf("%d", b);
	}

	return 0;
}