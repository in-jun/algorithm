#include <stdio.h>

int main()
{
	int b;
	scanf("%d", &b);
	char a[b];
	getchar();
	scanf("%s", a);

	for (int i = b - 5; i < b; i++)
	{
		printf("%c", a[i]);
	}


	return 0;
}