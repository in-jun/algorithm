#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", a / 5 + (a % 5 != 0));
	return 0;
}