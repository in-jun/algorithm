#include <stdio.h>

int main()
{
	int a, b = 1;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		b = b * 2;
	}
	printf("%d", b);
	return 0;
}