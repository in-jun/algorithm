#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a >= b / 2 + c)
	{
		printf("%d", b / 2 + c);
	}
	else
	{
		printf("%d", a);
	}
	return 0;
}