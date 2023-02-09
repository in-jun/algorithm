#include <stdio.h>

int main()
{
	int a, b;
	int c, d;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a + d <= b + c)
	{
		printf("%d", a + d);

	}
	else
	{
		printf("%d", b + c);
	}
	return 0;
}