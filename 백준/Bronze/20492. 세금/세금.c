#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d %d", a - ((a * 22) / 100), a - ((((a * 20) / 100) * 22) / 100));
	return 0;
}